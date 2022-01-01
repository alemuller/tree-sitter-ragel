const immd = (x) => token.immediate(x);

module.exports = grammar({
  name: 'ragel',

  word: $ => $.word,

  extras: $ => [
    $.comment,
    /\\\r?\n/,
    /[\t\n ]+/
  ],

  inline: $ => [
    $._fsm_name,
    $._lhs,
    $._rhs,
  ],

  conflicts: $ => [
  ],

  supertypes: $ => [
    $._statement
  ],

  rules: {

    specification: $ => repeat($._statement),

    _statement: $ => choice(
      $.machine_decl,
      $.include_spec,
      $.import_spec,
      $.machine_def,
      $.machine_inst,
    ),

    machine_decl: $ => seq(
      'machine',
      field('name', $.word),
      ';'
    ),

    include_spec: $ => choice(
      seq('include', $._fsm_name, optional($.string), ';'),
      seq('include', $.string, ';'),
    ),

    _fsm_name: $ => field('machine', $.word),

    import_spec: $ => seq(
      'import', $.string, ';'
    ),

    machine_def: $ => seq(
      field('name',$.word),
      '=',
      field('expr', $._expression),
      ';'
    ),

    machine_inst: $ => seq(
      field('name',$.word),
      ':=',
      field('expr', $._expression),
      ';'
    ),

    //
    // Expression
    // ==========
    //
    _expression: $ => choice(
      $.join,
      $._binary_expression
    ),

    // parse as list (lists in AST are easier for humans to read)
    join: $ => seq(
      repeat1(seq(
        $._binary_expression,
        field('operator',',')
      )),
      $._binary_expression
    ),

    _binary_expression: $ => choice(
      $.combine,
      $.intersect,
      $.subtract,
      $._term,
    ),

    combine: $ => prec.left(seq(
      $._lhs,
      field('operator','|'),
      $._rhs,
    )),

    intersect: $ => prec.left(seq(
      $._lhs,
      field('operator','&'),
      $._rhs,
    )),

    subtract: $ => prec.left(seq(
      $._lhs,
      field('operator',choice('--','-')),
      $._rhs,
    )),

    _lhs: $ => field('lhs', $._binary_expression),
    _rhs: $ => field('rhs', $._binary_expression),

    _term: $ => choice(
      $.concatenate,
      $._factor_label
    ),

    // parse as list (lists in AST are easier for humans to read)
    concatenate: $ => choice(
      seq(repeat1(seq($._factor_label, '.')), $._factor_label),
    ),

    _factor_label: $ => choice(
      $.label,
      $._factor_ep
    ),

    label: $ => seq(
      $.word, ':', $._factor_label
    ),

    _factor_ep: $ => choice(
      // $.epislon,
      $._factor_aug
    ),

    _factor_aug: $ => choice(
      //$.augument,
      $._factor_rep
    ),

    _factor_rep: $ => choice(
      $.repeat,
      $._factor_neg
    ),

    repeat: $ => choice(
      seq($._factor_rep, $._rep_op),
      seq($._factor_rep, $.limits),
    ),

    _rep_op: $ => choice(
      '*',  // Star
      '**', // StarStar
      '?',  // Optional
      '+',  // Plus
    ),

    limits: $ => choice(
      seq('{', $._exactly,                  '}'), // ExactRep
      seq('{',             ',', $._maximum, '}'), // MaxRep
      seq('{', $._mininum, ',',             '}'), // MinRep
      seq('{', $._mininum, ',', $._maximum, '}'), // RangeRep
    ),

    _mininum: $ => field('minimum', $.uint),
    _maximum: $ => field('maximum', $.uint),
    _exactly: $ => field('exactly', $.uint),

    _factor_neg: $ => choice(
      $.negate,
      $._factor
    ),

    negate: $ => choice(
      seq('!', $._factor_neg),
      seq('^', $._factor_neg),
    ),

    _factor: $ => choice(
      $._alphabet_num,
      $.group,
      $.string
    ),

    group: $ => seq(
      '(', $._expression, ')',
    ),

    //
    // Literal
    // =======
    //
    _alphabet_num: $ => choice(
      $._number,
      $.word
    ),

    string: $ => choice(
      token(/"([^"\\]|\\.)*"i?/),
      token(/'([^'\\]|\\.)*'i?/)
    ),

    _number: $ => choice(
      $.uint,
      $.signed,
      $.hex,
    ),

    signed: $ => choice(
      seq(field('sign','-'), $.uint),
      seq(field('sign','+'), $.uint),
    ),

    uint:       $ => token(/[0-9]+/),
    hex:        $ => token(/0x[0-9a-fA-F]+/),
    hex_char:   $ => token(/0x[0-9a-fA-F]{2}/),
    word:       $ => token(/[a-zA-Z_][a-zA-Z_0-9]*/),

    //
    // Escape sequence
    // ---------------
    _escape: $ => choice(
      //$.quote,
      $.ctrl_code,
    ),

    ctrl_code: $ => token(seq(
      '\\', choice('a', 'b', 't', 'n', 'v', 'f', 'r')
    )),

    //
    // Other tokens
    // ============
    //

    comment: $ => token(/#[^\n]*\n/),

  }

});

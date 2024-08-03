module.exports = grammar({
    name: 'webreport',
    extras: () => [],
    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            //            $.webreport_tag_definition,
            $._reptag_definition
        ),

        webreport_tag_definition: $ => seq(
            $._begin_tag,
            $._webreport,
            field('webreport_action', $.identifier),
            $._end_tag
        ),

        _reptag_definition: $ => seq(
            $._begin_tag,
            $._reptag,
            $._main_tag,
            $._whitespace,
            $._end_tag
        ),

        _main_tag: $ => choice(
            $.parameter_tag,
            $.constant_tag,
            $.variable_tag,
            $.column_tag,
            $.column_index_tag,
            $.literal_quote_tag,
            $.literal_dblquote_tag
        ),

        parameter_tag: $ => seq(
            $._parameter_tag_prefix,
            field('parameter_name', $.identifier)
        ),

        constant_tag: $ => seq(
            $._constant_tag_prefix,
            field('constant_name', $.identifier)
        ),

        variable_tag: $ => seq(
            $._variable_tag_prefix,
            field('variable_name', $.identifier)
        ),

        column_tag: $ => seq(
            $._column_tag_prefix,
            field('column_name', $.identifier)
        ),

        column_index_tag: $ => seq(
            '_',
            field('column_index', $.number)
        ),

        literal_quote_tag: $ => seq(
            '_',
            $._quote,
            field('literal_value', repeat($.identifier)),
            $._quote
        ),

        literal_dblquote_tag: $ => seq(
            '_',
            $._dblquote,
            field('literal_value', repeat($.identifier)),
            $._dblquote
        ),

        _begin_tag: $ => '[LL_',

        _end_tag: $ => '/]',

        _parameter_tag_prefix: $ => '_&',

        _constant_tag_prefix: $ => '_$',

        _variable_tag_prefix: $ => '_!',

        _column_tag_prefix: $ => '=',

        _webreport: $ => 'WEBREPORT_',

        _reptag: $ => 'REPTAG',

        identifier: $ => /[a-zA-Z]+/,

        number: $ => /\d+/,

        _quote: $ => "'",

        _dblquote: $=> '"',

        _whitespace: $ => /\s+/
    }
});

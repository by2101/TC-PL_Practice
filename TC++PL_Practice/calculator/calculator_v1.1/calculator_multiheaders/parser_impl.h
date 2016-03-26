#pragma once
#include "parser.h"
#include "lexer.h"
#include "error.h"

namespace Parser {
	double prim(bool get);
	double term(bool get);
	double expr(bool get);

	using Lexer::get_token;
	using Lexer::curr_tok;
}
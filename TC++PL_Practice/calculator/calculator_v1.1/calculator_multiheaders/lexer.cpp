#include "lexer.h"
#include "error.h"
#include <iostream>
#include <cctype>

Lexer::Token_value Lexer::curr_tok;
double Lexer::number_value;
std::string  Lexer::string_value;

Lexer::Token_value Lexer::get_token()
{
	using namespace std;

	char ch = 0;
	cin >> ch;

	switch (ch)
	{
	case 0:
		return curr_tok = END;
	case ';':
	case '*':
	case '/':
	case '+':
	case '-':
	case '(':
	case ')':
	case '=':
		return curr_tok = Token_value(ch);
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
	case '.':
		cin.putback(ch);
		cin >> number_value;
		return curr_tok = Token_value(NUMBER);
	default:
		if (isalpha(ch))
		{
			cin.putback(ch);
			cin >> string_value;
			return curr_tok = NAME;
		}
		throw Error::Syntax_error("bad token.");
		return curr_tok = PRINT;

	}
}
#include "parser.h"
#include "lexer.h"
#include "error.h"
#include "table.h"

namespace Driver {
	int no_of_errors;

}

#include <iostream>
int main(int argc, char* argv[])
{
	using namespace std;
	using namespace Lexer;
	using namespace Parser;
	using namespace Driver;

	while (cin)
	{
		get_token();
		if (curr_tok == END)
			break;
		if (curr_tok == PRINT)
			continue;
		cout << expr(false) << '\n';
	}
	return no_of_errors;
	return 0;

}
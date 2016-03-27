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

	char * intro = "This calculator is a toy program to practice\n" 
					"usage of namespace, headers, and how to write\n"
					"a modular program. I also learned some parsing\n"
					"technique and grammer knowledge.\n\n"
					"You can input some arithmetic expression such as\n"
					"1 + 5 * 6, and enter to achive result. You can press\n"
					" q to quit the program.\n\n";
	cout << argv[0] << '\n';
	cout << intro;

	while (cin)
	{
		cout << "Enter an expression: \n";
		get_token();
		if (curr_tok == END)
			break;
		if (curr_tok == PRINT)
			continue;
		cout << "The result is: "<<expr(false) << '\n';
	}
	return no_of_errors;
}
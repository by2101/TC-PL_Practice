#include <iostream>

//Practice4
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

//Practice 6
void h(const char &c)
{
	return;
}
void g(char &c)
{
	return;
}
int main()
{
	//Practice 1
	char c = 'a';
	char *ptrC = &c;

	int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(&rNumber)[10] = numbers;  // a reference to an array

	char *strLiteral = "This is a string literal."; //It is equivalent to const char *str.
	char str[] = "abc";//This is a string array;
	str[1] = 'd'; //You can change a character.
	char *pStr = str;
	char **ppC = &ptrC;

	const int cn = 10; // a const int
	int n = 11; // a common int
	const int *pcN = &cn; //pcN is an int pointer to an int const.
	int *const cpN = &n; //cpN is a constant pointer to an int.
	pcN++;//you can change pcN;
	//cpN++;//you can't change cpN;

	//Practice3
	typedef char** ppc;
	ppc ptr2ptrChar = ppC;

	typedef int* ptrInt;
	ptrInt ptr2int[7];

	typedef int** ppi;
	ppi ptrIntPointerArray = ptr2int;

	typedef int*** pppi;
	pppi pppI[8];

	//Practice 4
	int a = 1;
	int b = 2;
	swap(&a, &b);
	swap(a, b);

	//Practice 5
	char str2[] = "a short string";

	//
	h('a');

	return 0;
}
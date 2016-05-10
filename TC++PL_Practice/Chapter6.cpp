#include <cstdio>
#include <cstring>
void rev(char *p)
{
	int len = strlen(p);
	char *q = p + len-1;
	while (p < q)
	{
		char t = *p;
		*p++ = *q;
		*q-- = t;
	}
	return;
}
int atoi(const char *str)
{
	int sum = 0;
	for (; *str != '\0'; str++)
	{
		sum *= 10;
		sum += (*str - '0');
	}
	return sum;
}
//not complete
int atoi2(const char *str)
{
	int base = 10;
	if (*str == '0')
	{
		if (*(str + 1) == 'x')
		{
			base = 16;
		}
		else
		{
			base = 8;
		}
	}
	int sum = 0;
	for (; *str != '\0'; str++)
	{
		sum *= base;
		sum += (*str - '0');
	}
	return sum;
}

char *itoa(int i, char b[])
{
	char index[] = "0123456789";
	int j = 0;
	while (i)
	{
		b[j++] = index[i % 10];
		i /= 10;
	}
	b[j] = '\0';
	rev(b);
	return b;
}
int main()
{
	char str[20] = "0x18";
	
	printf("%s", itoa(12345,str));
	return 0;
}
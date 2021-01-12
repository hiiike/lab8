#include <iostream>
#include <Windows.h>

using namespace std;
int Count(char* str, int i, int k)
{
	if (strlen(str) < 5)
		return 0;
	if (i < strlen(str))
	{
		if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
			k++;
		return Count(str, i + 1, k);
	}
	else
		return k;
}
char* change(char* str, char* t, int i, char* tmp)
{
	if (str[i] != 0)
	{
		if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
		{
			strcat_s(t, sizeof(str), "***");
			return change(str, t + 3, i + 5, tmp);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return change(str, t, i, tmp);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return tmp;
	}
}
void print(const char* x, int i)
{
	if (x[i] != '\0')
	{
		cout << x[i];
		return print(x, i + 1);
	}
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char str[201];

	cout << "Enter string: ";
	cin.getline(str, 200); cout << endl;

	cout << "String contained  " << Count(str, 0, 0) << " group of 'while'." << endl;
	cout << "Modified string:";
	cout << endl;

	char* tmp1 = new char[121];
	tmp1[0] = '\0';

	char* tmp2;
	tmp2 = change(str, tmp1, 0, tmp1);
	print(tmp2, 0);

	return 0;
}

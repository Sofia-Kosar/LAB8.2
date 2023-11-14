#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
bool Available(char* str)
{
	for (int i = 0; str[i + 1] != 0; i++)
		if (str[i] == ' ' && str[i + 1] == 'a' || str[0] == 'a')
			return 1;

	return 0;
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	if (Available(str))
		cout << "Have word starts with 'a': " << "Yes" << endl;
	else
		cout << "Have word starts with 'a': " << "No" << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	char alph[27];
	char *ptr;
	ptr = alph;
	*ptr = 3 + 'a';
	cout << *ptr << endl;
	for (int i = 0; i < 26; i++)
	{
		*ptr = i + 'a';
		ptr++;
	}
	ptr = alph;
	for (int i = 0; i < 26; i++)
	{
		cout << *ptr << endl;
		ptr++;
	}
	system("pause");
	return 0;
}

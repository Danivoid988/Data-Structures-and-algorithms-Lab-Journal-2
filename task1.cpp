 #include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char str[52], *p;
	int vowel, consonant;
	cout << "Enter The charachters you want to check" << endl;
	cin.getline(str, 52);
	p = str;
	vowel = 0;
	consonant = 0;
	while (*p != '\0')
	{
		if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
		{
			vowel = vowel +1;
		}
		else 
		{
			consonant++;
		}
		p++;
	}
	cout << "Total number of vowels in the string : " << vowel  <<endl;
	cout << "Total number of consonants in the string : " << consonant << endl;

	system("pause");
	return 0;
}

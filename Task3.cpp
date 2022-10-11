#include <iostream>
using namespace std;
void reverse(char* str)
{
int len;
char *start_ptr, *end_ptr, chara;
len = strlen(str);
start_ptr = str;
end_ptr = str;
for (int i = 0; i < len - 1; i++)
{
end_ptr++;
}
for (int j = 0; j < len / 2; j++)
{
chara = *end_ptr;
*end_ptr = *start_ptr;
*start_ptr = chara;
start_ptr++;
end_ptr--;
}
}
int main()
{
char str[50];
cout << "Enter a string for reverse" << endl;
cin >> str;
reverse(str);
cout << "Reverse of the entered string is " << endl << str << endl;
system("pause");
return 0;
}

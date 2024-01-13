#include <iostream>
using namespace std;
#include <string.h> //for strcmp()
////////////////////////////////////////////////////////////////
class StringA //user-defined string type
{
private:
	enum { SZ = 80 }; //size of String objects
	char str[SZ]; //holds a string
public:
	StringA() //constructor, no args
	{
		strcpy_s(str, "");
	}
	StringA(char s[]) //constructor, one arg
	{
		strcpy_s(str, s);
	}
	StringA(string s) //constructor, one arg
	{
		int i = 0;
		for (; i < s.length(); i++)
			str[i] = s[i];
		str[i] = '\0';
	}
	void display() const //display a String
	{
		cout << str;
	}
	void getstr() //read a string
	{
		cin.get(str, SZ);
	}
	bool operator == (StringA ss) const //check for equality
	{
		return (strcmp(str, ss.str) == 0) ? true : false;
	}
	void setvalue(string s)
	{

	}
};
int main()
{
	StringA s1("yes");
	StringA s2("no");
	StringA s3;
	/*s1.setvalue("yes");
	s2.setvalue("no");*/
	cout << "\nEnter 'yes' or 'no': ";
	s3.getstr(); //get String from user
	if (s3 == s1) //compare with "yes"
		cout << "You typed yes\n";
	else if (s3 == s2) //compare with "no"
		cout << "You typed no\n";
	else
		cout << "You didn’t follow instructions\n";
	system("pause");
	return 0;
}
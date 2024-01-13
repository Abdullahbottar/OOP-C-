//#include <iostream>
//#include <string>
//using namespace std;
//class sting
//{
//	string str;
//public:
//	bool operator==(sting& s)
//	{
//		if (str == s.str)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(sting& s)
//	{
//		if (str == s.str)
//		{
//			return false;
//		}
//		return true;
//	}
//	int lenght(string& s)
//	{
//		int len = s.size();
//		return len;
//	}
//	bool operator>(sting& s)
//	{
//		if (lenght(str) > lenght(s.str))
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator<(sting& s)
//	{
//		if (lenght(str) < lenght(s.str))
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator>=(sting& s)
//	{
//		if (lenght(str) >= lenght(s.str))
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator<=(sting& s)
//	{
//		if (lenght(str) <= lenght(s.str))
//		{
//			return true;
//		}
//		return false;
//	}
//	void operator+=(sting& s)
//	{
//		str = str + s.str;
//	}
//	sting operator + (sting& s)
//	{
//		sting temp;
//		temp.str =str + s.str;
//		return temp;
//	}
//	friend istream& operator>>(istream& input, sting& s);
//	friend ostream& operator<<(ostream& output, sting& s);
//	void operator=(sting& s)
//	{
//		str = s.str;
//	}
//	char& operator[](int a)
//	{
//		return str[a];
//	}
//
//};
//istream& operator>>(istream& input, sting& s)
//{
//	cout << "enter the string:";
//	input >> s.str;
//	return input;
//}
//ostream& operator<<(ostream& output, sting& s)
//{
//	output << s.str;
//	return output;
//}

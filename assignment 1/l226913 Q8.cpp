//#include <iostream>
//#include <string>
//using namespace std;
//void freq(string str)
//{
//	int s = str.size();
//	int c = 0;
//	for (int i = 0; i < s; i++)
//	{
//		c = 0;
//	    c = int(str[i]);
//		if (c <= 90)
//		{
//			c += 32;
//			str[i] = char(c);
//			if (c > 122 || c < 97)
//			{
//				str[i] = ' ';
//			}
//		}
//	}
//	char temp = 0;
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = (i + 1); j < s; j++)
//		{
//			if (str[i] >= str[j])
//			{
//				temp = str[i];
//				str[i] = str[j];
//				str[j] = temp;
//			}
//		}
//	}
//	cout << "The frequency is." << endl;
//	int count = 0;
//	for (int i = 0; i < s; i++)
//	{
//		count = 1;
//		while (str[i] == ' ')
//		{
//			i++;
//		}
//		for (int j = (i+1); j < s; j++)
//		{
//			if (str[i] == str[j])
//			{
//				count++;
//				str[j] = ' ';
//			}
//		}
//		if (i >= s)
//		{
//			break;
//		}
//		cout << str[i] << "\t" << count << endl;
//	}
//}
//int main()
//{
//	string str;
//	cout << "enter the string:";
//	getline(cin, str);
//	freq(str);
//	return 0;
//}
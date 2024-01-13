//#include "Student.h"
//class Graduate : public Student {
//
//	string thesis;
//
//public:
//	Graduate(string f, string l, int age, float c, string thesis1) : Student(f, l, age, c)
//	{
//		int i;
//		for (i = 0; thesis1[i] != 0; i++)
//		{
//			thesis[i] = thesis1[i];
//		}
//		thesis[i] = 0;
//
//		cout << "Graduate Class' Parameterized Constructor called" << endl;
//
//	}
//	void set_thesis_topic(char t[50])
//	{
//		int i;
//		for (i = 0; t[i] != 0; i++)
//		{
//			thesis[i] = t[i];
//		}
//		thesis[i] = 0;
//	}
//	string get_thesis_topic()
//	{
//		return thesis;
//	}
//	void printGraduate()
//	{
//		cout << getfname() << " " << getlname() << " is a Graduate Student, his CGPA is " <<
//			get_cgpa() << " and his thesis topic is " << thesis << endl;
//	}
//	~Graduate()
//	{
//		cout << "~Graduate() Called" << endl;
//	}
//};

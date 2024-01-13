//#include "Student.h"
//class Undergraduate : public Student {
//	string fyp;
//public:
//
//	Undergraduate(string f, string l, int age, float c, string fyp1) : Student(f, l, age, c)
//	{
//		int i;
//		for (i = 0; fyp[i] != 0; i++)
//		{
//			fyp[i] = fyp1[i];
//		}
//		fyp[i] = 0;
//		cout << "Undergraduate Class' Parameterized Constructor called" << endl;
//	}
//	void set_fyp_name(char f[50])
//	{
//		int i;
//		for (i = 0; f[i] != 0; i++)
//		{
//			fyp[i] = f[i];
//		}
//		fyp[i] = 0;
//	}
//	string get_fyp_name()
//	{
//		return fyp;
//	}
//	void printUndergraduate()
//	{
//		cout << getfname() << " " << getlname() << " is an Undergraduate Student, his CGPA is " <<
//			get_cgpa() << " and his Final year Project is titled " << fyp << endl;
//	}
//	~Undergraduate()
//	{
//		cout << "~Undergraduate() Called" << endl;
//	}
//};

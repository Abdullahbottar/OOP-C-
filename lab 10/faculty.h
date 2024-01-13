//#include "Person.h"
//
//class Faculty : public person {
//	int course_count;
//	int txt_ext[3];
//
//public:
//	Faculty(string f, string l, int age, int c, int t[3]) : person(f, l, age)
//	{
//		course_count = c;
//		for (int i = 0; i < 3; i++)
//		{
//			txt_ext[i] = t[i];
//		}
//		cout << "Faculty Class' Parameterized Constructor Called" << endl;
//	}
//	void set_course_count(int course)
//	{
//		course_count = course;
//	}
//	int get_course_count()
//	{
//		return course_count;
//	}
//	void set_txt_ext(int txt[3])
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			txt_ext[i] = txt[i];
//		}
//	}
//	int* get_txt_ext()
//	{
//		return txt_ext;
//	}
//	void printFaculty()
//	{
//		cout << getfname() << " " << getlname() << ", Age: " << getage() << ", Number of Courses: "<< course_count << ", Ext. ";
//		for (int i = 0; i < 3; i++)
//		{
//			cout << txt_ext[i] << " ";
//		}
//		cout << endl;
//	}
//	~Faculty()
//	{
//		cout << "~Faculty() Called" << endl;
//	}
//};
//

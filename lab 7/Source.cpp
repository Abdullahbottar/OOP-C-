//#include <iostream>
//#include <string>
//using namespace std;
//class professor
//{
//	string name;
//	int emid;
//	string desin;
//public:
//	friend class depart;
//	string getname()
//	{
//		return name;
//	}
//	void setname(string name)
//	{
//		this->name= name;
//	}
//	int getemid()
//	{
//		return emid;
//	}
//	void setemid(int emid)
//	{
//		this->emid= emid;
//	}
//	string getdesin()
//	{
//		return desin;
//	}
//	void setdesin(string desin)
//	{
//		this->desin = desin;
//	}
//};
//class depart
//{
//	string name;
//	int dpartid;
//	char *typprof;
//	int noofprof;
//public:
//	friend class uni;
//	string getname()
//	{
//		return name;
//	}
//	void setname(string name)
//	{
//		this->name = name;
//	}
//	int getdpartid()
//	{
//		return dpartid;
//	}
//	void setdpartid(int departid)
//	{
//		this->dpartid = departid;
//	}
//	char* gettypprof()
//	{
//		return typprof;
//	}
//	void settypprof(char* typprof)
//	{
//		this->typprof = typprof;
//	}
//	int getnoofprof()
//	{
//		return noofprof;
//	}
//	void setnoofprof(int noofprof)
//	{
//		this->noofprof = noofprof;
//	}
//};
//class uni
//{
//	string name;
//	char **departtype;
//	int noofdepart;
//public:
//	uni()
//	{
//		name = '0';
//		departtype = new char*[50];
//		noofdepart = 0;
//	}
//	uni(string name)
//	{
//		this->name=name;
//	}
//	string getname()
//	{
//		return name;
//	}
//	void setname(string name)
//	{
//		this->name = name;
//	}
//	char** getdeparttype()
//	{
//		return departtype;
//	}
//	void settypprof(char** departtype)
//	{
//		this->departtype = departtype;
//	}
//	int getnoofdepart()
//	{
//		return noofdepart;
//	}
//	void setnoofprof(int noofdepart)
//	{
//		this->noofdepart = noofdepart;
//	}
//	bool adddepartment(depart d)
//	{
//		string s= d.getname();
//		int size=s.size();
//		departtype[noofdepart] = new char[size+1];
//		int i = 0;
//		for (i = 0; i < size; i++)
//		{
//			departtype[noofdepart][i] = s[i];
//		}
//		departtype[noofdepart][i] = '\0';
//		d.setdpartid(noofdepart);
//		noofdepart++;
//	}
//	bool deletedepartment(string name)
//	{
//		for (int i = 0; i < noofdepart; i++)
//		{
//			if (departtype[i] == name)
//			{
//				for (int j = i; j < (noofdepart - 1); j++)
//				{
//					departtype[i] = departtype[j + 1];
//				}
//				noofdepart--;
//			}
//		}
//	}
//	bool updatedepartment(int id, string name)
//	{
//		int v = name.size();
//
//		departtype[id] = name;
//	}
//};
//int main()
//{
//	cout << "hello world";
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class father
//{
//	string fname;
//	string name;
//	int age;
//public:
//	father()
//	{
//		fname = '0';
//		name = '0';
//		age = 0;
//	}
//	father(string fname,string name,int age)
//	{
//		this->fname = fname;
//		this->name = name;
//		this->age = age;
//		cout << "father constuct" << endl;
//	}
//	void print()
//	{
//		cout << fname << endl;
//		cout << name << endl;
//		cout << age << endl;
//	}
//	~father()
//	{
//		cout << "father destruct" << endl;
//	}
//};
//class child : protected father
//{
//	string cname;
//	int cage;
//	father info;
//public:
//	child(string cname, int cage, string fname, string faname, int fage) :info(fname, faname, fage)
//	{
//		this->cname = cname;
//		this->cage = cage;
//		cout << "child construct" << endl;
//	}
//	void print()
//	{
//		info.print();
//		cout << cname << endl;
//		cout << cage << endl;
//	}
//	~child()
//	{
//		cout << "child destruct" << endl;
//	}
//};
//int main()
//	{
//	int age;
//	string name;
//	string fname;
//	string famname;
//	int fage;
//	cout << "enter child name:";
//	cin >> name;
//	cout << "enter child age:";
//	cin >> age;
//	cout << "enter father name:";
//	cin >> fname;
//	cout << "enter father age:";
//	cin >> fage;
//	cout << "enter family name:";
//	cin >> famname;
//	child obj(name, age, famname, fname, fage);
//	obj.print();
//
//		return 0;
//	}

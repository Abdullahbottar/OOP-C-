//#include <iostream>
//using namespace std;
//class instructor
//{
//	string first;
//	string last;
//	string officeno;
//	string design;
//public:
//	friend class course;
//	instructor()
//	{
//		first = '0';
//		last = '0';
//		officeno = '0';
//		design = '0';
//	}
//	instructor(string first,string last,string officeno,string design)
//	{
//		this->first = first;
//		this->last = last;
//		this->officeno = officeno;
//		this->design = design;
//	}
//	void setval(string first, string last, string officeno, string design)
//	{
//		this->first = first;
//		this->last = last;
//		this->officeno = officeno;
//		this->design = design;
//	}
//	void print()
//	{
//		cout << "first name:" << first << endl;
//		cout << "last name:" << last << endl;
//		cout << "office number:" << officeno << endl;
//		cout << "designation:" << design << endl;
//	}
//};
//class textbook
//{
//	string title;
//	string author;
//	int bookid;
//public:
//	friend class course;
//	textbook()
//	{
//		title = '0';
//		author = '0';
//		bookid = 0;
//	}
//	textbook(string title,string author,int bookid)
//	{
//		this->title = title;
//		this->author = author;
//		this->bookid = bookid;
//	}
//	void setval1(string title, string author, int bookid)
//	{
//		this->title = title;
//		this->author = author;
//		this->bookid = bookid;
//	}
//	void print()
//	{
//		cout << "title of book:" << title << endl;
//		cout << "name of author:" << author << endl;
//		cout << "book id number:" << bookid << endl;
//	}
//};
//class course
//{
//	instructor a;
//	textbook b;
//public:
//	void set()
//	{
//		string s;
//		string l;
//		string o;
//		string d;
//		cout << "enter instructors first name:";
//		cin >> s;
//		cout << "enter instructors last name:";
//		cin >> l;
//		cout << "enter instructors office number:";
//		cin >> o;
//		cout << "enter instructors designation:";
//		cin >> d;
//		a.setval(s, l, o, d);
//		cout << "enter textbook title:";
//		cin >> s;
//		cout << "enter textbook author:";
//		cin >> l;
//		int j;
//		cout << "enter textbook number:";
//		cin >> j;
//		b.setval1(s, l, j);
//	}
//	void print()
//	{
//		a.print();
//		b.print();
//	}
//};
//int main()
//{
//	int p;
//	cout << "how many course informantion do you want:";
//	cin >> p;
//	course* info= new course[p];
//	for (int i = 0; i < p; i++)
//	{
//		info[i].set();
//		info[i].print();
//	}
//
//	return 0;
//}

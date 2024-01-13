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
//	professor()
//	{
//		name = '0';
//		emid = 0;
//		desin = '0';
//	}
//	string getname()
//	{
//		return name;
//	}
//	void setname(string name)
//	{
//		this->name = name;
//	}
//	int getemid()
//	{
//		return emid;
//	}
//	void setemid(int emid)
//	{
//		this->emid = emid;
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
//	int noofprof;
//	professor prof[100];
//public:
//	friend class uni;
//	depart()
//	{
//		name = '0';
//		dpartid = 0;
//		noofprof = 0;
//	}
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
//	int getnoofprof()
//	{
//		return noofprof;
//	}
//	void setnoofprof(int noofprof)
//	{
//		this->noofprof = noofprof;
//	}
//	bool addprof(professor b)
//	{
//		prof[noofprof].setname(b.getname());
//		prof[noofprof].setdesin(b.getdesin());
//		prof[noofprof].setemid(b.getemid());
//		noofprof++;
//		return true;
//	}
//	bool deleteprof(int id)
//	{
//		cout << "enter which proffesor you want to delete:";
//		cin >> id;
//		for (int i = 0; i < noofprof; i++)
//		{
//			if (prof[i].getemid() == id)
//			{
//				for (int j = i; j < (noofprof - 1); j++)
//				{
//					prof[j] = prof[j + 1];
//				}
//			}
//		}
//		return true;
//	}
//	bool updateprof(int id, string newdesign)
//	{
//		cout << "enter which proffesor you want to update:";
//		cin >> id;
//		cout << "enter the new designation:";
//		cin>>newdesign;
//		for (int i = 0; i < noofprof; i++)
//		{
//			if (prof[i].getemid() == id)
//			{
//				prof[i].setdesin(newdesign);
//			}
//		}
//		return true;
//	}
//	void display()
//	{
//		cout << "department name:" << name << endl;
//		cout << "department id:" << dpartid << endl;
//		cout << "number of profesoors:" << noofprof << endl;
//		for (int i = 0; i < noofprof; i++)
//		{
//			cout << "professors name:" << prof[i].getname() << endl;
//			cout << "professors id:" << prof[i].getemid() << endl;
//			cout << "professors designation:" << prof[i].getdesin() << endl;
//		}
//	}
//};
//class uni
//{
//	string name;
//	int noofdepart;
//	depart depe[100];
//public:
//	uni()
//	{
//		name = '0';
//		noofdepart = 0;
//	}
//	uni(string name)
//	{
//		this->name = name;
//	}
//	string getname()
//	{
//		return name;
//	}
//	void setname(string name)
//	{
//		this->name = name;
//	}
//	int getnoofdepart()
//	{
//		return noofdepart;
//	}
//	void setnoofdepart(int noofdepart)
//	{
//		this->noofdepart = noofdepart;
//	}
//	bool adddepartment(depart d)
//	{
//		depe[noofdepart].setname(d.getname());
//		depe[noofdepart].setdpartid(d.getdpartid());
//		depe[noofdepart].setnoofprof(d.getnoofprof());
//		noofdepart++;
//		return true;
//	}
//	bool deletedepart(string name)
//	{
//		cout << "which department do you want to delete:";
//		cin >> name;
//		for (int i = 0; i < noofdepart; i++)
//		{
//			if (depe[i].getname() == name)
//			{
//				for (int j = i; i < (noofdepart - 1); j++)
//				{
//					depe[j] = depe[j + 1];
//				}
//			}
//		}
//		return true;
//	}
//	bool updatedepart(int id, string name)
//	{
//		cout << "which department do you want to update:";
//		cin >> name;
//		for (int i = 0; i < noofdepart; i++)
//		{
//			if (depe[i].getdpartid() == id)
//			{
//				depe[i].setname(name);
//			}
//		}
//		return true;
//	}
//	void display()
//	{
//		cout << "university name:" << name << endl;
//		cout << "number of departments:" << noofdepart << endl;
//		for (int i = 0; i < noofdepart; i++)
//		{
//			cout << "department name:" <<depe[i].getname() << endl;
//			cout << "department id:" << depe[i].getdpartid() << endl;
//			cout << "no of professors:" << depe[i].getnoofprof() << endl;
//		}
//	}
//
//};
//int main()
//{
//	uni fast;
//	depart d;
//	professor k;
//	string name;
//	int id;
//	string design;
//	cout << "enter professor name:";
//	cin >> name;
//	k.setname(name);
//	cout << "enter professors id:";
//	cin >> id;
//	k.setemid(id);
//	cout << "enter professors design:";
//	cin >> design;
//	k.setdesin(design);
//	cout << "enter department name:";
//	cin >> name;
//	d.setname(name);
//	cout << "enter department id:";
//	cin >> id;
//	d.setdpartid(id);
//	cout << "enter universities name:";
//	cin >> name;
//	fast.setname(name);
//	d.addprof(k);
//	d.display();
//	fast.adddepartment(d);
//	fast.display();
//
//	system("pause");
//	return 0;
//}

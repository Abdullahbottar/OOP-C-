//#include <iostream>
//using namespace std;
//class Person
//{
//	string Name;
//	int Age;
//	char Gender;
//public:
//	Person()
//	{
//		Name = "0";
//		Age = 0;
//		Gender = '0';
//	}
//	Person(string Name, int Age, char Gender)
//	{
//		this->Name = Name;
//		this->Age = Age;
//		this->Gender = Gender;
//	}
//	virtual void setname(string Name)
//	{
//		this->Name = Name;
//	}
//	virtual string getname()
//	{
//		return Name;
//	}
//	virtual void setage(int Age)
//	{
//		this->Age = Age;
//	}
//	virtual int getage()
//	{
//		return Age;
//	}
//	virtual void setgender(char Gender)
//	{
//		this->Gender = Gender;
//	}
//	virtual char getgender()
//	{
//		return Gender;
//	}
//	virtual void print()
//	{
//		cout << "person name: " << Name << endl;
//		cout << "person age: " << Age << endl;
//		cout << "person gender: " << Gender << endl;
//	}
//
//};
//class Adult :public Person
//{
//	string Occupation;
//	string Qualification;
//	string NIC;
//public:
//	Adult()
//	{
//		Occupation = "0";
//		Qualification = "0";
//		NIC = "0";
//	}
//	Adult(string Occupation, string Qualification, string NIC, string Name, int Age, char Gender)
//		:Person(Name, Age, Gender)
//	{
//		this->Occupation = Occupation;
//		this->Qualification = Qualification;
//		this->NIC = NIC;
//	}
//	void setquali(string Occupation)
//	{
//		this->Occupation = Occupation;
//	}
//	void setoccupo(string Qualification)
//	{
//		this->Qualification = Qualification;
//	}
//	void setnic(string NIC)
//	{
//		this->NIC = NIC;
//	}
//	string getoccupo()
//	{
//		return Occupation;
//	}
//	string getquali()
//	{
//		return Qualification;
//	}
//	string getnic()
//	{
//		return NIC;
//	}
//	void print()
//	{
//		Person::print();
//		cout << "Adult Occupation: " << Occupation << endl;
//		cout << "Adult Qualification: " << Qualification << endl;
//		cout << "Adult NIC: " << NIC << endl;
//	}
//};
//class kid :public Person
//{
//	string B_form_number;
//public:
//	kid()
//	{
//		B_form_number = "0";
//	}
//	kid(string B_form_number, string Name, int Age, char Gender) 
//		:Person(Name, Age, Gender)
//	{
//		this->B_form_number = B_form_number;
//	}
//	void setbform(string B_form_number)
//	{
//		this->B_form_number = B_form_number;
//	}
//	string getbform()
//	{
//		return B_form_number;
//	}
//	void print()
//	{
//		Person::print();
//		cout << "Kids b-form number: " << B_form_number << endl;
//	}
//};
//
//class Bogie {
//	int Bogie_ID;
//	Bogie* next;
//	Person* Adults[4];
//	Person* kids[6];
//	string familyName;
//	int kcount;
//	int acount;
//public:
//	Bogie(int id)
//	{
//		Bogie_ID = id;
//		next = nullptr;
//		familyName = "0";
//		kcount = 0;
//		acount = 0;
//	}
//	bool AddPassengers(string familyName)// should add adults and kids information etc
//	{
//		if (acount + kcount < 10)
//		{
//			string name;
//			int age;
//			char gender;
//			string occupo;
//			string quali;
//			string bform;
//			string nic;
//			this->familyName = familyName;
//			while (acount + kcount < 10)
//			{
//				cout << "enter the name: ";
//				cin >> name;
//				cout << "enter the age: ";
//				cin >> age;
//				cout << "enter the gender: ";
//				cin >> gender;
//				while (gender != 'm' && gender != 'f' && gender != 'F' && gender != 'M')
//				{
//					cout << "enter correct gender: ";
//					cin >> gender;
//				}
//				if (age >= 18 && acount < 4)
//				{
//					cout << "enter occupation of Adult: ";
//					cin >> occupo;
//					cout << "enter qualification of Adult: ";
//					cin >> quali;
//					cout << "enter NIC of Adult: ";
//					cin >> nic;
//					Adults[acount] =new Adult(occupo, quali, nic, name, age, gender);
//					acount++;
//				}
//				else if (age < 18 && kcount < 6)
//				{
//					cout << "enter the bform of kid: ";
//					cin >> bform;
//					kids[kcount] = new kid(bform, name, age, gender);
//					kcount++;
//				}
//				else
//				{
//					cout << "Maximum number of passengers reached in this bogie.\n";
//					break;
//				}
//				cout << "Press -1 to stop adding passengers or 0 to continue: ";
//				int choi;
//				cin >> choi;
//				while (choi != -1 && choi != 0)
//				{
//					cout << "enter correct choice:";
//					cin >> choi;
//				}
//				if (choi == -1)
//				{
//					break;
//				}
//			}
//			return true;
//		}
//		else
//		{
//			cout << "Maximum number of passengers reached in this bogie.\n";
//			return false;
//		}
//	}
//	void Print()
//	{
//		cout << "\tBOGIE ID: " << Bogie_ID << endl;
//		cout << "\t\tPASSENGERS\n\n";
//		cout << "Family Name:" << familyName << endl;
//		cout << "\t\tAdults";
//		for (int i = 0; i < acount; i++)
//		{
//			cout << endl;
//			cout << "ADULT " << i + 1 << endl;
//			Adults[i]->print();
//			cout << endl;
//		}
//		cout << "\t\tKIDS";
//		for (int i = 0; i < kcount; i++)
//		{
//			cout << endl;
//			cout << "KID " << i + 1 << endl;
//			kids[i]->print();
//			cout << endl;
//		}
//	}
//	void setnext(Bogie* obj)
//	{
//		next = obj;
//	}
//	Bogie* getnext()
//	{
//		return next;
//	}
//	int getid()
//	{
//		return Bogie_ID;
//	}
//	~Bogie() 
//	{
//		for (int i = 0; i < acount; i++)
//		{
//			delete Adults[i];
//	    }
//		for (int i = 0; i < kcount; i++)
//		{
//			delete kids[i];
//		}
//    }
//};
//class train {
//	Bogie* engine;
//public:
//	train() {
//		engine = nullptr;
//	}
//	void addBogie(int ID)//add bogie at the end of the train
//	{
//		string familyname;
//		cout << "enter the family name: ";
//		cin >> familyname;
//		Bogie* newBogie = new Bogie(ID);
//		newBogie->AddPassengers(familyname);
//
//		if (engine == nullptr)
//		{
//			engine = newBogie;
//		}
//		else
//		{
//			Bogie* now = engine;
//			while (now->getnext() != nullptr)
//			{
//				now = now->getnext();
//			}
//			now->setnext(newBogie);
//		}
//	}
//	bool removebogie(int ID)
//	{
//		Bogie* pres = engine;
//		Bogie* prev = nullptr;
//		while (pres != nullptr)//search the bogie and delete it
//		{
//			if (pres->getid() == ID)
//			{
//				if (prev == nullptr)
//				{
//					engine = pres->getnext();
//				}
//				else
//				{
//					prev->setnext(pres->getnext());
//				}
//				delete pres;
//				return true;
//			}
//			prev = pres;
//			pres = pres->getnext();
//		}
//		return false;
//	}
//	void printtrain()//print only the Bogie_ID of all bogies
//	{
//		Bogie* obj = engine;
//		while (obj != nullptr)
//		{
//			obj->Print();
//			obj = obj->getnext();
//		}
//	}
//	bool searchbogie(int ID)//search the particular bogie
//	{
//		Bogie* curr = engine;
//		while (curr != nullptr)
//		{
//			if (curr->getid() == ID)
//			{
//				return true;
//			}
//			curr = curr->getnext();
//		}
//		return false;
//	}
//	~train()
//	{
//		while (engine != nullptr)
//		{
//			Bogie* temp = engine->getnext();
//			delete engine;
//			engine = temp;
//		}
//	}
//};
//int main()
//{
//	train myTrain;
//	myTrain.addBogie(1);
//	//myTrain.addBogie(2);
//	//myTrain.addBogie(3);
//	myTrain.printtrain();
//	cout << "Searching for bogie 1." << endl;
//	if (myTrain.searchbogie(1))
//	{
//		cout << "Bogie 1 found!" << endl;
//	}
//	else 
//	{
//		cout << "Bogie 1 not found!" << endl;
//	}
//	cout << "Removing bogie 2..." << endl;
//    if (myTrain.removebogie(1))
//    {
//	    cout << "Bogie 1 removed successfully." << endl;
//    }
//    else
//    {
//	    cout << "Bogie 1 not found." << endl;
//    }
//    myTrain.printtrain();
//    cout << "Searching for bogie 1." << endl;
//    if (myTrain.searchbogie(1))
//    {
//	    cout << "Bogie 1 found!" << endl;
//    }
//    else
//    {
//	    cout << "Bogie 1 not found!" << endl;
//    }
//	return 0;
//}
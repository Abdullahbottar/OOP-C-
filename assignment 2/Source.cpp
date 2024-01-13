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
//	void setname(string Name)
//	{
//		this->Name = Name;
//	}
//	string getname()
//	{
//		return Name;
//	}
//	void setage(int Age)
//	{
//		this->Age = Age;
//	}
//	int getage()
//	{
//		return Age;
//	}
//	void setgender(char Gender)
//	{
//		this->Gender = Gender;
//	}
//	char getgender()
//	{
//		return Gender;
//	}
//     virtual void print()
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
//	Person obj;
//	Adult()
//	{
//		Occupation = "0";
//		Qualification = "0";
//		NIC = "0";
//	}
//	Adult(string Occupation, string Qualification, string NIC, string Name, int Age, char Gender) :obj(Name, Age, Gender)
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
//		obj.print();
//		cout << "Adult Occupation: " << Occupation << endl;
//		cout << "Adult Qualification: " << Qualification << endl;
//		cout << "Adult NIC: " << NIC << endl;
//	}
//};
//class kid :public Person
//{
//	string B_form_number;
//public:
//	Person obj;
//	kid()
//	{
//		B_form_number = "0";
//	}
//	kid(string B_form_number, string Name, int Age, char Gender) :obj(Name, Age, Gender)
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
//		obj.print();
//		cout << "Kids b-form number: " << B_form_number << endl;
//	}
//};
//
//class Bogie {
//	int Bogie_ID;
//	Bogie* next;
//	Person* Adults;
//	Person* kids;
//	string familyName;
//	int kcount;
//	int acount;
//public:
//	Bogie(int id)
//	{
//		Bogie_ID = id;
//		next = nullptr;
//		Adults = new Adult[4];
//		kids = new kid[6];
//		familyName = "0";
//		kcount = 0;
//		acount = 0;
//	}
//	bool AddPassengers(string familyName)
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
//					Adult obj(occupo, quali, nic, name, age, gender);
//					Person* ptr = new Adult;
//					ptr = &obj;
//					Adults[acount] = ptr[0];
//					acount++;
//				}
//				else if (age < 18 && kcount < 6)
//				{
//					cout << "enter the bform of kid: ";
//					cin >> bform;
//					kids[kcount] = kid(bform, name, age, gender);
//					kcount++;
//				}
//				else
//				{
//					cout << "Maximum number of passengers reached in this bogie.\n";
//					break;
//				}
//				cout << "Press -1 to stop adding passengers or 0 to continue: ";
//				int choice;
//				cin >> choice;
//				while (choice != -1 && choice != 0)
//				{
//					cout << "enter correct choice:";
//					cin >> choice;
//				}
//				if (choice == -1)
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
//
//	// should add adults and kids information etc
//	void Print()
//	{
//		cout << "\tBOGIE ID: " << Bogie_ID << endl;
//		cout << "\t\tPASSENGERS\n\n";
//		cout << "\t\tAdults\n";
//		for (int i = 0; i < acount; i++)
//		{
//			cout << "ADULT " << i + 1 << endl;
//			Adults[i].print();
//		}
//		cout << "\t\tKIDS\n";
//		for (int i = 0; i < kcount; i++)
//		{
//			cout << "KID " << i + 1 << endl;
//			kids[i].print();
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
//		delete[]Adults;
//		delete[]kids;
//	}
//};
//class train {
//	Bogie* engine;
//public:
//	train() {
//		engine = nullptr;
//	}
//	void addBogie(int ID)
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
//			Bogie* current = engine;
//			while (current->getnext() != nullptr)
//			{
//				current = current->getnext();
//			}
//			current->setnext(newBogie);
//		}
//	}//add bogie at the end of the train
//	bool removebogie(int ID)
//	{
//		Bogie* current = engine;
//		Bogie* prev = nullptr;
//		while (current != nullptr)
//		{
//			if (current->getid() == ID)
//			{
//				if (prev == nullptr)
//				{
//					engine = current->getnext();
//				}
//				else
//				{
//					prev->setnext(current->getnext());
//				}
//				delete current;
//				return true;
//			}
//			prev = current;
//			current = current->getnext();
//		}
//		return false;
//	}//search the bogie and delete it
//	void printtrain()
//	{
//		Bogie* current = engine;
//		while (current != nullptr)
//		{
//			current->Print();
//			current = current->getnext();
//		}
//	}//print only the Bogie_ID of all bogies
//	bool searchbogie(int ID)
//	{
//		Bogie* current = engine;
//		while (current != nullptr)
//		{
//			if (current->getid() == ID)
//			{
//				return true;
//			}
//			current = current->getnext();
//		}
//		return false;
//	}//search the particular bogie
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
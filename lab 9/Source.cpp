//#include <iostream>
//#include <string>
//using namespace std;
//
//class Passenger {
//protected:
//    string Name;
//    int Age;
//    char Gender;
//
//public:
//    Passenger() {
//        Name = "0";
//        Age = 0;
//        Gender = '0';
//    }
//
//    Passenger(string Name, int Age, char Gender) {
//        this->Name = Name;
//        this->Age = Age;
//        this->Gender = Gender;
//    }
//
//    virtual void setname(string Name) {
//        this->Name = Name;
//    }
//
//    virtual string getname() {
//        return Name;
//    }
//
//    virtual void setage(int Age) {
//        this->Age = Age;
//    }
//
//    virtual int getage() {
//        return Age;
//    }
//
//    virtual void setgender(char Gender) {
//        this->Gender = Gender;
//    }
//
//    virtual char getgender() {
//        return Gender;
//    }
//
//    virtual void print() {
//        cout << "Name: " << Name << endl;
//        cout << "Age: " << Age << endl;
//        cout << "Gender: " << Gender << endl;
//    }
//};
//
//class Adult : public Passenger {
//private:
//    string Occupation;
//    string Qualification;
//    string NIC;
//
//public:
//    Adult() {
//        Occupation = "0";
//        Qualification = "0";
//        NIC = "0";
//    }
//
//    Adult(string Occupation, string Qualification, string NIC, string Name, int Age, char Gender)
//        : Passenger(Name, Age, Gender) {
//        this->Occupation = Occupation;
//        this->Qualification = Qualification;
//        this->NIC = NIC;
//    }
//
//    void setoccupation(string Occupation) {
//        this->Occupation = Occupation;
//    }
//
//    void setqualification(string Qualification) {
//        this->Qualification = Qualification;
//    }
//
//    void setnic(string NIC) {
//        this->NIC = NIC;
//    }
//
//    string getoccupation() {
//        return Occupation;
//    }
//
//    string getqualification() {
//        return Qualification;
//    }
//
//    string getnic() {
//        return NIC;
//    }
//
//    void print() {
//        Passenger::print();
//        cout << "Occupation: " << Occupation << endl;
//        cout << "Qualification: " << Qualification << endl;
//        cout << "NIC: " << NIC << endl;
//    }
//};
//
//class Kid : public Passenger {
//private:
//    string B_form_number;
//
//public:
//    Kid() {
//        B_form_number = "0";
//    }
//
//    Kid(string B_form_number, string Name, int Age, char Gender)
//        : Passenger(Name, Age, Gender) {
//        this->B_form_number = B_form_number;
//    }
//
//    void setbform(string B_form_number) {
//        this->B_form_number = B_form_number;
//    }
//
//    string getbform() {
//        return B_form_number;
//    }
//
//    void print() {
//        Passenger::print();
//        cout << "B-form Number: " << B_form_number << endl;
//    }
//};
//
//class Bogie {
//private:
//    int Bogie_ID;
//    Bogie* next;
//    Passenger* Adults[4]; // Array of pointers for up to 4 adults
//    Passenger* Kids[6];   // Array of pointers for up to 6 kids
//    string familyName;
//    int acount;
//    int kcount;
//
//public:
//    Bogie(int id) {
//        Bogie_ID = id;
//        next = nullptr;
//        familyName = "0";
//        acount = 0;
//        kcount = 0;
//    }
//
//    bool AddPassengers(string familyName) {
//        this->familyName = familyName;
//        string name;
//        int age;
//        char gender;
//
//        while (acount + kcount < 10) {
//            cout << "enter the name: ";
//            cin >> name;
//            cout << "enter the age: ";
//            cin >> age;
//            cout << "enter the gender: ";
//            cin >> gender;
//
//            while (gender != 'm' && gender != 'f' && gender != 'F' && gender != 'M') {
//                cout << "enter correct gender: ";
//                cin >> gender;
//            }
//
//            if (age >= 18 && acount < 4) {
//                string occupation, qualification, nic;
//                cout << "enter occupation of Adult: ";
//                cin >> occupation;
//                cout << "enter qualification of Adult: ";
//                cin >> qualification;
//                cout << "enter NIC of Adult: ";
//                cin >> nic;
//                Adults[acount] = new Adult(occupation, qualification, nic, name, age, gender);
//                acount++;
//            }
//            else if (age < 18 && kcount < 6) {
//                string bform;
//                cout << "enter the B-form of kid: ";
//                cin >> bform;
//                Kids[kcount] = new Kid(bform, name, age, gender);
//                kcount++;
//            }
//            else {
//                cout << "Maximum number of passengers reached in this bogie.\n";
//                break;
//            }
//
//            cout << "Press -1 to stop adding passengers or 0 to continue: ";
//            int choice;
//            cin >> choice;
//            while (choice != -1 && choice != 0) {
//                cout << "enter correct choice:";
//                cin >> choice;
//            }
//            if (choice == -1) {
//                break;
//            }
//        }
//        return true;
//    }
//
//    void Print() {
//        cout << "\tBOGIE ID: " << Bogie_ID << endl;
//        cout << "\t\tPASSENGERS\n\n";
//        cout << "\t\tAdults\n";
//        for (int i = 0; i < acount; i++) {
//            cout << "ADULT " << i + 1 << endl;
//            Adults[i]->print();
//        }
//        cout << "\t\tKIDS\n";
//        for (int i = 0; i < kcount; i++) {
//            cout << "KID " << i + 1 << endl;
//            Kids[i]->print();
//        }
//    }
//    void setnext(Bogie* obj)
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
//    ~Bogie() {
//        for (int i = 0; i < acount; i++) {
//            delete Adults[i];
//        }
//        for (int i = 0; i < kcount; i++) {
//            delete Kids[i];
//        }
//    }
//};
//
//class train {
//private:
//    Bogie* engine;
//
//public:
//    train() {
//        engine = nullptr;
//    }
//
//    void addBogie(int ID)//add bogie at the end of the train
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
//	}
//	bool removebogie(int ID)//search the bogie and delete it
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
//				return true;
//			}
//			prev = current;
//			current = current->getnext();
//		}
//		return false;
//	}
//	void printtrain()//print only the Bogie_ID of all bogies
//	{
//		Bogie* current = engine;
//		while (current != nullptr)
//		{
//			current->Print();
//			current = current->getnext();
//		}
//	}
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
//
//    ~train() {
//        while (engine != nullptr) {
//            Bogie* temp = engine->getnext();
//            delete engine;
//            engine = temp;
//        }
//    }
//};
//
//int main() {
//    train myTrain;
//    myTrain.addBogie(1);
//    myTrain.printtrain();
//    // Rest of your main code
//    return 0;
//}
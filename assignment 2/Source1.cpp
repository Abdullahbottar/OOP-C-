//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//    string Name;
//    int Age;
//    char Gender;
//
//public:
//    Person(string n = "", int a = 0, char g = '\0')
//    {
//
//    }
//    Person(string n, int a, char g) {
//        Name = n;
//        Age = a;
//        Gender = g;
//    }
//
//    void print() {
//        cout << Name << " " << Age << " " << Gender << " ";
//    }
//};
//
//class Adult : public Person {
//    string Occupation;
//    string Qualification;
//    string NIC;
//
//public:
//    Adult(string n = "", int a = 0, char g = NULL, string oc = " ", string qua = " ", string nic = " ") :Person(n, a, g)
//    {
//
//    }
//    Adult(string n, int a, char g, string oc, string qua, string nic) : Person(n, a, g)
//    {
//        Occupation = oc;
//        Qualification = qua;
//        NIC = nic;
//    }
//    void print() {
//        Person::print();
//        cout << Occupation << " " << Qualification << " " << NIC;
//    }
//};
//
//class Kid : public Person {
//    string B_form_number;
//
//public:
//    Kid(string n = "", int a = 0, char g = NULL, string bf = "") : Person(n, a, g)
//    {
//
//    }
//    Kid(string n, int a, char g, string bf) : Person(n, a, g) {
//        B_form_number = bf;
//    }
//    void print() {
//        Person::print();
//        cout << B_form_number << endl;
//    }
//};
//
//class Bogie {
//    Adult* adults;
//    Kid* kids;
//    int adultCount;
//    int kidCount;
//    string familyName;
//
//public:
//    int Bogie_ID;
//    Bogie* next;
//
//    Bogie(int id, string family = "") : Bogie_ID(id), familyName(family), next(nullptr), adults(nullptr), kids(nullptr), adultCount(0), kidCount(0) {}
//
//
//    void AddAdult(string name, int age, char gender, string occupation, string qualification, string nic) {
//        Adult* newAdult = new Adult(name, age, gender, occupation, qualification, nic);
//
//
//        Adult* newAdults = new Adult[adultCount + 1];
//        for (int i = 0; i < adultCount; ++i) {
//            newAdults[i] = adults[i];
//        }
//        newAdults[adultCount] = *newAdult;
//
//        delete[] adults;
//        adults = newAdults;
//        adultCount++;
//    }
//
//    void AddKid(string name, int age, char gender, string bFormNumber) {
//        Kid* newKid = new Kid(name, age, gender, bFormNumber);
//
//        Kid* newKids = new Kid[kidCount + 1];
//        for (int i = 0; i < kidCount; ++i) {
//            newKids[i] = kids[i];
//        }
//        newKids[kidCount] = *newKid;
//
//        delete[] kids;
//        kids = newKids;
//        kidCount++;
//    }
//
//    void Print() {
//        cout << "( " << Bogie_ID << " ) Family Name: " << familyName << endl;
//        if (kidCount > 0) {
//            cout << "kids:\n";
//            for (int i = 0; i < kidCount; ++i) {
//                kids[i].print();
//            }
//        }
//        if (adultCount > 0) {
//            cout << "\nAdults:\n";
//            for (int i = 0; i < adultCount; ++i) {
//                adults[i].print();
//            }
//        }
//    }
//
//    ~Bogie() {
//        delete[] adults;
//        delete[] kids;
//    }
//};
//
//class Train {
//    Bogie* engine;
//
//public:
//    Train() : engine(nullptr) {}
//
//    void addBogie(int ID, string name = "") {
//        if (engine == nullptr) {
//            engine = new Bogie(ID, name);
//        }
//        else {
//            Bogie* temp = engine;
//            while (temp->next != nullptr) {
//                temp = temp->next;
//            }
//            temp->next = new Bogie(ID, name);
//        }
//    }
//
//    bool removeBogie(int ID) {
//        if (engine == nullptr) return false;
//        if (engine->Bogie_ID == ID) {
//            Bogie* temp = engine->next;
//            delete engine;
//            engine = temp;
//        }
//        else {
//            Bogie* temp = engine;
//            while (temp->next != nullptr && temp->next->Bogie_ID != ID)
//                temp = temp->next;
//
//            if (temp->next == nullptr) return false;
//
//            Bogie* toDel = temp->next;
//            temp->next = toDel->next;
//            delete toDel;
//        }
//        return true;
//    }
//
//    void printTrain() {
//        Bogie* temp = engine;
//        while (temp != nullptr) {
//            temp->Print();
//            temp = temp->next;
//        }
//    }
//
//    bool SearchBogie(int ID) {
//        Bogie* temp = engine;
//        while (temp != nullptr) {
//            if (temp->Bogie_ID == ID) return true;
//            temp = temp->next;
//        }
//        return false;
//    }
//
//    ~Train() {
//        Bogie* temp = engine;
//        while (temp != nullptr) {
//            Bogie* toDel = temp;
//            temp = temp->next;
//            delete toDel;
//        }
//    }
//};
//
//int main() {
//    Train t;
//    t.addBogie(5);
//    t.addBogie(6);
//    t.addBogie(7, "test");
//    t.addBogie(8);
//
//    t.printTrain();
//
//    cout << "\n\n";
//    t.removeBogie(6);
//    t.printTrain();
//
//    cout << "\n\n";
//    cout << "Searching bogie 8 " << t.SearchBogie(8) << endl;
//    cout << "Searching bogie 6 " << t.SearchBogie(6) << endl;
//
//    return 0;
//}
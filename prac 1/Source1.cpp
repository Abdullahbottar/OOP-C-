//#include <iostream>
//#include <string>
//using namespace std;
//class Animal {
//	string name;
//	int age;
//	string gender;
//public:
//	Animal(int age, string name, string gender) {
//		this->age = age;
//		this->gender = gender;
//		this->name = name;
//	}
//	string getname() { return name; }
//	int getage() { return age; }
//	string getgender() { return gender; }
//	virtual void makeSound() = 0;
//	virtual void display() {
//		cout << "Name: " << name << endl;
//		cout << "Age: " << age << endl;
//		cout << "Gender: " << gender << endl;
//	}
//};
//class Bird : public Animal {
//private:
//	string color;
//public:
//	Bird(string name, int age, string gender, string color) : Animal(age, name, gender)
//	{
//		this->color = color;
//	}
//	void display() {
//		Animal::display();
//		cout << "Color: " << color << endl;
//	}
//	void makeSound() {
//		cout << "Bird makes choo choo sound.\n";
//	}
//};
//class Mammal : public Animal {
//private:
//	float weight;
//public:
//	Mammal(string name, int age, string gender, float weight) : Animal(age, name, gender) {
//		this->weight = weight;
//	}
//	void display() {
//		Animal::display();
//		cout << "Wieght: " << weight << endl;
//	}
//	void makeSound() {
//		cout << "Mamamal Makes sound soo soo.\n";
//	}
//};
//
//class Reptile : public Animal {
//private:
//	float length;
//public:
//	Reptile(string name, int age, string gender, float length) : Animal(age, name, gender)
//	{
//		this->length = length;
//	}
//	void display() {
//		Animal::display();
//		cout << "Lenght: " << length << endl;
//	}
//	void makeSound() {
//		cout << "Reptile Makes sound joo joo.\n";
//	}
//};
////class Zookeeper {
////private:
////	string zookeeperType;
////	string name;
////	int age;
////	string gender;
////public:
////	Zookeeper(string zookeeperType, string name, int age, string gender) {
////		this->zookeeperType = zookeeperType;
////		this->name = name;
////		this->age = age;
////		this->gender = gender;
////	}
////	string getZookeeperType() const { return zookeeperType; }
////	string getName() const { return name; }
////	int getAge() const { return age; }
////	string getGender() const { return gender; }
////	void feedAnimal(const Animal& animal) const;
////};
////class Enclosure {
////private:
////	string enclosureType;
////	int capacity;
////	Zookeeper* zookeeper;
////public:
////	Enclosure(string enclosureType, int capacity, Zookeeper* zookeeper);
////	~Enclosure();
////	string getEnclosureType() const;
////	int getCapacity() const;
////	int getCurrentAnimalCount() const;
////	void addAnimal(Animal* animal);
////	void removeAnimal(Animal* animal);
////};
//template <typename T >
//T fun(T a, T b) {
//	return (a + b);
//}
//template <>
//string fun(string a, string b) {
//	a += " " + b;
//	return a;
//}
//int main() {
//	string name;
//	string gender;
//	string color;
//	int age;
//	cout << "ENTER THE AGE:";
//	cin >> age;
//	cout << "ENTER THE NAME:";
//	getline(cin >> ws, name);
//	cout << "ENTER THE GENDER:";
//	getline(cin >> ws, gender);
//	cout << "ENTER THE COLOR:";
//	getline(cin >> ws, color);
//	Bird obj(name, age, gender, color);
//	obj.display();
//	obj.makeSound();
//
//	float a = 14.3;
//	float b = 23.5;
//	float c = fun(a, b);
//	cout << "RESULT :" << c << endl;
//	cout << fun(name, color) << endl;
//
//	system("pause");
//	return 0;
//}
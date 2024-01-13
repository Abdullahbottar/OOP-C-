//#include <iostream>
//#include<conio.h>
//using namespace std;
//class animal
//{
//public:
//	animal()
//	{
//		cout << "Animal constructor called\n";
//	}
//	//string speak()
//	//{
//	//	cout << "speak() called ";
//	//	string s = "barks";
//	//	return s;
//	//}
//	virtual string speak()
//	{
//		cout << "speak() called ";
//		string s = "barks";
//		return s;
//	}
//	virtual ~animal() { cout<<"~Animal() called"<<endl; }
//};
//class Dog: public animal
//{
//public:
//	Dog()
//	{
//		cout << "Dog constructor called\n";
//	}
//	string speak()
//	{
//		cout << "speak() called ";
//		string s = "Woofs";
//		return s;
//	}
//	~Dog() { cout << "~Dog() called" << endl; }
//};
//class Cat : public animal
//{
//public:
//	Cat()
//	{
//		cout << "Cat constructor called\n";
//	}
//	string speak()
//	{
//		cout << "speak() called ";
//		string s = "Meows";
//		return s;
//	}
//	~Cat(){ cout << "~Cat() called" << endl; }
//};
//class Sheep : public animal
//{
//public:
//	Sheep()
//	{
//		cout << "Sheep constructor called\n";
//	}
//	string speak()
//	{
//		cout << "speak() called ";
//		string s = "bleat";
//		return s;
//	}
//	~Sheep() { cout << "~Sheep() called" << endl; }
//};
//class Horse : public animal
//{
//public:
//	Horse()
//	{
//		cout << "Horse constructor called\n";
//	}
//	string speak()
//	{
//		cout << "speak() called ";
//		string s = "Nieghs";
//		return s;
//	}
//	~Horse() { cout << "~Horse() called" << endl; }
//};
//class Cow : public animal
//{
//public:
//	Cow()
//	{
//		cout << "Cow constructor called\n";
//	}
//	string speak()
//	{
//		cout << "speak() called ";
//		string s = "Moos";
//		return s;
//	}
//	~Cow() { cout << "~Cow() called" << endl; }
//};
//int main()
//{
//	const int size = 5;
//	animal* myPets[size];
//	int i = 0;
//	while (i<size)
//	{
//		cout<<"Press 1 for a Dog and 2 for a Cat and 3 for cow 4 for sheep and 5 for horse"<<endl;
//		switch (_getch())
//		{
//			case '1':
//				myPets[i] = new Dog;
//				cout<<"Dog added at position "<<i<<endl<<endl;
//				i++;
//				break;
//				case'2':
//					myPets[i] = new Cat;
//					cout<<"Cat added at position "<<i<<endl<<endl;
//					i++;
//					break;
//				case '3':
//					myPets[i] = new Cow;
//					cout << "Cow added at position " << i << endl << endl;
//					i++;
//					break;
//				case'4':
//					myPets[i] = new Sheep;
//					cout << "Sheep added at position " << i << endl << endl;
//					i++;
//					break;
//				case '5':
//					myPets[i] = new Horse;
//					cout << "Horse added at position " << i << endl << endl;
//					i++;
//					break;
//				default:
//					cout<<"Invalid input.Enter again"<<endl<<endl;
//					break;
//		}
//	}
//
//
//	return 0;
//}
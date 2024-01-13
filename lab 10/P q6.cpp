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
//int main()
//{
//	//const int size = 2;
//	//animal* myPets[size];
//	//int i = 0;
//	//while (i<size)
//	//{
//	//	cout<<"Press 1 for a Dog and 2 for a Cat"<<endl;
//	//	switch (_getch())
//	//	{
//	//		case '1':
//	//			myPets[i] = new Dog;
//	//			cout<<"Dog added at position "<<i<<endl<<endl;
//	//			i++;
//	//			break;
//	//			case'2':
//	//				myPets[i] = new Cat;
//	//				cout<<"Cat added at position "<<i<<endl<<endl;
//	//				i++;
//	//				break;
//	//			default:
//	//				cout<<"Invalid input.Enter again"<<endl<<endl;
//	//				break;
//
//	//	}
//	//}
//	const int size = 2;
//	animal* myPets[size];
//	Cat whiskers;
//	Dog mutley;
//	myPets[0] = & whiskers;
//	myPets[1] = &mutley;
//	for (int i = 0; i < size; i++)
//	{
//		cout<<myPets[i]->speak()<<endl;
//	}
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class animal
//{
//public:
//	animal()
//	{
//		cout << "Animal constructor called\n";
//	}
//	string speak()
//	{
//		cout << "speak() called ";
//		string s = "barks";
//		return s;
//	}
//	~animal()
//	{
//
//	}
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
//	~Dog()
//	{
//
//	}
//
//};
//int main()
//{
//	animal objAnimal;
//	Dog objDog;
//	animal* ptrAnimal = &objDog;
//	Dog* ptrDog = (Dog*)&objAnimal;
//	cout << objAnimal.speak() << endl;
//	cout << objDog.speak() << endl;
//	cout << ptrAnimal->speak() << endl;
//	cout << ptrDog->speak() << endl;
//	//cout<<ptrDog->animal::speak()<<endl;
//
//
//	return 0;
//}
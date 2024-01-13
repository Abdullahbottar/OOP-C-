//#include <iostream>
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
//	~Cat()
//	{
//
//	}
//
//};
//int main()
//{
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
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//template <typename T>
//class Container;
//template <>
//class Container<int>
//{
//private:
//    int value;
//
//public:
//    Container(int value)
//    {
//        this->value = value;
//    }
//
//    int increase()
//    {
//        value +=1;
//        return value;
//    }
//};
//template <>
//class Container<char>
//{
//private:
//    char data;
//public:
//    Container(char data)
//    {
//        this->data = data;
//    }
//    char uppercase() 
//    {
//        if (data >= 'a' && data <= 'z') {
//            return data - ('a' - 'A');
//        }
//        else 
//        {
//            return data;
//        }
//    }
//};
//int main()
//{
//	Container<int> myint(7);
//	Container<char> mychar('j');
//	cout<<myint.increase()<<endl;
//	cout<<mychar.uppercase()<< endl;
//	return 0;
//
//	return 0;
//}
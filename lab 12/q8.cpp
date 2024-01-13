//#include <iostream>
//#include <cstring>
//using namespace std;
//class tornadoException
//{
//private:
//    char message[100];
//public:
//
//    tornadoException()
//    {
//        strcpy_s(message, "Tornado: Take cover immediately!");
//    }
//    tornadoException(int m)
//    {
//        sprintf_s(message, "Tornado: %d miles away; and approaching!", m);
//    }
//    const char* what() const noexcept
//    {
//        return message;
//    }
//};
//
//int main()
//{
//    try
//    {
//        throw tornadoException();
//    }
//    catch (const tornadoException& e)
//    {
//        cout << "Caught Exception: " << e.what() << endl;
//    }
//
//    return 0;
//}
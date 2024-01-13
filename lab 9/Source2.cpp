//#include <iostream>
//using namespace std;
//
//class keyvalue
//{
//    string key;
//    int value;
//
//public:
//    friend class dictionary;
//
//    keyvalue()
//    {
//        key = "0"; // Use double quotes for string
//        value = 0;
//    }
//
//    keyvalue(string key, int value)
//    {
//        this->key = key;
//        this->value = value;
//    }
//
//    // ... rest of keyvalue class remains the same
//};
//
//class dictionary
//{
//    keyvalue* objectarray;
//    int cou;
//    static int uni;
//
//public:
//    dictionary()
//    {
//        objectarray = nullptr;
//        cou = 0;
//    }
//
//    // ... rest of dictionary class remains the same
//
//    void remove()
//    {
//        if (cou > 0)
//        {
//            keyvalue* obj = new keyvalue[cou - 1];
//            for (int i = 0; i < (cou - 1); i++)
//            {
//                obj[i].setkey(objectarray[i].getkey());
//                obj[i].setvalue(objectarray[i].getvalue());
//            }
//            cou--;
//            delete[] objectarray;
//            objectarray = new keyvalue[cou];
//            for (int l = 0; l < cou; l++)
//            {
//                objectarray[l].setkey(obj[l].getkey());
//                objectarray[l].setvalue(obj[l].getvalue());
//            }
//            delete[] obj;
//        }
//    }
//
//    // ... rest of dictionary class remains the same
//};
//
//int dictionary::uni = 0;
//
//int main()
//{
//    // ... your main function remains the same
//    return 0;
//}
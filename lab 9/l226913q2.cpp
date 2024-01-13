//#include <iostream>
//using namespace std;
//class keyvalue
//{
//    string key;
//    int value;
//public:
//    friend class dictionary;
//    keyvalue()
//    {
//        key = "0"; 
//        value = 0;
//    }
//
//    keyvalue(string key, int value)
//    {
//        this->key = key;
//        this->value = value;
//    }
//    string getkey()
//    {
//        return key;
//    }
//    int getvalue()
//    {
//        return value;
//    }
//    void setkey(string key)
//    {
//        this->key = key;
//    }
//    void setvalue(int value)
//    {
//        this->value = value;
//    }
//    void print()
//    {
//        cout << "(" << key << "," << value << ")" << endl;
//    }
//};
//class dictionary
//{
//    keyvalue* objectarray;
//    int cou;
//    static int uni;
//public:
//    dictionary()
//    {
//        cou = 0;
//        objectarray = nullptr; 
//    }
//    static int inu()
//    {
//        uni++;
//        return uni;
//    }
//    dictionary(dictionary& a)
//    {
//        cou = a.cou;
//        objectarray = new keyvalue[cou];
//        for (int i = 0; i < a.cou; i++)
//        {
//            objectarray[i].setkey(a.objectarray[i].getkey());
//            objectarray[i].setvalue(a.objectarray[i].getvalue());
//        }
//    }
//    void append(string key, int value)
//    {
//        keyvalue* newArray = new keyvalue[cou + 1]; 
//        for (int i = 0; i < cou; i++)
//        {
//            newArray[i].setkey(objectarray[i].getkey());
//            newArray[i].setvalue(objectarray[i].getvalue());
//        }
//        newArray[cou].setkey(key);
//        newArray[cou].setvalue(value);
//        cou++;
//        delete[] objectarray; 
//        objectarray = newArray; 
//
//    }
//    int removestring(string key)
//    {
//        int set = 0;
//        for (int i = 0; i < cou; i++)
//        {
//            if (objectarray[i].getkey() == key)
//            {
//                int j = 0;
//                for (j = i; j < (cou-1); j++)
//                {
//                    objectarray[j].setkey(objectarray[j].getkey());
//                    objectarray[j].setvalue(objectarray[j].getvalue());
//                }
//                set = 1;
//                cou--;
//            }
//        }
//        if (set == 1)
//        {
//            return 1;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//    void remove()
//    {
//        keyvalue* obj = new keyvalue[cou - 1];
//        for (int i = 0; i < (cou-1); i++)
//        {
//            obj[i].setkey(objectarray[i].getkey());
//            obj[i].setvalue(objectarray[i].getvalue());
//        }
//        cou--;
//        delete[] objectarray;
//        objectarray = new keyvalue[cou];
//        for (int l = 0; l < cou; l++)
//        {
//            objectarray[l].setkey(obj[l].getkey());
//            objectarray[l].setvalue(obj[l].getvalue());
//        }
//        delete[] obj;
//    }
//    dictionary operator|(dictionary& a)
//    {
//        dictionary obj;
//        for (int i = 0; i < cou; i++)
//        {
//            for (int j = 0; j < a.cou; j++)
//            {
//                if (objectarray[i].getkey() == a.objectarray[j].getkey())
//                {
//                    obj.append(objectarray[i].getkey(), objectarray[i].getvalue());
//                    break; 
//                }
//            }
//        }
//        int c = inu();
//        return obj;
//    }
//    void printdic()
//    {
//        for (int i = 0; i < cou; i++)
//        {
//            objectarray[i].print();
//        }
//    }
//};
//int dictionary::uni = 0;
//int main()
//{
//    dictionary dict1; 
//    string key;
//    cout << "enter the key: ";
//    cin >> key;
//    dict1.append(key, 112);
//    cout << "enter the key: ";
//    cin >> key;
//    dict1.append(key, 113);
//    cout << "enter the key: ";
//    cin >> key;
//    dict1.append(key, 114);
//    cout << "enter the key: ";
//    cin >> key;
//    dict1.append(key, 115);
//    cout << "enter the key: ";
//    cin >> key;
//    dict1.append(key, 116);
//
//    dict1.printdic();
//
//    dictionary dict2;
//    cout << "enter the key: ";
//    cin >> key;
//    dict2.append(key, 212);
//    cout << "enter the key: ";
//    cin >> key;
//    dict2.append(key, 213);
//    cout << "enter the key: ";
//    cin >> key;
//    dict2.append(key, 214);
//    cout << "enter the key: ";
//    cin >> key;
//    dict2.append(key, 215);
//    cout << "enter the key: ";
//    cin >> key;
//    dict2.append(key, 216);
//
//    dict2.printdic();
//
//    dictionary dict3;
//    dict3 = dict1 | dict2;
//    dict3.printdic();
//
//    dict1.remove();
//    dict1.printdic();
//    cout << "union is called this " << dictionary::inu() <<"times" << endl;
//    return 0;
//}
#include <iostream>
#include <string>
using namespace std;
class systemin
{
private:
    systemin() { }
    ~systemin() { }
    systemin(const systemin&) = delete;
    systemin& operator=(const systemin&) = delete;
    string infor;
public:
    static systemin& getinstance()
    {
        static systemin instance;
        return instance;
    }
    string getinfo()
    {
            return infor;
    }
    void setinfo(string& infor)
    {
        this->infor = infor;
    }
};

class singletondemo {
public:
    singletondemo(){ }
    void dosomething()
    {
        systemin& systeminfo = systemin::getinstance();
        cout << "System information: " << systeminfo.getinfo() << endl;
    }
};

int main()
 {
    string information;
    cout<<"enter the information:";
    getline(cin,information);
    // information= "company is defaulting";
    systemin& systeminfo = systemin::getinstance();
    systeminfo.setinfo(information);
    singletondemo demo;//client class knows about information
    demo.dosomething();

    return 0;
}
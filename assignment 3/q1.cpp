// #include <iostream>
// using namespace std;
// class employee
// {
// protected:
//     int id;
//     string name;
//     double salary;
// public:
//       employee()
//       {
//         id=0;
//         name="0";
//         salary=0;
//       }
//       employee(int id,string name,double salary)
//       {
//         this->id=id;
//         this->name=name;
//         this->salary=salary;
//       }
//       virtual void showdetail()
//       {
//         cout<<"Name: "<<name<<endl;
//         cout<<"ID: "<<id<<endl;
//       }
//       virtual double calculatepayroll()
//       {
//         return salary;
//       }
// };
// class salaryemployee:public employee
// {
//     string designation;
//    public:
//           salaryemployee()
//           {
//             designation="0";
//           }
//           salaryemployee(int id,string name,double salary,string designation): employee(id,name,salary)
//           {
//             this->designation= designation;
//           }
//           double calculatepayroll() override
//           {
//             return salary;
//           }
//           void showdetail() override
//           {
//               employee::showdetail();
//               cout<<"Designation: "<<designation<<endl;
//           }
// };
// class commisiionemployee:public salaryemployee
// {
//   public:
//       commisiionemployee(){ }
//       commisiionemployee(int id,string name,double salary,string designation):salaryemployee(id,name,salary,designation){ }
//       double calculatepayroll()
//       {
//        return ((salary/100)*15);
//       }
//       void showdetail()
//       {
//        salaryemployee::showdetail();
//       } 
// };
// class hourlyemployee:public employee
// {
//    int hours;
//    int days;
//    public:
//          hourlyemployee()
//          {
//           hours=0;
//           days=0;
//          }
//          hourlyemployee(int id,string name,double salary,int hours,int days): employee(id,name,salary) 
//          {
//           this->hours= hours;
//           this->days=days;
//         }
//          double calculatepayroll()
//          {
//           return ((salary*hours)*days);
//          }
//          void showdetail()
//          {
//          employee::showdetail();
//          cout<<"hours working: "<<hours<<endl;
//          cout<<"days working: "<<days<<endl;
//          } 
// };
// int main()
// {
//     employee * employees= new commisiionemployee(2345,"abdullah",85000.0,"Teacher Assistant");
//     employees->showdetail();
//     cout<<"salary: "<<employees->calculatepayroll()<<endl;
//     employee * employees1= new salaryemployee(265,"yasin",85000.0,"Teacher");
//     employees1->showdetail();
//     cout<<"salary: "<<employees1->calculatepayroll()<<endl;
//     employee * employees2= new hourlyemployee(112,"amjad",1000.0,5,15);
//     employees2->showdetail();
//     cout<<"salary: "<<employees2->calculatepayroll()<<endl;


//     return 0;
// }
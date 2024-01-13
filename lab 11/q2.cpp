#include <iostream>
#include <string>
using namespace std;
class Animal
{
  public:
        virtual void makesound()const=0;
        virtual void displayinfo()const=0;
};
class Lion:virtual public Animal
{
    string addinfo;
  public:
      Lion(string addinfo)
      {
        this->addinfo=addinfo;
      }
      void makesound()const
      {
        cout<<"Lion roars.\n";
      }
      void displayinfo()const
      {
        cout<<"Mane colour: "<<addinfo<<endl;
        cout<<"Age 10"<<endl;
        cout<<"Country origin Africa\n";
      }
};
class Parrot:virtual public Animal
{
    string addinfo;
  public:
      Parrot(string addinfo)
      {
        this->addinfo=addinfo;
      }
      void makesound()const
      {
        cout<<"Parrot whistles.\n";
      }
      void displayinfo()const
      {
        cout<<"Feather colour: "<<addinfo<<endl;
        cout<<"Age 5"<<endl;
        cout<<"Country origin Australia\n";
      }
};
int main()
{
    string s="Golden";
    Lion lion1(s);
    string v="Green";
    Parrot parrot1(v);
    cout<<"Lion information\n";
    lion1.displayinfo();
    cout<<"Lion sound: ";
    lion1.makesound();
    cout<<"Parrot information\n";
    parrot1.displayinfo();
    cout<<"Parrot sound: ";
    parrot1.makesound();
    return 0;
}
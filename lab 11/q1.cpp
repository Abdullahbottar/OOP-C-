#include <iostream>
using namespace std;
class shape
{
 public:
       virtual double calculatea()=0;
       virtual double calculatepr()=0;
};
class rectangle:virtual public shape
{
    int leng;
    int wid;
  public:
        rectangle()
        {
            leng=0;
            wid=0;
        }
        rectangle(int leng, int wid)
        {
            this->leng= leng;
            this->wid=wid;
        }
        rectangle(rectangle &obj)
        {
            this->leng= obj.leng;
            this->wid= obj.wid;
        }
       double calculatea()override
        {
            double area= leng*wid;
            return area;
        }
       double calculatepr()override
        {
            double prem= (leng*2)+(wid*2);
            return prem;
        }
};
class circle:virtual public shape
{
    int radius;
 public:
       circle()
       {
        radius=0;
       }
       circle(int radius)
       {
        this->radius= radius;
       }
       circle(circle & obj)
       {
        this->radius= obj.radius;
       }
       double calculatea()override
       {
        double area= 3.1416*(radius*radius);
        return area;
       }
     double calculatepr()override
       {
        double prem= (3.1416*(2*radius));
        return prem;
       }
};
class square:public circle, public rectangle
{
  public:
        square():circle(),rectangle(){ }
        square(int side):circle(side), rectangle(side,side) { }
        square(square & obj):circle(obj), rectangle(obj) { }
        double calculatea() override
        {
            double area= circle::calculatea()+rectangle::calculatea();
            return area;
        }
        double calculatepr()override
        {
            double prem= circle::calculatepr()+rectangle::calculatepr();
            return prem;
        }
};
int main()
{
   shape* recant= new rectangle(4.0,6.0);
   shape *circ= new circle(5.0);
   shape * shap= new square(3.0);
   cout<<"Rectangle-Area: "<<recant->calculatea()<<" Perimeter: "<<recant->calculatepr()<<endl;
   cout<<"Circle-Area: "<<circ->calculatea()<<" Perimeter: "<<circ->calculatepr()<<endl;
   cout<<"Square-Area: "<<shap->calculatea()<<" Perimeter: "<<shap->calculatepr()<<endl;
   delete recant;
   delete circ;
   delete shap;
    return 0;
}
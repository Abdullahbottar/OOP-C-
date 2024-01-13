//#include <iostream>
//using namespace std;
//class shape
//{
//	int lenght;
//	int widht;
//public:
//	shape()
//	{
//		lenght = 0;
//		widht = 0;
//		cout << "shape() called\n";
//	}
//	shape(int lenght, int widht)
//	{
//		this->lenght = lenght;
//		this->widht = widht;
//	}
//	int getlen()
//	{
//		return lenght;
//	}
//	int getwidh()
//	{
//		return widht;
//	}
//	void setlen(int lenght)
//	{
//		this->lenght = lenght;
//	}
//	void setwidht(int widht)
//	{
//		this->widht = widht;
//	}
//	~shape()
//	{
//		cout << "~shape() called\n";
//	}
//};
//class rectangle : public shape
//{
//	int area;
//	int volume;
//	shape obj;
//public:
//	rectangle()
//	{
//		area = 0;
//		volume = 0;
//		cout << "Rectangle called() called\n";
//	}
//	rectangle(int lenght, int widht) : obj(lenght, widht)
//	{
//		area = 0;
//		volume = 0;
//	}
//	void coord()
//	{
//		cout << "lenght:" << obj.getlen() << endl;
//		cout << "widht:" << obj.getwidh() << endl;
//	}
//	void ar()
//	{
//		area = obj.getlen() * obj.getwidh();
//		cout << "area is: " << area << endl;
//	}
//	void vol()
//	{
//		volume = obj.getlen() * area;
//		cout << "volume is: " << volume << endl;
//	}
//	~rectangle()
//	{
//		cout << "~square() called\n";
//	}
//};
//

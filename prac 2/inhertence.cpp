//#include <iostream>
//using namespace std;
//class Point
//{
//public:
//	int x;
//	int y;
//	void printp();
//};
//void Point::printp()
//{
//	cout << "(" << x << "." << y << ")" << endl;
//}
//class Shape
//{
//public:
//	int npoints;
//	Point* points;
//	Shape();
//	float area();
//	void setpoint(Point* p);
//};
//Shape::Shape()
//{
//	cout << "Shape constructor called" << endl;
//	npoints = 0;
//	points = NULL;
//}
//float Shape::area()
//{
//	return -1;
//}
//class triangle : public Shape
//{
//public:
//	triangle();
//	void showshape();
//	float area();
//	void setpoint(Point* p);
//};
//triangle::triangle()
//{
//	cout << "Triangle constructor" << endl;
//	npoints = 3;
//}
//void triangle::setpoint(Point* p)
//{
//	this->points = p;
//}
//void triangle::showshape()
//{
//	Point* temp;
//	temp = points;
//	for (int i = 0; i < npoints; i++)
//	{
//		temp->printp();
//		temp++;
//	}
//}
//float triangle::area()
//{
//	int x;
//	int x1;
//	int x2;
//	int y;
//	int y1;
//	int y2;
//	int y3;
//	Point* t= points;
//	x = t->x;
//	y = t->y;
//	t++;
//	x1 = t->x;
//	y1 = t->y;
//	t++;
//	x2 = t->x;
//	y2 = t->y;
//	return (x * (y1 - y2) + x1 * (y2 - y) + x2 * (y - y1) / 2);
//}
//void creates()
//{
//	Shape* s = new Shape;
//	cout << "area of shape " << s->area() << endl;
//	delete s;
//	triangle* t = new triangle;
//	Point p1, p2, p3;
//	p1.x = p1.y = 0;
//	p2.x = p2.y = 10;
//	p3.x = p3.y = 25;
//	Point* pointsoft;
//	pointsoft = new Point[3];
//	pointsoft[0] = p1;
//	pointsoft[1] = p2;
//	pointsoft[2] = p3;
//	t->setpoint(pointsoft);
//	t->showshape();
//	cout << "area of triangle " << t->area() << endl;
//	delete t;
//	t = NULL;
//}
//int main()
//{
//	creates();
//	return 0;
//}

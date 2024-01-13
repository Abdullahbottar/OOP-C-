//#include <iostream>
//#include <string>
//using namespace std;
//class shop
//{
//	string vendor;
//	string name;
//	double price;
//	double cost;
//	double weight;
//	bool flag;
//public:
//	shop(string n, string v, double p, double c, double w, bool t)
//	{
//		name = n;
//		vendor = v;
//		price = p;
//		cost = c;
//		weight = w;
//		flag = t;
//	}
//	void infla()
//	{
//		cost += (cost * 5) / 100;
//	}
//	string getn()
//	{
//		return name;
//	}
//	string getv()
//	{
//		return vendor;
//	}
//	double getp()
//	{
//		return price;
//	}
//	double getc()
//	{
//		return cost;
//	}
//	double getw()
//	{
//		return weight;
//	}
//	bool getf()
//	{
//		return flag;
//	}
//	double profit()
//	{
//		double sum;
//		sum = price - cost;
//		return sum;
//	}
//};
//int main()
//{
//	int q = 0;
//	cout << "how many items do you want to inspect:";
//	cin >> q;
//	double tw = 0;
//	int s = 0;
//	int count = 0;
//	int max = 0;
//	int index = 0;
//	string d;
//	for (int i = 0; i < q; i++)
//	{
//		string n;
//		string v;
//		double p;
//		double c;
//		double w;
//		bool f;
//		cout << "enter the items name:";
//		cin >> n;
//		cout << "enter items vendor name:";
//		cin >> v;
//		cout << "enter items price:";
//		cin >> p;
//		cout << "enter items cost:";
//		cin >> c;
//		cout << "enter the items weight:";
//		cin >> w;
//		cout << "enter items tax condition:";
//		cin >> f;
//		shop obji(n, v, p, c, w, f);
//		if (max < p)
//		{
//			max = p;
//			d = obji.getn();
//		}
//		tw += w;
//		obji.infla();
//		s = obji.profit();
//		if (s > 0)
//		{
//			count++;
//		}
//	}
//	cout << "total weight of items:" << tw << endl;
//	cout << "total profitable items:" << count << endl;
//	cout << "the highest priced item " << d << " its price " << max << endl;
//	return 0;
//}
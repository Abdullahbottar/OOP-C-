//#include <iostream>
//#include <fstream>
//using namespace std;
//class bankaccount
//{
//	int accno;
//	string holdername;
//	int accbal;
//	static int noacc;
//public:
//	static int nexid()
//	{
//		noacc++;
//		return noacc;
//	}
//	bankaccount()
//	{
//		holdername = '0';
//		accbal = 0;
//	}
//	void intial( string holdername, int accbal)
//	{
//		accno = bankaccount::nexid();
//		this->holdername = holdername;
//		this->accbal = accbal;
//	}
//	static void total()
//	{
//		cout << noacc;
//	}
//	void displayaccountinfo();
//	void deposit(int a);
//	void withdrawal(int a);
//};
//inline void bankaccount::displayaccountinfo()
//{
//	cout << "account number :" << accno << endl;
//	cout << "holders name :" << holdername << endl;
//	cout << "Bank balance :" << accbal << endl;
//}
//inline void bankaccount::deposit(int a)
//{
//	fstream file;
//	file.open("deposit.txt");
//	int amount;
//	while (file >> amount);
//	if ((amount + a) >= 10000)
//	{
//		cout << "deposit amount excedding your daily limit\n";
//	}
//	else if ((amount+ a) < 10000)
//	{
//		if (a < 10000)
//		{
//			accbal += a;
//		}
//		ofstream wfile;
//		wfile.open("deposit.txt");
//		a = a + amount;
//		wfile << a;
//		wfile.close();
//	}
//	file.close();
//}
//inline void bankaccount::withdrawal(int a)
//{
//	fstream mfile;
//	mfile.open("withdrawan.txt");
//	int amount=0;
//	while (mfile >> amount);
//	if ((amount + a) >= 10000)
//	{
//		cout << "withdrawan amount excedding your daily limit\n";
//	}
//	else if ((amount + a) < 10000)
//	{
//		if (a < 10000)
//		{
//			accbal -= a;
//		}
//		a = a + amount;
//	    ofstream xfile;
//		xfile.open("withdrawan.txt");
//		xfile << a;
//		xfile.close();
//	}
//	mfile.close();
//}
//int bankaccount::noacc = 2500;
//int main()
//{
//	int choice = 0;
//	bankaccount obj;
//	cout << "to create a bank account press 1\n";
//	cout << "to view detail press 2\n";
//	cout << "to deposit amount press 3\n";
//	cout << "to withdraw amount press 4\n";
//	cout << "to exit press 5\n";
//	cout << "\n\n\n";
//	while (choice != 5)
//	{
//		cout << "enter your choice:";
//		cin >> choice;
//		if (choice > 0 && choice < 6)
//		{
//			if (choice == 1)
//			{
//				string name;
//				int accountbalance;
//				cout << "enter the name:";
//				cin >> name;
//				cout << "enter the account balance:";
//				cin >> accountbalance;
//				obj.intial(name, accountbalance);
//			}
//			if (choice == 2)
//			{
//				obj.displayaccountinfo();
//			}
//			if (choice == 3)
//			{
//				int am = 0;
//				cout << "enter the deposit ammount:";
//				cin >> am;
//				obj.deposit(am);
//			}
//			if (choice == 4)
//			{
//				int am = 0;
//				cout << "enter the withdrawan amount:";
//				cin >> am;
//				obj.withdrawal(am);
//			}
//		}
//		else
//		{
//			cout << "wrong input\n";
//		}
//	}
//	return 0;
//}
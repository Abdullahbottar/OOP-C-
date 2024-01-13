#include <iostream>
#include <cstring>
using namespace std;
class event
{
	char* event_name;
	char* event_venue;
	char* event_date[11];
	char* event_time[9];
public:
	event()
	{
		event_name = 0;
		event_venue = 0;
		*event_date = { NULL };
		*event_time = { NULL };
		cout << "default constructor called" << endl;
	}
	event(char eventname[20], char eventvenue[50], char eventdate[11], char eventtime[9])
	{
		this->event_name = new char[20];
		this->event_venue = new char[50];
		for (int i = 0; eventname[i] <= '\0'; i++)
		{
			event_name[i] = eventname[i];
		}
		for (int i = 0; eventvenue[i] <= '\0'; i++)
		{
			event_venue[i] = eventvenue[i];
		}
		for (int i = 0; eventdate[i] <= '\0'; i++)
		{
			*event_date[i] = eventdate[i];
		}
		for (int i = 0; eventtime[i] <= '\0'; i++)
		{
			*event_time[i] = eventtime[i];
		}

		cout << "overloaded constructor called" << endl;
	}
	void setname(char eventname[20])
	{
		event_name = eventname;
	}
	void setvenue(char eventvenue[50])
	{
		event_venue = eventvenue;
	}
	void setdate(char eventdate[11])
	{
		*event_date = eventdate;
	}
	void settime(char eventtime[9])
	{
		*event_time = eventtime;
	}
	char* getname()
	{
		return event_name;
	}
	char* getvenue()
	{
		return event_venue;
	}
	char* getdate()
	{
		return *event_date;
	}
	char* gettime()
	{
		return *event_time;
	}
	void print()
	{
		cout << "event name " << event_name << endl;
		cout << "event venue " << event_venue << endl;
		cout << "event date " << event_date << endl;
		cout << "event time " << event_time << endl;
	}
	~event()
	{
		delete event_name;
		delete event_venue;
		delete[] event_date;
		delete[] event_time;
		cout << "destructor called" << endl;
	};
};
event* addeventover(char name[20], char date[11], char venue[50], char time[9])
{
	event* newevent = new event(name, venue, date, time);
	return newevent;
}
void addeventset(event eve)
{
	char name[20], date[11], venue[50], time[9];
	cout << "enter event name: ";
	cin >> name;
	cout << "enter event venue :";
	cin >> venue;
	cout << "enter event date :";
	cin >> date;
	cout << "enter event time :";
	cin >> time;
	eve.setname(name);
	eve.setvenue(venue);
	eve.setdate(date);
	eve.settime(time);
}
int main()
{
	cout << "menu program" << endl;
	cout << "Add new event using setters press 1" << endl;
	cout << "Add new event using overloade constructors press 2" << endl;
	cout << "To display event press 3" << endl;
	cout << "To exit program press 4" << endl;
	int ch = 0;
	cout << "enter your choice: ";
	cin >> ch;
	event obj;
	event* obj1;
	int temp = 0;
	if (ch == 1)
	{
		addeventset(obj);
		temp = ch;
		/*	obj.print();*/
	}
	if (ch == 2)
	{
		char name[20], date[11], venue[50], time[9];
		cout << "enter event name: ";
		cin >> name;
		cout << "enter event venue :";
		cin >> venue;
		cout << "enter event date :";
		cin >> date;
		cout << "enter event time :";
		cin >> time;
		obj1 = addeventover(name, venue, date, time);
		/*obj1->print();
		temp = ch;*/
	}
	//if (ch == 3)
	//{
	//	if (temp == 2)
	//	{
	//		obj1->print();
	//	}
	//	if (temp == 1)
	//	{
	//		obj.print();
	//	}
	//	//if (temp == 3 || temp == 4)
	//	//{
	//	//	cout << "previous wrong value" << endl;
	//	//}
	//}
	if (ch == 4)
	{
		cout << "program exited" << endl;
	}


	return 0;
}
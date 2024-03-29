//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cstring>
//#include <conio.h>
//#include <iomanip>
//#include <cstdlib>
//using namespace std;
//void moveon();
//class Course;
//class Filehandler
//{
//public:
//    void enroll(string name, string rollno, string contactno, int age);
//    void display();
//    void remove(string name, string rollno, string contactno, int age);
//    void clear();
//    void courseadd(string code, string cname, string Instructor, int credits, int cap);
//    void coursedisplay();
//    void studentcourse(string textfile, string name, string code, string instructor, int credits, int capacity, float marks, float attendence);
//    void studentcoursedisplay(string textfile);
//    void coursestudentfile(string textfile, string rollno, string name, int age, string contactnumber, float attendence, float marks);
//    void clearfile(string textfile);
//    void updatecourse(Course& obj);
//    void displaycoursestudents(string textfile, string cname);
//    int coursestudentsize(string textfile)
//    {
//        fstream infile(textfile, ios::in);
//        int linecount = 0;
//        string line;
//        while (getline(infile, line))
//        {
//            linecount++;
//        }
//        return linecount;
//    }
//    static int sizeset()
//    {
//        fstream infile("nstudents.txt", ios::in);
//        int linecount = 0;
//        string line;
//        while (getline(infile, line))
//        {
//            linecount++;
//        }
//        return linecount;
//    }
//    int studentcoursesize(string textfile)
//    {
//        fstream infile(textfile, ios::in);
//        int linecount = 0;
//        string line;
//        while (getline(infile, line))
//        {
//            linecount++;
//        }
//        return linecount;
//    }
//    static int coursesizeset()
//    {
//        fstream infile("nCourses.txt", ios::in);
//        int linecount = 0;
//        string line;
//        while (getline(infile, line))
//        {
//            linecount++;
//        }
//        return linecount;
//    }
//};
//class Student :public Filehandler
//{
//    string name;
//    string rollnumber;
//    int age;
//    string contactno;
//    Course* courses1;
//    float marks;    //to be determined
//    float attendence;
//    static int ssize;
//    int csize;
//    Student* students;
//public:
//    Student()
//    {
//        age = 0;
//        name = "0";
//        rollnumber = "0";
//        contactno = "0";
//        marks = 0;
//        attendence = 0;
//        courses1 = nullptr;
//        students = nullptr;
//    }
//    Student(string rollnumber)
//    {
//        setstudents();
//        for (int i = 0; i < ssize; i++)
//        {
//            if (students[i].getrollnumber() == rollnumber)
//            {
//                this->age = students[i].getage();
//                this->name = students[i].getname();
//                this->rollnumber = students[i].getrollnumber();
//                this->contactno = students[i].getcontactno();
//                break;
//            }
//            else
//            {
//                continue;
//            }
//        }
//    }
//    void set(string name, string rollno, string contactno, int age);
//    void display();
//    void setstudents();
//    void enroll(Student& obj);
//    void remove(string rollnumber);
//    void edit(string croll, string name, string conatctno, int age, int op);
//    void Register(string rollnumber, Course& obj);
//    int check(string rollnumber);
//    void coursesdisplay(string rollnumber);
//    void setstudentscourses(string rollnumber);
//    int checkcourse(string rollnumber, string code);
//    static void ssizeinc() //student size increment
//    {
//        ssize++;
//    }
//    static void ssizedec() //student size increment
//    {
//        ssize--;
//    }
//    void setname(string name)
//    {
//        this->name = name;
//    }
//    string getname()
//    {
//        return name;
//    }
//    void setrollnumber(string rollnumber)
//    {
//        this->rollnumber = rollnumber;
//    }
//    string getrollnumber()
//    {
//        return rollnumber;
//    }
//    void setcontactno(string contactno)
//    {
//        this->contactno = contactno;
//    }
//    string getcontactno()
//    {
//        return contactno;
//    }
//    void setage(int age)
//    {
//        this->age = age;
//    }
//    int getage()
//    {
//        return age;
//    }
//    void setmarks(float marks)
//    {
//        this->marks = marks;
//    }
//    float getmarks()
//    {
//        return marks;
//    }
//    void setattendence(float attendence)
//    {
//        this->attendence = attendence;
//    }
//    float getattendence()
//    {
//        return attendence;
//    }
//};
//int Student::ssize = 0;
//class Course :public Filehandler
//{
//    string code;
//    string Instructor;
//    string coursename;
//    int credits;
//    int capacity;         //to be determined
//    Student* students1;
//    Course* courses;
//    static int clen;
//    int slen;
//public:
//    Course()
//    {
//        code = "0";
//        coursename = "0";
//        Instructor = "0";
//        credits = 0;
//        capacity = 0;
//        students1 = nullptr;
//        courses = nullptr;
//    }
//    Course(string code, string coursename, string instructor, int capacity, int credits)
//    {
//        this->code = code;
//        this->coursename = coursename;
//        this->Instructor = instructor;
//        this->credits = credits;
//        this->capacity = capacity;
//    }
//    Course(string code)
//    {
//        setcourses();
//        for (int i = 0; i < clen; i++)
//        {
//            if (courses[i].getcode() == code)
//            {
//                this->code = courses[i].getcode();
//                this->coursename = courses[i].getcoursename();
//                this->Instructor = courses[i].getinstructor();
//                this->credits = courses[i].getcredits();
//                this->capacity = courses[i].getcapcity();
//                break;
//            }
//            else
//            {
//                continue;
//            }
//        }
//
//    }
//    static void cleninc()  //course size increment
//    {
//        clen++;
//    }
//    string getcode()
//    {
//        return code;
//    }
//    string getinstructor()
//    {
//        return Instructor;
//    }
//    string getcoursename()
//    {
//        return coursename;
//    }
//    int getcredits()
//    {
//        return credits;
//    }
//    void setcode(string code)
//    {
//        this->code = code;
//    }
//    void setinstructor(string instructor)
//    {
//        this->Instructor = instructor;
//    }
//    void setcoursename(string cname)
//    {
//        this->coursename = cname;
//    }
//    void setcredits(int credits)
//    {
//        this->credits = credits;
//    }
//    int getcapcity()
//    {
//        return capacity;
//    }
//    void setcapacity(int capacity)
//    {
//        this->capacity = capacity;
//    }
//    void setcourses();
//    int check(string code);
//    void cadd(Course& obj);
//    void display();
//    void studentadd(string code, Student& obj);
//    void setcoursesstudent(string textfile);
//    int checkstudent(string rollnumber, string code);
//    void displaycoursestudent(string coursecode);
//    void setstudentmarks(string code, float marks, string rollno);
//    void setstudentattendence(string code, float attendence, string rollno);
//    void editstudentdetail(string rollno, int age, string edit, int op);
//    void setstudentfilemars(string code, string rollno, string edit);
//    void removestudent(string rollno);
//    void removestudentone(string rollno, string code);
//};
//int Course::clen = 0;
//class Validator :public Filehandler
//{
//public:
//    Validator() {}
//    void input(int& choice, int ll, int ul)
//    {
//        cin >> choice;
//        while (choice<ll || choice >ul)
//        {
//            cout << "ENTER CORRECT CHOICE:";
//            cin >> choice;
//        }
//    }
//};
//class System :public Validator, public Student, public Course
//{
//public:
//    System() {}
//    void Menu();
//    void enroll();
//    void coursereg()
//    {
//        cout << "1- Available Courses.\n";
//        cout << "2- Registered Courses.\n";
//        cout << "3- Back\n";
//        cout << "\n\n";
//        cout << "ENTER YOUR CHOICE:";
//        int choice;
//        Validator::input(choice, 1, 3);
//        system("cls");
//        if (choice == 1)
//        {
//            cout << "1- ADD A COURSE.\n";
//            cout << "2- DISPLAY COURSES.\n";
//            cout << "3- BACK\n";
//            cout << "ENTER YOUR CHOICE:";
//            int choice2;
//            Validator::input(choice2, 1, 3);
//            if (choice2 == 1)
//            {
//                system("cls");
//                string cname;
//                string code;
//                string instructor;
//                int credits;
//                int capacity = 0;
//                cout << "Enter Course Code:";
//                getline(cin >> ws, code);
//                cout << "Enter Course Name:";
//                getline(cin >> ws, cname);
//                cout << "Enter Instructors Name:";
//                getline(cin >> ws, instructor);
//                cout << "Enter Course Credit Hours:";
//                cin >> credits;
//                Course obj(code, cname, instructor, credits, capacity);
//                Course::cadd(obj);
//            }
//            if (choice2 == 2)
//            {
//                system("cls");
//                Course obj;
//                obj.display();
//            }
//            moveon();
//            system("cls");
//            System::coursereg();
//        }
//        if (choice == 2)
//        {
//            string rollno;
//            string coursecode;
//            cout << "ENTER THE STUDENTS ROLL NUMBER WHOSE COURSE YOU WANT TO REGISTER:";
//            getline(cin >> ws, rollno);
//            int check1 = Student::check(rollno);
//            moveon();
//            if (check1 == 1)
//            {
//                system("cls");
//                cout << "1- ALREADY REGISTERED COURSES.\n";
//                cout << "2- REGISTER A COURSE.\n";
//                cout << "3- BACK\n";
//                cout << "ENTER YOUR CHOICE:";
//                int choice2;
//                Validator::input(choice2, 1, 3);
//                system("cls");
//                if (choice2 == 1)
//                {
//                    Student::coursesdisplay(rollno);
//                    moveon();
//                }
//                if (choice2 == 2)
//                {
//                    Course obj;
//                    cout << "ENTER THE COURSE CODE YOU WANT TO REGISTER:";
//                    getline(cin >> ws, coursecode);
//                    int check2 = obj.check(coursecode);
//                    if (check2 == 1)
//                    {
//                        int check4 = Course::checkstudent(rollno, coursecode);
//                        if (check4 == 0)
//                        {
//                            Student obj1(rollno);
//                            Course::studentadd(coursecode, obj1);
//                            Course obj(coursecode);
//                            Student::Register(rollno, obj);
//                            system("cls");
//                        }
//                        else
//                        {
//                            cout << "STUDENT ALREADY REGISTERED\n";
//                            moveon();
//                        }
//                    }
//                    else if (check2 == 2)
//                    {
//                        cout << "CAPACITY FULL OF COURSE\n";
//                        moveon();
//                    }
//                    else
//                    {
//                        cout << "NO SUCH COURSE EXISTS\n";
//                        moveon();
//                    }
//                }
//                else
//                {
//                    system("cls");
//                    System::coursereg();
//                }
//            }
//            else
//            {
//                cout << "NO SUCH STUDENT EXISTS\n";
//                moveon();
//            }
//            system("cls");
//            System::coursereg();
//        }
//        if (choice == 3)
//        {
//            system("cls");
//            System::Menu();
//        }
//    }
//    void marksassign()
//    {
//        cout << "1- Display Marks.\n";
//        cout << "2- Assign Marks.\n";
//        cout << "3- Back\n";
//        cout << "\n\n";
//        cout << "ENTER YOUR CHOICE:";
//        int choice;
//        Validator::input(choice, 1, 3);
//        system("cls");
//        if (choice == 1)
//        {
//            string coursecode;
//            Course obj;
//            cout << "ENTER THE COURSE CODE YOU WANT TO SEE STUDENT MARKS:";
//            getline(cin >> ws, coursecode);
//            int check2 = obj.check(coursecode);
//            system("cls");
//            if (check2 == 1 || check2 == 2)
//            {
//                Course::displaycoursestudent(coursecode);
//            }
//            else
//            {
//                cout << "NO SUCH COURSE EXISTS\n";
//                moveon();
//                system("cls");
//            }
//            system("cls");
//            System::marksassign();
//        }
//        if (choice == 2)
//        {
//            string coursecode;
//            Course obj;
//            cout << "ENTER THE COURSE CODE WHOSE STUDENT MARKS YOU WANT TO SEE:";
//            getline(cin >> ws, coursecode);
//            int check2 = obj.check(coursecode);
//            system("cls");
//            if (check2 == 1 || check2 == 2)
//            {
//                Course::displaycoursestudent(coursecode);
//                string rollno;
//                cout << "ENTER THE STUDENTS ROLL NUMBER WHOSE MARKS YOU WANT TO CHANGE:";
//                getline(cin >> ws, rollno);
//                int check4 = Course::checkstudent(rollno, coursecode);
//                if (check4 == 0)
//                {
//                    cout << "SUCH STUDENT IS NOT REGISTERED IN THIS COURSE\n";
//                }
//                else
//                {
//                    int ch = Student::check(rollno);
//                    float attend;
//                    cout << "ENTER THE MARKS:";
//                    cin >> attend;
//                    Course::setstudentmarks(coursecode, attend, rollno);
//                    Course::setstudentfilemars(coursecode, rollno, rollno);
//                }
//            }
//            else
//            {
//                cout << "NO SUCH COURSE EXISTS\n";
//            }
//            moveon();
//            system("cls");
//            System::marksassign();
//        }
//        if (choice == 3)
//        {
//            system("cls");
//            System::Menu();
//        }
//    }
//    void coursewith()
//    {
//        cout << "1- Enrolled Courses.\n";
//        cout << "2- Drop Course.\n";
//        cout << "3- Back\n";
//        cout << "\n\n";
//        cout << "ENTER YOUR CHOICE:";
//        int choice;
//        Validator::input(choice, 1, 3);
//        system("cls");
//        if (choice == 1)
//        {
//            string rollno;
//            string coursecode;
//            cout << "ENTER THE STUDENTS ROLL NUMBER WHOSE REGISTERED COURSES YOU WANT TO SEE:";
//            getline(cin >> ws, rollno);
//            int check1 = Student::check(rollno);
//            moveon();
//            if (check1 == 1)
//            {
//                system("cls");
//                Student::coursesdisplay(rollno);
//            }
//            else
//            {
//                cout << "NO SUCH STUDENT EXISTS\n";
//            }
//            moveon();
//            system("cls");
//            System::coursewith();
//        }
//        if (choice == 2)
//        {
//            string rollno;
//            string coursecode;
//            cout << "ENTER THE ROLL NUMBER TO DROP REGISTERED COURSES:";
//            getline(cin >> ws, rollno);
//            int check1 = Student::check(rollno);
//            moveon();
//            if (check1 == 1)
//            {
//                system("cls");
//                Student::coursesdisplay(rollno);
//                moveon();
//                cout << "ENTER THE COURSE CODE YOU WANT TO DROP:";
//                getline(cin >> ws, coursecode);
//                int see = Student::checkcourse(rollno, coursecode);
//                if (see == 1)
//                {
//                    Course::removestudentone(rollno, coursecode);
//                    Course::setstudentfilemars(coursecode, rollno, rollno);
//                    cout << "COURSE DROPPED\n";
//                }
//                else
//                {
//                    cout << "STUDENT NOT REGISTERED IN THIS COURSE\n";
//                }
//            }
//            else
//            {
//                cout << "NO SUCH STUDENT EXISTS\n";
//            }
//            moveon();
//            system("cls");
//            System::coursewith();
//        }
//        if (choice == 3)
//        {
//            system("cls");
//            System::Menu();
//        }
//    }
//    void checkattend()
//    {
//        cout << "1- Check Attendence.\n";
//        cout << "2- Mark Attendence.\n";
//        cout << "3- Back\n";
//        cout << "\n\n";
//        cout << "ENTER YOUR CHOICE:";
//        int choice;
//        Validator::input(choice, 1, 3);
//        system("cls");
//        if (choice == 1)
//        {
//            string coursecode;
//            Course obj;
//            cout << "ENTER THE COURSE CODE WHOSE STUDENT MARKS YOU WANT TO SEE:";
//            getline(cin >> ws, coursecode);
//            int check2 = obj.check(coursecode);
//            system("cls");
//            if (check2 == 1 || check2 == 2)
//            {
//                Course::displaycoursestudent(coursecode);
//            }
//            else
//            {
//                cout << "NO SUCH COURSE EXISTS\n";
//                moveon();
//                system("cls");
//            }
//            system("cls");
//            System::checkattend();
//        }
//        if (choice == 2)
//        {
//            string coursecode;
//            Course obj;
//            cout << "ENTER THE COURSE CODE WHOSE STUDENT ATTENDENCE YOU WANT TO MARK:";
//            getline(cin >> ws, coursecode);
//            int check2 = obj.check(coursecode);
//            system("cls");
//            if (check2 == 1 || check2 == 2)
//            {
//                Course::displaycoursestudent(coursecode);
//                string rollno;
//                cout << "ENTER THE STUDENTS ROLL NUMBER WHOSE ATTENDENCE YOU WANT TO CHANGE:";
//                getline(cin >> ws, rollno);
//                int check4 = Course::checkstudent(rollno, coursecode);
//                if (check4 == 0)
//                {
//                    cout << "SUCH STUDENT IS NOT REGISTERED IN THIS COURSE\n";
//                }
//                else
//                {
//                    int ch = Student::check(rollno);
//                    float attend;
//                    cout << "ENTER THE ATTENDENCE:";
//                    cin >> attend;
//                    Course::setstudentattendence(coursecode, attend, rollno);
//                    Course::setstudentfilemars(coursecode, rollno, rollno);
//                }
//            }
//            else
//            {
//                cout << "NO SUCH COURSE EXISTS\n";
//            }
//            moveon();
//            system("cls");
//            System::checkattend();
//        }
//        if (choice == 3)
//        {
//            system("cls");
//            System::Menu();
//        }
//    }
//    void exit()
//    {
//        cout << "FLEX EXITED\n";
//        moveon();
//    }
//    ~System() { }
//};
//void moveon()
//{
//    char a;
//    cout << "PRESS SPACE TO CONTINUE." << endl;
//    a = _getch();
//    while (a != ' ')
//    {
//        a = _getch();
//    }
//}
////FILE HANDLER FUNCTIONS DUE TO FORWARD DECLERATION
//void Filehandler::enroll(string name, string rollno, string contactno, int age)
//{
//    fstream outfile("nstudents.txt", ios::app);
//    outfile << rollno << "\t" << name << "\t" << age << "\t" << contactno << endl;
//    outfile.close();
//}
//void Filehandler::display()
//{
//    ifstream infile("nstudents.txt");
//    cout << "Roll NUMBER" << "\t\t" << "NAME" << "\t\t\t" << "AGE" << "\t\t" << "CONTACT INFORMATION\n";
//    string name, rollno, contactinfo, sname;
//    int age;
//    while (infile >> rollno >> name >> sname >> age >> contactinfo)
//    {
//        cout << rollno << "\t\t" << name << " " << sname << "\t\t" << age << "\t\t" << contactinfo << endl;
//    }
//    moveon();
//    infile.close();
//}
//void Filehandler::remove(string name, string rollno, string contactno, int age)
//{
//    ofstream outfile("nstudents.txt", ios::app);
//    outfile << rollno << "\t" << name << "\t" << age << "\t" << contactno << endl;
//}
//void Filehandler::clear()
//{
//    ofstream outfile("nstudents.txt", ios::trunc);
//    outfile.close();
//}
//void Filehandler::courseadd(string code, string cname, string Instructor, int credits, int cap)
//{
//    fstream outfile("nCourses.txt", ios::app);
//    outfile << code << "\t" << cname << "\t" << Instructor << "\t" << credits << "\t" << cap << endl;
//    outfile.close();
//}
//void Filehandler::coursedisplay()
//{
//    ifstream infile("nCourses.txt");
//    cout << "CODE" << "\t" << "NAME" << "\t\t\t" << "INSTRUCTOR" << "\t\t" << "CREDITS" << "\t" << "CAPACITY\n";
//    string name, code, instructor, nname, instructors;
//    int credits;
//    int cap;
//    while (infile >> code >> name >> nname >> instructor >> instructors >> credits >> cap)
//    {
//        int len = name.size();
//        len += nname.size();
//        if (len > 15)
//        {
//            cout << code << "\t" << name << " " << nname << setw(10) << instructor << " " << instructors << "\t\t" << credits << "\t" << cap << endl;
//        }
//        else
//        {
//            cout << code << "\t" << name << " " << nname << "\t       " << instructor << " " << instructors << "\t\t" << credits << "\t" << cap << endl;
//        }
//    }
//    infile.close();
//}
//void Filehandler::studentcourse(string textfile, string name, string code, string instructor, int credits, int capacity, float marks, float attendence)
//{
//    fstream outfile(textfile, ios::app);
//    outfile << code << "\t" << name << "\t\t" << instructor << "\t\t" << credits << "\t\t" << capacity << "\t\t" << marks << "\t\t" << attendence << endl;
//    outfile.close();
//}
//void Filehandler::studentcoursedisplay(string textfile)
//{
//    ifstream infile(textfile);
//    cout << "CODE" << "\t" << "NAME" << "\t\t\t" << "INSTRUCTOR" << "\t" << "CREDITS" << "\t\t" << "MARKS" << "\t" << "ATTENDENCE\n";
//    string name, code, instructor, nname;
//    int credits;
//    int cap;
//    float mar;
//    float attend;
//    string insf;
//    string insl;
//    while (infile >> code >> name >> nname >> insf >> insl >> credits >> cap >> mar >> attend)
//    {
//        int len = name.size();
//        len += nname.size();
//
//        if (len > 15)
//        {
//            cout << code << "\t" << name << " " << nname << "\t\t" << insf << " " << insl << "\t   " << credits << "\t\t" << mar << "\t" << attend << "%" << endl;
//        }
//        else
//        {
//            cout << code << "\t" << name << " " << nname << "\t\t" << insf << " " << insl << "\t   " << credits << "\t\t" << mar << "\t" << attend << "%" << endl;
//        }
//    }
//    infile.close();
//}
//void Filehandler::coursestudentfile(string textfile, string rollno, string name, int age, string contactnumber, float attendence, float marks)
//{
//    fstream outfile(textfile, ios::app);
//    outfile << rollno << "\t" << name << "\t" << age << "\t" << contactnumber << "\t" << marks << "\t" << attendence << endl;
//    outfile.close();
//}
//void Filehandler::clearfile(string textfile)
//{
//    ofstream outfile(textfile, ios::trunc);
//    outfile.close();
//}
//void Filehandler::updatecourse(Course& obj)
//{
//    fstream outfile("nCourses.txt", ios::app);
//    outfile << obj.getcode() << "\t\t\t" << obj.getcoursename() << "\t" << obj.getinstructor() << "\t" << obj.getcredits() << "\t" << obj.getcapcity() << endl;
//    outfile.close();
//}
//void Filehandler::displaycoursestudents(string textfile, string cname)
//{
//    ifstream infile(textfile);
//    cout << cname << endl;
//    cout << "Roll NUMBER" << "\t\t" << "NAME" << "\t\t\t" << "MARKS" << "\t\t" << "ATTENDENCE\n";
//    string name, rollno, contactinfo, sname;
//    float mars, attend;
//    int age;
//    while (infile >> rollno >> name >> sname >> age >> contactinfo >> mars >> attend)
//    {
//        cout << rollno << "\t\t" << name << " " << sname << "\t\t" << mars << "\t\t" << attend << "%" << endl;
//    }
//    moveon();
//    infile.close();
//
//}
//
////STUDENT CLASS FUNCTIONS
//void Student::Register(string rollnumber, Course& obj)
//{
//    setstudents();
//    for (int i = 0; i < ssize; i++)
//    {
//        if (students[i].getrollnumber() == rollnumber)
//        {
//            students[i].marks = 0;
//            students[i].attendence = 0;
//            string textfile = students[i].getrollnumber();
//            string txt = ".txt";
//            textfile.append(txt);
//            cout << "COURSE REGISTERED.\n";
//            csize = Filehandler::studentcoursesize(textfile);
//            if (csize == 0)
//            {
//                csize = 1;
//                courses1 = new Course[csize];
//                courses1->setcoursename(obj.getcoursename());
//                courses1->setcode(obj.getcode());
//                courses1->setcapacity(obj.getcapcity());
//                courses1->setinstructor(obj.getinstructor());
//                courses1->setcredits(obj.getcredits());
//                int l = courses1->getcapcity();
//                l++;
//                courses1->setcapacity(l);
//            }
//            else
//            {
//                setstudentscourses(textfile);
//                csize = Filehandler::studentcoursesize(textfile);
//                Course* copycourse = new Course[csize + 1];
//                for (int l = 0; l < csize; l++)
//                {
//                    copycourse[l].setcoursename(courses1[l].getcoursename());
//                    copycourse[l].setcode(courses1[l].getcode());
//                    copycourse[l].setinstructor(courses1[l].getinstructor());
//                    copycourse[l].setcredits(courses1[l].getcredits());
//                    copycourse[l].setcapacity(courses1[l].getcapcity());
//                }
//                copycourse[csize].setcoursename(obj.getcoursename());
//                copycourse[csize].setcode(obj.getcode());
//                copycourse[csize].setinstructor(obj.getinstructor());
//                copycourse[csize].setcredits(obj.getcredits());
//                copycourse[csize].setcapacity(obj.getcapcity());
//                int l = copycourse->getcapcity();
//                l++;
//                copycourse->setcapacity(l);
//                csize++;
//                delete[] courses1;
//                courses1 = new Course[csize];
//                for (int l = 0; l < csize; l++)
//                {
//                    courses1[l].setcoursename(copycourse[l].getcoursename());
//                    courses1[l].setcode(copycourse[l].getcode());
//                    courses1[l].setinstructor(copycourse[l].getinstructor());
//                    courses1[l].setcredits(copycourse[l].getcredits());
//                    courses1[l].setcapacity(copycourse[l].getcapcity());
//                }
//            }
//            Filehandler::studentcourse(textfile, obj.getcoursename(), obj.getcode(), obj.getinstructor(), obj.getcredits(), obj.getcapcity(), students[i].getmarks(), students[i].getattendence());
//            moveon();
//            break;
//        }
//        else
//        {
//            continue;
//        }
//    }
//}
//void Student::setstudentscourses(string rollnumber)
//{
//    string c;
//    string n;
//    string nn;
//    string insf;
//    string insl;
//    int cred;
//    int limit;
//    float mars;
//    float attend;
//    csize = Filehandler::studentcoursesize(rollnumber);
//    courses1 = new Course[csize];
//    ifstream infile(rollnumber);
//    int i = 0;
//    while (infile >> c >> n >> nn >> insf >> insl >> cred >> limit >> mars >> attend)
//    {
//        courses1[i].setcode(c);
//        courses1[i].setcredits(cred);
//        string space = " ";
//        n.append(space);
//        n.append(nn);
//        courses1[i].setcoursename(n);
//        insf.append(space);
//        insf.append(insl);
//        courses1[i].setinstructor(insf);
//        courses1[i].setcapacity(limit);
//        students[i].setattendence(attend);
//        students[i].setmarks(mars);
//        i++;
//    }
//    infile.close();
//}
//void Student::set(string name, string rollno, string contactno, int age)
//{
//    this->name = name;
//    this->contactno = contactno;
//    this->age = age;
//    this->rollnumber = rollno;
//}
//void Student::setstudents()
//{
//    string name1 = "0";
//    string contactno1;
//    int age1;
//    string rollno1;
//    string sname1;
//    ssize = Filehandler::sizeset();
//    students = new Student[ssize];
//    ifstream infile("nstudents.txt");
//    int i = 0;
//    while (infile >> rollno1 >> name1 >> sname1 >> age1 >> contactno1)
//    {
//        students[i].setage(age1);
//        students[i].setcontactno(contactno1);
//        students[i].setrollnumber(rollno1);
//        string space = " ";
//        name1.append(space);
//        name1.append(sname1);
//        students[i].setname(name1);
//        i++;
//    }
//    infile.close();
//}
//void Student::enroll(Student& obj)
//{
//    setstudents();
//    this->name = obj.name;
//    this->age = obj.age;
//    this->contactno = obj.contactno;
//    this->rollnumber = obj.rollnumber;
//    if (students == nullptr)
//    {
//        students = new Student[ssize + 1];
//        students[ssize].setname(obj.getname());
//        students[ssize].setcontactno(obj.getcontactno());
//        students[ssize].setage(obj.getage());
//        students[ssize].setrollnumber(obj.getrollnumber());
//        ssizeinc();
//    }          //enrolling a student;
//    else
//    {
//        Student* copystudent = new Student[ssize + 1];
//        for (int i = 0; i < ssize; i++)
//        {
//            copystudent[i].setname(students[i].getname());
//            copystudent[i].setrollnumber(students[i].getrollnumber());
//            copystudent[i].setage(students[i].getage());
//            copystudent[i].setcontactno(students[i].getcontactno());
//        }
//        copystudent[ssize].setname(obj.getname());
//        copystudent[ssize].setage(obj.getage());
//        copystudent[ssize].setcontactno(obj.getcontactno());
//        copystudent[ssize].setrollnumber(obj.getrollnumber());
//        ssizeinc();
//        delete[] students;
//        students = new Student[ssize];
//        for (int l = 0; l < ssize; l++)
//        {
//            students[l].setname(copystudent[l].getname());
//            students[l].setrollnumber(copystudent[l].getrollnumber());
//            students[l].setage(copystudent[l].getage());
//            students[l].setcontactno(copystudent[l].getcontactno());
//        }
//    }           //enrolling a student;
//    Filehandler::enroll(obj.getname(), obj.getrollnumber(), obj.getcontactno(), obj.getage());
//}
//void Student::remove(string rollnumber)
//{
//    setstudents();
//    bool flag = false;
//    for (int i = 0; i < ssize; i++)
//    {
//        if (students[i].getrollnumber() == rollnumber)
//        {
//            name = students[i].getname();
//            Student* copystudent = new Student[(ssize - 1)];
//            for (int k = 0; k < i; k++)
//            {
//                copystudent[k].setname(students[k].getname());
//                copystudent[k].setrollnumber(students[k].getrollnumber());
//                copystudent[k].setage(students[k].getage());
//                copystudent[k].setcontactno(students[k].getcontactno());
//            }
//            for (int j = i; j < (ssize - 1); j++)
//            {
//                copystudent[j].setname(students[j + 1].getname());
//                copystudent[j].setrollnumber(students[j + 1].getrollnumber());
//                copystudent[j].setage(students[j + 1].getage());
//                copystudent[j].setcontactno(students[j + 1].getcontactno());
//            }
//            ssizedec();
//            delete[] students;
//            students = new Student[ssize];
//            for (int l = 0; l < ssize; l++)
//            {
//                students[l].setname(copystudent[l].getname());
//                students[l].setrollnumber(copystudent[l].getrollnumber());
//                students[l].setage(copystudent[l].getage());
//                students[l].setcontactno(copystudent[l].getcontactno());
//            }
//            Filehandler::clear();
//            for (int p = 0; p < ssize; p++)
//            {
//                Filehandler::remove(students[p].getname(), students[p].getrollnumber(), students[p].getcontactno(), students[p].getage());
//            }
//            string textfile = rollnumber;
//            string text = ".txt";
//            textfile.append(text);
//            Filehandler::clearfile(textfile);
//            flag = true;
//        }
//    }
//    if (flag == true)
//    {
//        cout << name << " REMOVED SUCCESSFULLY\n";
//    }
//    else
//    {
//        cout << "NO SUCH STUDENT EXISTS\n";
//    }
//}
//void Student::edit(string croll, string name, string conatctno, int age, int op)
//{
//    string textfile = croll;
//    string text = ".txt";
//    textfile.append(text);
//    setstudents();
//    if (op == 1)
//    {
//        for (int i = 0; i < ssize; i++)
//        {
//            if (students[i].getrollnumber() == croll)
//            {
//                students[i].setname(name);
//                break;
//            }
//        }
//    }
//    if (op == 2)
//    {
//        for (int i = 0; i < ssize; i++)
//        {
//            if (students[i].getrollnumber() == croll)
//            {
//                students[i].setage(age);
//                break;
//            }
//        }
//    }
//    if (op == 3)
//    {
//        for (int i = 0; i < ssize; i++)
//        {
//            if (students[i].getrollnumber() == croll)
//            {
//                students[i].setcontactno(conatctno);
//                break;
//            }
//        }
//    }
//    Filehandler::clear();
//    for (int i = 0; i < ssize; i++)
//    {
//        Filehandler::remove(students[i].getname(), students[i].getrollnumber(), students[i].getcontactno(), students[i].getage());
//    }
//}
//int Student::check(string rollnumber)
//{
//    setstudents();
//    for (int i = 0; i < ssize; i++)
//    {
//        if (students[i].getrollnumber() == rollnumber)
//        {
//            cout << "NAME" << "\t\t\t" << "Roll Number" << "\t" << "AGE\t" << "Contact Number\n";
//            cout << students[i].getname() << "\t\t" << students[i].getrollnumber() << "\t" << students[i].getage() << "\t" << students[i].getcontactno() << endl;
//            cout << endl;
//            return 1;
//        }
//        else
//        {
//            continue;
//        }
//    }
//    return 0;
//}
//int Student::checkcourse(string rollnumber, string code)
//{
//    setstudents();
//    for (int i = 0; i < ssize; i++)
//    {
//        if (students[i].getrollnumber() == rollnumber)
//        {
//            string textfile = rollnumber;
//            string text = ".txt";
//            textfile.append(text);
//            csize = Filehandler::studentcoursesize(textfile);
//            setstudentscourses(textfile);
//            for (int j = 0; j < csize; j++)
//            {
//                if (courses1[j].getcode() == code)
//                {
//                    Course* copycourse = new Course[(csize - 1)];
//                    for (int l = 0; l < j; l++)
//                    {
//                        copycourse[l].setcapacity(courses1[l].getcapcity());
//                        copycourse[l].setcode(courses1[l].getcode());
//                        copycourse[l].setcoursename(courses1[l].getcoursename());
//                        copycourse[l].setcredits(courses1[l].getcredits());
//                        copycourse[l].setinstructor(courses1[l].getinstructor());
//                    }
//                    for (int k = j; k < (csize - 1); k++)
//                    {
//                        copycourse[k].setcapacity(courses1[k + 1].getcapcity());
//                        copycourse[k].setcode(courses1[k + 1].getcode());
//                        copycourse[k].setcoursename(courses1[k + 1].getcoursename());
//                        copycourse[k].setcredits(courses1[k + 1].getcredits());
//                        copycourse[k].setinstructor(courses1[k + 1].getinstructor());
//                    }
//                    csize--;
//                    delete[] courses1;
//                    courses1 = new Course[csize];
//                    for (int l = 0; l < csize; l++)
//                    {
//                        courses1[l].setcoursename(copycourse[l].getcoursename());
//                        courses1[l].setcode(copycourse[l].getcode());
//                        courses1[l].setinstructor(copycourse[l].getinstructor());
//                        courses1[l].setcredits(copycourse[l].getcredits());
//                        courses1[l].setcapacity(copycourse[l].getcapcity());
//                    }
//                    Filehandler::clearfile(textfile);
//                    for (int k = 0; k < csize; k++)
//                    {
//                        Filehandler::studentcourse(textfile, courses1[k].getcoursename(), courses1[k].getcode(), courses1[k].getinstructor(), courses1[k].getcredits(), courses1[k].getcapcity(), students[i].getmarks(), students[i].getattendence());
//                    }
//                    return 1;
//                }
//            }
//            return 0;
//        }
//        else
//        {
//            continue;
//        }
//    }
//    return 0;
//}
//void Student::display()
//{
//    Filehandler::display();
//}
//void Student::coursesdisplay(string rollnumber)
//{
//    setstudents();
//    for (int i = 0; i < ssize; i++)
//    {
//        if (students[i].getrollnumber() == rollnumber)
//        {
//            string textfile = students[i].getrollnumber();
//            string txt = ".txt";
//            textfile.append(txt);
//            Filehandler::studentcoursedisplay(textfile);
//            break;
//        }
//        else
//        {
//            continue;
//        }
//    }
//}
//
//
//
////COURSES FUNCTIONS
//
//void Course::studentadd(string code, Student& obj)
//{
//    setcourses();
//    for (int i = 0; i < clen; i++)
//    {
//        if (courses[i].getcode() == code)
//        {
//            if (courses[i].capacity == 50)
//            {
//                cout << "Capacity Full\n";
//                break;
//            }
//            else
//            {
//                obj.setmarks(0);
//                obj.setattendence(0);
//                int inc = courses[i].getcapcity();
//                inc++;
//                courses[i].setcapacity(inc);
//                string textfile = code;
//                string txt = ".txt";
//                textfile.append(txt);
//                slen = Filehandler::coursestudentsize(textfile);
//                if (slen == 0)
//                {
//                    slen = 1;
//                    students1 = new Student[slen + 1];
//                    students1[slen].setname(obj.getname());
//                    students1[slen].setcontactno(obj.getcontactno());
//                    students1[slen].setage(obj.getage());
//                    students1[slen].setrollnumber(obj.getrollnumber());
//                    students1[slen].setattendence(obj.getattendence());
//                    students1[slen].setmarks(obj.getmarks());
//                }
//                else
//                {
//                    setcoursesstudent(textfile);
//                    slen = Filehandler::coursestudentsize(textfile);
//                    Student* copystudent = new Student[slen + 1];
//                    for (int l = 0; l < slen; l++)
//                    {
//                        copystudent[l].setname(students1[l].getname());
//                        copystudent[l].setrollnumber(students1[l].getrollnumber());
//                        copystudent[l].setage(students1[l].getage());
//                        copystudent[l].setcontactno(students1[l].getcontactno());
//                        copystudent[l].setmarks(students1[l].getmarks());
//                        copystudent[l].setattendence(students1[l].getattendence());
//                    }
//                    copystudent[slen].setname(obj.getname());
//                    copystudent[slen].setage(obj.getage());
//                    copystudent[slen].setcontactno(obj.getcontactno());
//                    copystudent[slen].setrollnumber(obj.getrollnumber());
//                    copystudent[slen].setmarks(obj.getmarks());
//                    copystudent[slen].setattendence(obj.getattendence());
//                    slen++;
//                    delete[] students1;
//                    students1 = new Student[slen];
//                    for (int l = 0; l < slen; l++)
//                    {
//                        students1[l].setname(copystudent[l].getname());
//                        students1[l].setrollnumber(copystudent[l].getrollnumber());
//                        students1[l].setage(copystudent[l].getage());
//                        students1[l].setcontactno(copystudent[l].getcontactno());
//                        students1[l].setmarks(copystudent[l].getmarks());
//                        students1[l].setattendence(copystudent[l].getattendence());
//                    }
//                }
//                Filehandler::coursestudentfile(textfile, obj.getrollnumber(), obj.getname(), obj.getage(), obj.getcontactno(), obj.getattendence(), obj.getmarks());
//                string ntext = "nCourses.txt";
//                Filehandler::clearfile(ntext);
//                for (int k = 0; k < clen; k++)
//                {
//                    Filehandler::updatecourse(courses[k]);
//                }
//            }
//        }
//    }
//
//}
//void Course::setcoursesstudent(string textfile)
//{
//    string name1 = "0";
//    string contactno1;
//    int age1;
//    string rollno1;
//    string sname1;
//    float attendence;
//    float marks;
//    slen = Filehandler::coursestudentsize(textfile);
//    students1 = new Student[slen];
//    ifstream infile(textfile);
//    int i = 0;
//    while (infile >> rollno1 >> name1 >> sname1 >> age1 >> contactno1 >> marks >> attendence)
//    {
//        students1[i].setage(age1);
//        students1[i].setcontactno(contactno1);
//        students1[i].setrollnumber(rollno1);
//        string space = " ";
//        name1.append(space);
//        name1.append(sname1);
//        students1[i].setname(name1);
//        students1[i].setmarks(marks);
//        students1[i].setattendence(attendence);
//        i++;
//    }
//    infile.close();
//}
//void Course::displaycoursestudent(string code)
//{
//    setcourses();
//    for (int i = 0; i < clen; i++)
//    {
//        if (courses[i].getcode() == code)
//        {
//            string textfile = code;
//            string txt = ".txt";
//            textfile.append(txt);
//            Filehandler::displaycoursestudents(textfile, courses[i].getcoursename());
//            break;
//        }
//    }
//
//}
//void Course::setstudentmarks(string code, float marks, string rollno)
//{
//    setcourses();
//    for (int i = 0; i < clen; i++)
//    {
//        if (courses[i].getcode() == code)
//        {
//            string textfile = code;
//            string txt = ".txt";
//            textfile.append(txt);
//            slen = Filehandler::coursestudentsize(textfile);
//            setcoursesstudent(textfile);
//            for (int j = 0; j < slen; j++)
//            {
//                if (students1[j].getrollnumber() == rollno)
//                {
//                    students1[j].setmarks(marks);
//                }
//            }
//            Filehandler::clearfile(textfile);
//            for (int k = 0; k < slen; k++)
//            {
//                Filehandler::coursestudentfile(textfile, students1[k].getrollnumber(), students1[k].getname(), students1[k].getage(), students1[k].getcontactno(), students1[k].getattendence(), students1[k].getmarks());
//            }
//            break;
//        }
//    }
//}
//void Course::setstudentattendence(string code, float attendence, string rollno)
//{
//    setcourses();
//    for (int i = 0; i < clen; i++)
//    {
//        if (courses[i].getcode() == code)
//        {
//            string textfile = code;
//            string txt = ".txt";
//            textfile.append(txt);
//            slen = Filehandler::coursestudentsize(textfile);
//            setcoursesstudent(textfile);
//            for (int j = 0; j < slen; j++)
//            {
//                if (students1[j].getrollnumber() == rollno)
//                {
//                    students1[j].setattendence(attendence);
//                }
//            }
//            Filehandler::clearfile(textfile);
//            for (int k = 0; k < slen; k++)
//            {
//                Filehandler::coursestudentfile(textfile, students1[k].getrollnumber(), students1[k].getname(), students1[k].getage(), students1[k].getcontactno(), students1[k].getattendence(), students1[k].getmarks());
//            }
//            break;
//        }
//    }
//}
//void Course::setcourses()
//{
//    string c;
//    string n;
//    string nn;
//    string insf;
//    string insl;
//    int cred;
//    int limit;
//    clen = Filehandler::coursesizeset();
//    courses = new Course[clen];
//    ifstream infile("nCourses.txt");
//    int i = 0;
//    while (infile >> c >> n >> nn >> insf >> insl >> cred >> limit)
//    {
//        courses[i].setcode(c);
//        courses[i].setcredits(cred);
//        string space = " ";
//        n.append(space);
//        n.append(nn);
//        courses[i].setcoursename(n);
//        insf.append(space);
//        insf.append(insl);
//        courses[i].setinstructor(insf);
//        courses[i].setcapacity(limit);
//        i++;
//    }
//    infile.close();
//}
//int Course::check(string code)
//{
//    setcourses();
//    for (int i = 0; i < clen; i++)
//    {
//        if (courses[i].getcode() == code)
//        {
//            if (courses[i].getcapcity() == 50)
//            {
//                return 2;
//            }
//            else
//            {
//                return 1;
//            }
//        }
//    }
//    return 0;
//}
//int Course::checkstudent(string rollnumber, string code)
//{
//    setcourses();
//    int see = 0;
//    for (int i = 0; i < clen; i++)
//    {
//        if (courses[i].getcode() == code)
//        {
//            string textfile = code;
//            string txt = ".txt";
//            textfile.append(txt);
//            setcoursesstudent(textfile);
//            slen = Filehandler::coursestudentsize(textfile);
//            for (int k = 0; k < slen; k++)
//            {
//                if (students1[k].getrollnumber() == rollnumber)
//                {
//                    see = 1;
//                    return see;
//                }
//            }
//        }
//    }
//    return see;
//}
//void Course::cadd(Course& obj)
//{
//    setcourses();
//    capacity = 0;
//    if (courses == nullptr)
//    {
//        courses = new Course[clen + 1];
//        courses[clen].setcode(obj.getcode());
//        courses[clen].setcoursename(obj.getcoursename());
//        courses[clen].setinstructor(obj.getinstructor());
//        courses[clen].setcredits(obj.getcredits());
//        courses[clen].setcapacity(obj.getcapcity());
//        cleninc();
//    }
//    else
//    {
//        Course* copycourse = new Course[clen + 1];
//        for (int i = 0; i < clen; i++)
//        {
//            copycourse[i].setcoursename(courses[i].getcoursename());
//            copycourse[i].setcode(courses[i].getcode());
//            copycourse[i].setinstructor(courses[i].getinstructor());
//            copycourse[i].setcredits(courses[i].getcredits());
//            copycourse[i].setcapacity(courses[i].getcapcity());
//        }
//        copycourse[clen].setcoursename(obj.getcoursename());
//        copycourse[clen].setcode(obj.getcode());
//        copycourse[clen].setinstructor(obj.getinstructor());
//        copycourse[clen].setcredits(obj.getcredits());
//        copycourse[clen].setcapacity(obj.getcapcity());
//        cleninc();
//        delete[] courses;
//        courses = new Course[clen];
//        for (int i = 0; i < clen; i++)
//        {
//            courses[i].setcoursename(copycourse[i].getcoursename());
//            courses[i].setcode(copycourse[i].getcode());
//            courses[i].setinstructor(copycourse[i].getinstructor());
//            courses[i].setcredits(copycourse[i].getcredits());
//            courses[i].setcapacity(copycourse[i].getcapcity());
//        }
//    }           //enrolling a student;
//
//    Filehandler::courseadd(obj.code, obj.coursename, obj.Instructor, obj.capacity, obj.credits);
//}
//void Course::setstudentfilemars(string code, string rollno, string edit)
//{
//    string textfile = rollno;
//    string text = ".txt";
//    textfile.append(text);
//    Filehandler::clearfile(textfile);
//    setcourses();
//    for (int i = 0; i < clen; i++)
//    {
//        string textfile1 = courses[i].getcode();
//        textfile1.append(text);
//        setcoursesstudent(textfile1);
//        slen = Filehandler::coursestudentsize(textfile1);
//        for (int k = 0; k < slen; k++)
//        {
//            if (students1[k].getrollnumber() == rollno)
//            {
//                Filehandler::studentcourse(textfile, courses[i].getcoursename(), courses[i].getcode(), courses[i].getinstructor(), courses[i].getcredits(), courses[i].getcapcity(), students1[k].getmarks(), students1[k].getattendence());
//            }
//        }
//    }
//}
//void Course::removestudent(string rollno)
//{
//    string text = ".txt";
//    setcourses();
//    for (int i = 0; i < clen; i++)
//    {
//        string textfile1 = courses[i].getcode();
//        textfile1.append(text);
//        setcoursesstudent(textfile1);
//        slen = Filehandler::coursestudentsize(textfile1);
//        for (int g = 0; g < slen; g++)
//        {
//            if (students1[g].getrollnumber() == rollno)
//            {
//                Student* copystudent = new Student[(slen - 1)];
//                for (int k = 0; k < g; k++)
//                {
//                    copystudent[k].setname(students1[k].getname());
//                    copystudent[k].setrollnumber(students1[k].getrollnumber());
//                    copystudent[k].setage(students1[k].getage());
//                    copystudent[k].setcontactno(students1[k].getcontactno());
//                    copystudent[k].setattendence(students1[k].getattendence());
//                    copystudent[k].setmarks(students1[k].getmarks());
//                }
//                for (int j = g; j < (slen - 1); j++)
//                {
//                    copystudent[j].setname(students1[j + 1].getname());
//                    copystudent[j].setrollnumber(students1[j + 1].getrollnumber());
//                    copystudent[j].setage(students1[j + 1].getage());
//                    copystudent[j].setcontactno(students1[j + 1].getcontactno());
//                    copystudent[j].setattendence(students1[j + 1].getattendence());
//                    copystudent[j].setmarks(students1[j + 1].getmarks());
//                }
//                slen--;
//                delete[] students1;
//                students1 = new Student[slen];
//                for (int l = 0; l < slen; l++)
//                {
//                    students1[l].setname(copystudent[l].getname());
//                    students1[l].setrollnumber(copystudent[l].getrollnumber());
//                    students1[l].setage(copystudent[l].getage());
//                    students1[l].setcontactno(copystudent[l].getcontactno());
//                    students1[l].setmarks(copystudent[l].getmarks());
//                    students1[l].setattendence(copystudent[l].getattendence());
//                }
//                int dec = courses[i].getcapcity();
//                dec--;
//                courses[i].setcapacity(dec);
//                Filehandler::clearfile("nCourses.txt");
//                for (int k = 0; k < clen; k++)
//                {
//                    Filehandler::updatecourse(courses[k]);
//                }
//                Filehandler::clearfile(textfile1);
//                for (int p = 0; p < slen; p++)
//                {
//                    Filehandler::coursestudentfile(textfile1, students1[p].getrollnumber(), students1[p].getname(), students1[p].getage(), students1[p].getcontactno(), students1[p].getattendence(), students1[p].getmarks());
//                }
//            }
//        }
//    }
//}
//void Course::removestudentone(string rollno, string code)
//{
//    string text = ".txt";
//    setcourses();
//    for (int i = 0; i < clen; i++)
//    {
//        if (courses[i].getcode() == code)
//        {
//            string textfile1 = courses[i].getcode();
//            textfile1.append(text);
//            setcoursesstudent(textfile1);
//            slen = Filehandler::coursestudentsize(textfile1);
//            for (int g = 0; g < slen; g++)
//            {
//                if (students1[g].getrollnumber() == rollno)
//                {
//                    Student* copystudent = new Student[(slen - 1)];
//                    for (int k = 0; k < g; k++)
//                    {
//                        copystudent[k].setname(students1[k].getname());
//                        copystudent[k].setrollnumber(students1[k].getrollnumber());
//                        copystudent[k].setage(students1[k].getage());
//                        copystudent[k].setcontactno(students1[k].getcontactno());
//                        copystudent[k].setattendence(students1[k].getattendence());
//                        copystudent[k].setmarks(students1[k].getmarks());
//                    }
//                    for (int j = g; j < (slen - 1); j++)
//                    {
//                        copystudent[j].setname(students1[j + 1].getname());
//                        copystudent[j].setrollnumber(students1[j + 1].getrollnumber());
//                        copystudent[j].setage(students1[j + 1].getage());
//                        copystudent[j].setcontactno(students1[j + 1].getcontactno());
//                        copystudent[j].setattendence(students1[j + 1].getattendence());
//                        copystudent[j].setmarks(students1[j + 1].getmarks());
//                    }
//                    slen--;
//                    delete[] students1;
//                    students1 = new Student[slen];
//                    for (int l = 0; l < slen; l++)
//                    {
//                        students1[l].setname(copystudent[l].getname());
//                        students1[l].setrollnumber(copystudent[l].getrollnumber());
//                        students1[l].setage(copystudent[l].getage());
//                        students1[l].setcontactno(copystudent[l].getcontactno());
//                        students1[l].setmarks(copystudent[l].getmarks());
//                        students1[l].setattendence(copystudent[l].getattendence());
//                    }
//                    int dec = courses[i].getcapcity();
//                    dec--;
//                    courses[i].setcapacity(dec);
//                    Filehandler::clearfile("nCourses.txt");
//                    for (int k = 0; k < clen; k++)
//                    {
//                        Filehandler::updatecourse(courses[k]);
//                    }
//                    Filehandler::clearfile(textfile1);
//                    for (int p = 0; p < slen; p++)
//                    {
//                        Filehandler::coursestudentfile(textfile1, students1[p].getrollnumber(), students1[p].getname(), students1[p].getage(), students1[p].getcontactno(), students1[p].getattendence(), students1[p].getmarks());
//                    }
//                }
//            }
//        }
//    }
//}
//void Course::editstudentdetail(string rollno, int age, string edit, int op)
//{
//    string text = ".txt";
//    setcourses();
//    for (int i = 0; i < clen; i++)
//    {
//        string textfile1 = courses[i].getcode();
//        textfile1.append(text);
//        setcoursesstudent(textfile1);
//        slen = Filehandler::coursestudentsize(textfile1);
//        for (int j = 0; j < slen; j++)
//        {
//            if (students1[j].getrollnumber() == rollno)
//            {
//                if (op == 1)
//                {
//                    students1[j].setname(edit);
//                }
//                if (op == 2)
//                {
//                    students1[j].setage(age);
//                }
//                if (op == 3)
//                {
//                    students1[j].setcontactno(edit);
//                }
//                Filehandler::clearfile(textfile1);
//                for (int p = 0; p < slen; p++)
//                {
//                    Filehandler::coursestudentfile(textfile1, students1[p].getrollnumber(), students1[p].getname(), students1[p].getage(), students1[p].getcontactno(), students1[p].getattendence(), students1[p].getmarks());
//                }
//            }
//        }
//    }
//}
//void Course::display()
//{
//    Filehandler::coursedisplay();
//}
//
//
////SYSTEM CLASS FUNCTIONS
//void System::Menu()
//{
//    int choice1 = 0;
//    cout << "1- Enroll a student.\n";
//    cout << "2- Course Registration.\n";
//    cout << "3- Attendence.\n";
//    cout << "4- Marks.\n";
//    cout << "5- Course withdraw.\n";
//    cout << "6- Exit\n";
//    cout << "\n\n";
//    cout << "ENTER YOUR CHOICE:";
//    Validator::input(choice1, 1, 6);
//    system("cls");
//    if (choice1 == 1)
//    {
//        System::enroll();
//    }
//    if (choice1 == 2)
//    {
//        System::coursereg();
//    }
//    if (choice1 == 3)
//    {
//        System::checkattend();                                        //attendance
//    }
//    if (choice1 == 4)
//    {
//        System::marksassign();
//    }
//    if (choice1 == 5)
//    {
//        System::coursewith();
//    }
//    if (choice1 == 6)
//    {
//        System::exit();
//        system("cls");                                          //exiting
//    }
//}
//void System::enroll()
//{
//    cout << "1- Display Already Enrolled Students.\n";
//    cout << "2- Add a Student.\n";
//    cout << "3- Remove a Student.\n";
//    cout << "4- Edit Student Detail.\n";
//    cout << "5- Back\n";
//    cout << "\n\n";
//    cout << "ENTER YOUR CHOICE:";
//    int choice;
//    Validator::input(choice, 1, 5);
//    system("cls");
//    if (choice == 1)
//    {
//        Student::display();
//        system("cls");
//        System::enroll();
//    }
//    if (choice == 2)
//    {
//        string name;
//        string rollno;
//        string contactno;
//        int age;
//        cout << "Enter Student Name:";
//        getline(cin >> ws, name);
//        cout << "Enter Student Age:";
//        cin >> age;
//        cout << "Enter Student Roll number:";
//        getline(cin >> ws, rollno);
//        cout << "Enter Student Contactno:";
//        getline(cin >> ws, contactno);
//        moveon();
//        system("cls");
//        Student obj;
//        obj.set(name, rollno, contactno, age);
//        Student::enroll(obj);
//        System::enroll();
//    }
//    if (choice == 3)
//    {
//        string rollno;
//        cout << "ENTER THE ROLL NUMBER OF STUDENT YOU WANT TO REMOVE:";
//        getline(cin >> ws, rollno);
//        Student::remove(rollno);
//        Course::removestudent(rollno);
//        moveon();
//        system("cls");
//        System::enroll();
//    }
//    if (choice == 4)
//    {
//        string name = "0";
//        string rollno = "0";
//        string contactno = "0";
//        int age = 0;
//        cout << "ENTER THE ROLL NUMBER OF STUDENT WHOSE DETAIL YOU WANT TO EDIT:";
//        getline(cin >> ws, rollno);
//        int check = Student::check(rollno);
//        if (check == 1)
//        {
//            cout << "WHICH STUDENT DETAIL YOU WANT TO EDIT\n";
//            cout << "1- Name of Student.\n";
//            cout << "2- Age of Student.\n";
//            cout << "3- Contact Number of Student.\n";
//            cout << "4- Back\n";
//            cout << "ENTER YOUR CHOICE:";
//            int choice;
//            Validator::input(choice, 1, 4);
//            if (choice == 1)
//            {
//                cout << "ENTER NEW NAME:";
//                getline(cin >> ws, name);
//                Student::edit(rollno, name, contactno, age, choice);
//                Course::editstudentdetail(rollno, age, name, choice);
//            }
//            if (choice == 2)
//            {
//                cout << "ENTER NEW AGE:";
//                cin >> age;
//                Student::edit(rollno, name, contactno, age, choice);
//                Course::editstudentdetail(rollno, age, name, choice);
//            }
//            if (choice == 3)
//            {
//                cout << "ENTER NEW CONTACT NUMBER:";
//                getline(cin >> ws, contactno);
//                Student::edit(rollno, name, contactno, age, choice);
//                Course::editstudentdetail(rollno, age, contactno, choice);
//            }
//            if (choice == 4)
//            {
//                system("cls");
//                System::enroll();
//            }
//        }
//        else
//        {
//            cout << "NO SUCH STUDENT EXISTS\n";
//            moveon();
//        }
//        system("cls");
//        System::enroll();
//    }
//    if (choice == 5)
//    {
//
//        system("cls");
//        System::Menu();
//    }
//}
//int main()
//{
//    System obj;
//    obj.Menu();
//    return 0;
//}
//
//
//

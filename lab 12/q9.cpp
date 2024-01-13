//#include <iostream>
//using namespace std;
//class invalidDay
//{
//};
//class invalidMonth
//{
//};
//class invalidYear
//{
//};
//class DateOfBirth
//{
//private:
//    int day, month, year;
//
//public:
//    void inputDate()
//    {
//        cout << "Enter the date of birth (in the format MM-DD-YYYY): ";
//        char separator;
//        cin >> month >> separator >> day >> separator >> year;
//    }
//
//    void validateDate()
//    {
//        if (month < 1 || month > 12)
//        {
//            throw invalidMonth();
//        }
//
//        if (day < 1 || day > daysInMonth(month, year))
//        {
//            throw invalidDay();
//        }
//
//        if (year < 1900 || year > 2100)
//        {
//            throw invalidYear();
//        }
//    }
//
//    void outputFormattedDate()
//    {
//        const char* months[] = { "January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December" };
//        cout << "Date of Birth: " << months[month - 1] << " " << day << ", " << year << endl;
//    }
//private:
//    static int daysInMonth(int m, int y)
//    {
//        if (m == 2)
//        {
//            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//                return 29;
//            else
//                return 28;
//        }
//        else if (m == 4 || m == 6 || m == 9 || m == 11)
//        {
//            return 30;
//        }
//        else
//        {
//            return 31;
//        }
//    }
//};
//int main()
//{
//    DateOfBirth dob;
//    try
//    {
//        dob.inputDate();
//        dob.validateDate();
//        dob.outputFormattedDate();
//    }
//    catch (const invalidDay& e)
//    {
//        cout << "Error: Invalid day entered." << endl;
//    }
//    catch (const invalidMonth& e)
//    {
//        cout << "Error: Invalid month entered." << endl;
//    }
//    catch (const invalidYear& e)
//    {
//        cout << "Error: Invalid year entered (leap year handling)." << endl;
//    }
//    return 0;
//}
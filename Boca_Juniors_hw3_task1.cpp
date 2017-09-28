#include <iostream>
using namespace std;
 class Date
{
 private:
     int month;
     int day;
     int year;
     char tempchar;
 public:

     void getDate()
     {
         cout << " \nEnter your date format(12/31/99): ";
         cin >> month>>tempchar>>day>> tempchar>> year;


     }
     void showDate()
     {
        cout << month << "/" << day << "/" << year;
     }

 };


int main(void) {

    Date d1,d2;

    d1.getDate();
    d2.getDate();
    cout << "Date 1:";
    d1.showDate();
    cout << "\nDate 2: ";
    d2.showDate();

    return 0;
}
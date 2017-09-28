#include <iostream>
using namespace std;
 class Date
{
 private:
     int month;
     int day;
     int year;
     int tempchar;
 public:

     void getDate()
     {
         cout << " \nEnter your date format(12/31/99): ";
         cin >> month >>tempchar>>day>> tempchar>> year;


     }
     void showDate()
     {
        cout << month<<"/"<< day <<"/"<<year<<endl;
     }

 };


int main(void) {

    Date d1,d2;

    d1.getDate();
    cout << "Date 1 :"<< endl;
    d1.showDate();


    d2.getDate();
    cout << "Date 2: ";
    d2.showDate();

    return 0;
}
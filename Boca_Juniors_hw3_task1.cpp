#include <iostream>
using namespace std;
 class Date
{
 private:
     int month;
     int day;
     int year;
 public:

     void set_date(int mon, int d, int y)
     {
         month = mon;
         day = d;
         year = y;

     }

     void get_date()
     {
         cout << " \nEnter your first date format(12/31/99): ";
         cin >> month,day, year;
     }

 };


int main(void) {

    Date d1,d2;




    return 0;
}
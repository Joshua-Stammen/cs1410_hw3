#include <iostream>
using namespace std;

enum objectClass {alpha, beta, gamma};
void showSerial(objectClass);
int main() {

    objectClass object;

    showSerial(alpha);
    showSerial(beta);
    showSerial(gamma);
    cout << "Hello, World" << endl;
    return 0;
}
void showSerial(objectClass) {
    cout << "I am object number " << objectClass() <<endl;

}
int Objectnumber(int on) {
    on = 0;
    return on;
};

/*Create a class that includes a data member that holds a
 * “serial number” for each object created from then class.
 * That is, the first object created will be numbered 1,
 * the second 2, and so on. To do this, you’ll need another
 * data member that records a count of how many objects have
 * been created so far. (This member should apply to the
 * class as a whole; not to the individual objects. What key
 * word specifies this?). Then, as each object is created,
 * its constructor can examine this count member variable to
 * determine the appropriate serial number for the new object.
 * Add a member function that allows the object to report its
 * own serial number. Create a function that takes the class
 * “serial” as input parameter and displays the appropriate
 * serial number for the object. You may use the following
 * code for you main function.*/
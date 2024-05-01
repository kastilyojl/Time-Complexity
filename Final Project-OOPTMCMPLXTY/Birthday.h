// Birthday Class

#include <iostream>
using namespace std;

class Birthday
{

public: // access modifier

    string month[12] = { "January","February","March","April","May","June",
                       "July","August","September","October","November","December" };
    
    //  change these value according to the current month, year, and date
    int currentMonth = 1, currentYear = 2023;
    int currentDate = 27;
    

public: // access modifier

    // accessing from month array
    string gettingMonth(int mon) {
        mon = mon - 1;
        return month[mon];
    }

    int gettingDate(int mon, int dt) {

        if (gettingMonth(mon) == gettingMonth(2)) { // for the month of February
            if (dt > 0 && dt < 30) { // Valid
                return dt;
            }
            else { // Not Valid!
                cout << "Invalid date! " << endl;
                exit(0);
            }
        }
        else { // for the other month except February
            if (dt > 0 && dt < 32) { // Valid!
                return dt;
            }
            else { // Not Valid!
                cout << "Invalid date! " << endl;        
                exit(0);
            }
        }

    }

    int gettingYear(int year) {

        if (year <= currentYear && year > 0) {
            return year;
        }
        else {
            cout << "Invalid Year" << endl;
            exit(0);
        }
    }

    int computingAge(int mon, int dt, int year) {

        int age;

        if (mon == currentMonth && currentYear) {
            if (dt == currentDate) {
                age = currentYear - (year + 1);
                return age;
            }
            else {
                age = currentYear - year;
                return age;
            }
        }
        else {
            age = currentYear - year - 1;
            return age;
        }

    }

    void displayInfo(int mon, int dt, int year) {

        cout << "\n==CONSTANT==" << endl;
        cout << "\nDate of Birth: " << year << ", " << gettingMonth(mon) << " " << dt << endl;
        cout << "Age: " << computingAge(mon, dt, year) << endl;
    }
};


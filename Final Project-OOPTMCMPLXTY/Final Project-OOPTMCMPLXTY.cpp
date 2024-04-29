#include <iostream>
#include <time.h>     // import time
#include "Birthday.h" // import class
#include "Age.h"      // import class

using namespace std;

int main()
{
    // creating classes object
    Birthday bday;
    Age edad;
    
    // global variable
    int mon, dt, year;
    int search;

    // for measuring time
    clock_t start, end;
    double time_taken;

    while (true) {

        cout << "''''' It's Your Birthday!.. '''''" << endl;
        cout << " ~ ~    Age Computation      ~ ~ " << endl;

        cout << "\n#" << (edad.index + 1) << endl;

        cout << "\nMonth: ";
        cin >> mon;

        cout << "Date: ";
        cin >> dt;
        bday.gettingDate(mon, dt); // calling gettingDate method

        cout << "Year: ";
        cin >> year;
        bday.gettingYear(year);

        start = clock();
        bday.displayInfo(mon, dt, year);
        end = clock();
        time_taken = double(end - start) / double(CLOCKS_PER_SEC);
        cout << "Time: " << time_taken << endl;

        edad.storeArray(bday.computingAge(mon, dt, year));

    menu: // label (think of it as checkpoint)
        cout << "\n[1] Enter Again [2] List [3] Sort [4] Search [5] Exit" << endl;
        cout << "=> ";
        int menu;
        cin >> menu;
        
        switch (menu) {
            case 1:
                system("cls");
                break;

            case 2:
                cout << "\n==Linear==" << endl;
                cout << "\nList of Age: ";

                start = clock();
                edad.printArray(); // method    
                end = clock();

                time_taken = double(end - start) / double(CLOCKS_PER_SEC);
                cout << "\nTime: " << time_taken << endl;
                goto menu;
                break;

            case 3:
                cout << "\n==QUADRATIC==" << endl;
                cout << "\nSorted Age: ";

                start = clock();
                edad.printSortArray(); // method
                end = clock();
                time_taken = double(end - start) / double(CLOCKS_PER_SEC);
                cout << "\nTime: " << time_taken << endl;
                goto menu;
                break;

            case 4:
                cout << "\n==LOGARITHMIC==" << endl;
                cout << "\nAge to search: ";
                cin >> search;
                cout << endl;

                start = clock();
                edad.search(search); // method
                end = clock();
                time_taken = double(end - start) / double(CLOCKS_PER_SEC);
                cout << "\nTime: " << time_taken << endl;
                goto menu;
                break;

            case 5:
                exit(0); // program end
                break;

            default:
                goto menu; // start in menu label
        }
        

    }

}
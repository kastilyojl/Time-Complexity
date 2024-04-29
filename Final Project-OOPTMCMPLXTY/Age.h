// Age Class

#include <iostream>
using namespace std;

class Age
{

public:
    int max[100]; // max size of input
    int index = 0;
    int temp;
    

public: // access modifier

    void storeArray(int age) {
        max[index] = age;
        index++;
    }

    // Linear Time
    void printArray() {

        for (int i = 0; i < index; i++) {
            cout << max[i] << " ";
        }
       
        
    }   

    // Quadratic Time
    void sortingArray() {

        for (int i = 0; i < index; i++) { 
            for (int j = i + 1; j < index; j++) { 

                if (max[i] > max[j]) {
                    temp = max[j];
                    max[j] = max[i];
                    max[i] = temp;
                }
            }
        }

    }

    void printSortArray() {

        sortingArray();
        for (int i = 0; i < index; i++) {
            cout << max[i] << " ";
        }
    }

    // Logarithmic Time
    void search(int search) {

       int term = 0;
       int first = 0, last = index-1, mid;

       sortingArray();

        while (first<=last) {
            mid = (first + last) / 2;
            term++;

            if (max[mid] < search) 
                first = mid + 1;

            else if (max[mid] > search)
                last = mid - 1;           

            else{
                cout << "Found at Index: " << mid << endl;
                cout << "Number of Terms: " << term;
                break;
            }
            
        }

            
        
        
    }

};


#include <iostream>
#include <iomanip> // to make it so that i can use setw()

using namespace std;
int main(){
    double total = 0.00; //defining each variable value so that they can be called and worked with from a clean slate.
    int x;
    int i = 0;
    int min = 1000;
    int max = 0;
    do{
        cout << "Enter a positive integer that is a multiple of 3:" << endl;
        cin >> x;
        if (x < 0) {
            cout << "Number was not a positive integer or was not a multiple of 3" << endl; // if and else if statements to make sure the number is a multiple of 3 and positive integer.
        }
        else if (x % 3 != 0) {
            cout << "Number was not a positive integer or was not a multiple of 3" << endl;
        }
        else {
            // if (i = 0) { // this is so that the minimum doesn't stay zero the entire time, the first number entered would technically be the min.
            //     min = x;
            //     i++;
            //     total = total + x;
            // }

            if (x < min) {
                min = x;
                i++;
                total = total + x;
                // average = total / i;


            }
            else if (x > max) {
                max = x;
                i++;
                total = total + x;
                // average = total / i;
            }

        }

    } while(i < 5);

cout << "Count" << setw(9) << "Minimum" << setw(9) << "Maximum" << setw(7) << "Total" << setw(9) << "Average" << endl;
cout << "-----------------------------------------\n-----------------------------------------" << endl;
cout << i << setw(7) << min << setw(10) << max << setw(9) << total << setw(9) << total / i << endl;
    return 0;
}
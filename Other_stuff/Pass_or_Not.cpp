#include <iostream>
#include <cmath>
#include <chrono> 
#include <thread>

using namespace std; 

int main() {
    float a;
    int b = 1;

    while (b == 1) {
        cout << "Please enter your score.\n0 ~ 59 : Don't Pass; 60 ~ 100 : Pass\n";
        cin >> a;

        if (a == 100) {
            cout << "Great Job! \n"; 
        } else if (a == 67) {
            for (int c = 1; c < 100; c++) {
                cout << "67!! Six Seven \n";
                // Pauses execution for 1000 milliseconds (1 second) each iteration
                this_thread::sleep_for(chrono::milliseconds(100));
            }
        } else if (a >= 60 && a <= 99) {
            cout << "Pass \n";
        } else if (a >= 0 && a < 60) {
            cout << "Didn't Pass \n";
        } else {
            cout << "Error \n";
        }

        cout << "Do you want to continue? Please enter 1 for continue and 0 for exit: ";
        cin >> b;
        for (int c = 1; c < 100; c++) {
                cout << "67!! Six Seven \n";
                // Pauses execution for 1000 milliseconds (1 second) each iteration
                this_thread::sleep_for(chrono::milliseconds(100));
            }
    }

    return 0;
}

#include <iostream>
using namespace std; 

int main() {
    int n;
    cin >> n;
    
    if (n >= 0 && n <= 10) cout << n * 6;
    if (n >= 11 && n <= 20) cout << 60 + (n - 10) * 2;
    if (n >= 21 && n <= 40) cout << 80 + (n - 20);
    if (n > 40) cout << 100;
}

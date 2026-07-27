#include <iostream>

using namespace std; 

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    
    cout << c - a;
    return 0;
}

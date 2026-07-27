#include <iostream>

using namespace std; 

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    
    while(true){
        a = a + c;
        if (a % k == 0)continue;
        cout << a << "\n";
        if (a >= b)break;
    }
}

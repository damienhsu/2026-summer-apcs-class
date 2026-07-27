#include <iostream>

using namespace std; 

int main() {
     int n, i =1;
     cin >> n;
     
     while(true){
        if (n % 2 != 0) n = n*3 + 1;
        else n/=2;
        i++;
        cout << n << "\n";
        if (n==1 || i == 15)break;
            
     }
}

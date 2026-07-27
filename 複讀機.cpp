/*************************************************
Description
    輸入只有一行，會有兩個整數 a, b，彼此用空白隔開
    請總共輸出五行，說明如下：

    第一行：輸出 a + b 的結果
    
    第二行：輸出 a - b 的結果
    
    第三行：輸出 a * b 的結果
    
    第四行：輸出 a / b 的結果
    
    第五行：輸出 a % b 的結果
input

    輸入會有兩個整數 a, b
Output
    
    請總共輸出五行，說明如下：
    
    第一行：輸出 a + b 的結果
    
    第二行：輸出 a - b 的結果
    
    第三行：輸出 a * b 的結果
    
    第四行：輸出 a / b 的結果
    
    第五行：輸出 a % b 的結果
    
Sample Input 1 
    
    7 3
Sample Output 1
    
    10
    4
    21
    2
    1

*************************************************/

#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
    int a;
    int b;
    cin >> a; 
    cin >> b;
    cout 
    << (a+b) << "\n" 
    << (a-b) << "\n" 
    << (a*b) << "\n" 
    << (a/b) << "\n" 
    << (a%b) << "\n";
    
}

#include <iostream>

using namespace std; 

int main() {
int main()

int a,b,c,odd=0,even=0,score=0;
cin >> a >> b >> c;
if(a % 2 [= 0)odd ++;
else even ++;
if(b % 2 != 0)odd ++;
else even ++;
if(c % 2 != 0)odd ++;
else even ++;

if(odd>=2)score += 15;
if(even>=2)score += 20;

if(a>b)swap(a,b);
if(b>c)swap(b,c);
if(a>b)swap(a,b);

if(ca == 0)score += 10;
if(a == b || b == c || a == c)score -= 5;
cout << score;

}

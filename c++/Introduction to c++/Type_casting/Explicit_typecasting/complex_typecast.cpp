#include <iostream>
using namespace std;

 int main(){
     int a;
     char c;
     a = 356;
//   1. in memory a value is 1  0110 0100
//   2. while typecast to char as it is 1 byte-> 8 bit so only last byte it will consider
//   3. so here c value is 0110 0100 which is 100.so it's ascii value is d.
     c=a;
     cout << c << endl;
 }


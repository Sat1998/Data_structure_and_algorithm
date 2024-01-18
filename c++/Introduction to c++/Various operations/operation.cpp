#include <iostream>
using namespace std;
int main(){
    int a =10;
    int b =15;
    int c=a+b;
    cout << c << endl;

    char ch='x';
    cout << ch << endl;

    float f=4.5;
    cout << f << endl;

    double d = 4.5;
    cout << d << endl;

    bool b1= true;
    cout << b1 << endl;

    int intSize=sizeof(c);
     cout << 'int = ' << intSize <<  endl;
    int charSize=sizeof(ch);
    int floatSize=sizeof(f);
    int doubleSize=sizeof(d);
    int booleanSize=sizeof(b1);

    cout << 'int = ' << intSize <<  endl;
    cout << 'char = ' << charSize <<  endl;
    cout << 'float = ' << floatSize <<  endl;
    cout << 'double = ' << doubleSize <<  endl;
    cout << 'boolean = ' << booleanSize <<  endl;
}

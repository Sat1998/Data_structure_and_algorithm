#include <iostream>
using namespace std;

 int main(){
   int n;
   cout << "Enter the Number: " << endl;
   cin >> n;

   int i=1;
   int count=1;

   while(i<=n){
    int j=1;
    int space=0;

    while(space < (n-i)){
        cout << "  ";
        space++;
    }
    while(j<=i){
        cout << count << " ";
        count++;
        j++;
    }
    cout << endl;
    i++;
   }
 }


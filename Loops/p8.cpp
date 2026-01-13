/*

*********
 ******* 
  *****  
   ***   
    *    

*/
#include <iostream>
using namespace std;

void print8(int n){
    for(int i=0; i<n; i++){
        // space
        for (int j=1;j<=i; j++){
            cout << " ";
        }
        // stars
        for(int j=1; j<=((2*n-1)-2*i); j++){
            cout <<"*";
        }
        // space
         for (int j=1;j<=i; j++){
            cout << " ";
        }
        cout << endl;

    }
}
int main(){
    int a;
    cin >> a;
    print8(a);
}
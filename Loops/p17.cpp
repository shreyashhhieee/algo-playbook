/*

   A   
  ABA  
 ABCBA 
ABCDCBA

*/
#include <iostream>
using namespace std;

void print17(int n){
    for(int i=1; i<=n; i++){
        char ch='A';
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int j=1; j<=2*i-1;j++){
            if(j<i) {
                cout<< ch;
                ch++;
            }
            else if(j==i) {
                cout<< ch;
            }
            else{
                ch--;
             cout << ch;
            }
        }
           for(int j=1; j<=n-i; j++){

            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin>>n;
    print17(n);
}
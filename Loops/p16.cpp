/*

A
BB
CCC
DDDD

*/
#include <iostream>
using namespace std;

void print16(int n){
char start ='A';
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i;j++){
            cout << start;
        }
        start++;
        cout << endl;
    }
}
int main(){
    int n;
    cin>>n;
    print16(n);
}
/*

E
DE
CDE
BCDE
ABCDE

*/
#include <iostream>
using namespace std;

void print18(int n){
    for(int i=0; i<=n-1; i++){
        for(char ch = 'E'-i; ch<='E'; ch++){
            cout << ch;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print18(n);
}
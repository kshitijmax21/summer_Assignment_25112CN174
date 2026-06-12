#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout << "enter the first number you want to check ";
    cin >> n;
    for (i=n/2 ; i>=1 ; i--){
        if(n%i==0){
            cout<<i<<endl;
            break;
        }
    }
}
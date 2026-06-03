#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout << "enter the number you want to check ";
    cin >> n;
    int sum =0;
    for (i=2;i<n;i++){
        if(i%n==0){
            sum=sum+1;
        }
        
    }
    if(sum==0){
        cout << "it is a prime number";
    }
    else {
        cout << "it is not a prime number";
    }

    return 0;
}
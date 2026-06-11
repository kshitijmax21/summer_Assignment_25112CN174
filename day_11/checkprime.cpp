#include<iostream>
using namespace std;

int prime(int a){
    if(a <= 1)
        return 0;

    for(int i = 2; i <= a/2; i++){
        if(a % i == 0){
            return 0;  
        }
    }

    return 1; 
}

int main() {
    int a;

    cout << "Enter the number ";
    cin >> a;

    if(prime(a))
        cout << "It is a prime number";
    else
        cout << "It is not a prime number";

    return 0;
}
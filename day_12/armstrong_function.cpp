#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int n){
    int num = n;
    int tc = n;
    int rem;
    int count = 0;
    int sum = 0;

    while(tc > 0){
        tc = tc / 10;
        count++;
    }

    while(n > 0){
        rem = n % 10;
        sum = sum + pow(rem, count);
        n = n / 10;
    }

    if(num == sum){
        return 1;
    }

    return 0;
}

int main(){
    int n;

    cout << "Enter the number you want to check: ";
    cin >> n;

    if(armstrong(n)){
        cout << "It is an Armstrong number";
    }
    else{
        cout << "It is not an Armstrong number";
    }

    return 0;
}
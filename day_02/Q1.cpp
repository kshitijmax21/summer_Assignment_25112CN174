//Q.1 : Program to find sum of digits of a number

#include <iostream>
using namespace std;

int main() {
    int n,i,sum=0,rem=0;
    cout << "Enter number to find sum of digits: ";
    cin >> n;
    while(n!=0){
        rem=n%10;
        sum=rem+sum;
        n=n/10;
        
    }
    cout<<sum;
}
/* Write a program to Calculate sum of first N
natural numbers. */

/* Write a program to Calculate sum of first N
natural numbers. */

#include<iostream>
using namespace std;
int main () 
{
    int n,i;
    int sum=0;
    cout<<"Enter the Number ";
    cin>>n;
    for (i=1;i<=n;i=i+1) {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}

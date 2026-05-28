#include<iostream>
using namespace std;
int main(){
    int n,i;
    int product=1;
    cout<<"enter the value of n ";
    cin>>n;
    for (i=1;i<=n;i++){
        product=product*i;

    }
    cout<<product;
}
#include<iostream>
using namespace std;
int max(int a, int b){
    if (a>b){
    return a ;}
    else {
        return b;
    }
     
}

int main() {
    int a,b;
    
    cout<<"Enter the first number ";
    cin>> a ;
    cout<<"Enter the Second  number ";
    cin>> b ;
    cout<< "The maximum number is " << max (a,b);
}

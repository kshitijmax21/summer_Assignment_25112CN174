#include<iostream>
using namespace std;
int fact(int a){
    int i;
    int fact =1;
    for (i=1;i<=a;i++){
        fact=fact*i;
       
    }
    
      return fact;
}

int main() {
    int a,b;
    
    cout<<"Enter the number ";
    cin>> a ;
    
    cout<< fact (a);
}

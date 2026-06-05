#include<iostream>
using namespace std;
int main(){
    int j,i,n1,c,a,r;
    
    int sum = 0;
    cout<<"Enter the number you want to check ";
    cin>>n1;
    a=n1;

    
    while(n1!=0){
        int prod = 1;//mistake2
        r=n1%10;
        for(i=r;i>1;i--){
        prod=prod*i;}//mistake1
        sum=sum+prod;
        n1=n1/10;

        
    }
   if(sum == a)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}









    
    

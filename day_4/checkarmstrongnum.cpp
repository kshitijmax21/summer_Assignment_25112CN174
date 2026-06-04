#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i,r;
    cout<<"enter the number you want to check ";
    cin>>n;
    int orgn;
    orgn = n ;
    int fc = n;
    int count=0;
    while(fc>0){
        fc=fc/10;
        count++;
    }
    int sum=0;
    
    while(n!=0)
    {    r=n%10;
         n=n/10;
        sum += pow(r, count);


    }
    if(orgn==sum) cout<<"It is a Armstrong number";
    else cout<<"it is a Not a Armstrong number";

}
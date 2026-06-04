#include<iostream>
using namespace std;
int main(){
    int m,i,fact,org;
    int sum=0;
    cout<<"enter the number you want to check ";
    cin>>m;
    org=m;
    for(i=1;i<=m/2;i++){
        if(m%i==0){
            fact=i;
            
            sum=sum+fact;
            

        }
        
    }
    if (org==sum) cout<<"It is a Perfect Number";
    else cout<<"It is Not a Perfect Number";
}
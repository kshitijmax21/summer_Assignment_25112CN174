#include<iostream>
using namespace std;

int strnum(int n){
     int i,fact,sum=0;
    int num=n;
   
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            fact=i;
            sum=sum+fact;
        }
        

    }
    if(sum==num){
        return 1;
    }
    return 0;
}

int main (){
    int n;
    cout<<"enter the number";
    cin>>n;
    if (strnum(n)==1){
        cout<<"It is a Perfect  Number";
    }
    else{
        cout<<"It is not a Perfect number";
    }

}

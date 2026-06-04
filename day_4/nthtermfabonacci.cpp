#include<iostream>
using namespace std;
int main(){
    int z, n,x,y,count=0;
    cout<<"enter the given number ";
    cin>>n;
    x=0;
    y=1;
    for(z=0;count<n;z=x+y){
        cout<<endl<<z;
        x=y;
        y=z;
        count++;

        


    }
}
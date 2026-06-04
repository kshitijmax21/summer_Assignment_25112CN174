#include<iostream>
using namespace std;
int main(){
    int z, n,x,y;
    cout<<"enter the given number ";
    cin>>n;
    x=0;
    y=1;
    for(z=0;z<=n;z=x+y){
        cout<<endl<<z;
        x=y;
        y=z;

        


    }
}
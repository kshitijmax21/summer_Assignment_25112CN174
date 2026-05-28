//Write a program to Print multiplication table of a given number
 #include<iostream>
 using namespace std;
 int main (){
    int i ,n,x;
    cout<<"enter the number ";
    cin>>x;
    n=x*10;
    for (i=x;i<=n;i=i+x){
        cout<<i<<endl;
    }
     

 }
 

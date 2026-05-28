//(Q1) Write a program to Calculate sum of first N natural numbers



/* #include<iostream>
using namespace std;
int main(){
    int n,i,s;
    s=0;
    cout<<"Enter the value of N ";
    cin>>n;
    for(i=1;i<=n;i++){
        s=s+i;
        cout<<s;
    }
return 0;


} */



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
 

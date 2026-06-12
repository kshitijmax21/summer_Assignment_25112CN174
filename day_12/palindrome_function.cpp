#include<iostream>
using namespace std;
int pallin(int n){
    int num =n;
    int rev =0;
    int rem;
    while(n>0){
        rem=n%10;
        rev= rev *10+rem;
        n=n/10;
        


    }
    if (num==rev){
        return 1;
    }
    return 0;

}
int main () {
    int n;
    cout<<"enter the number you want to check ";
    cin>>n;
    if (pallin(n) ==1){
        cout<<"It is a pallidrome numnber";
    }
    else{
        cout<<"It is not a Palidrome Number";
    }



}
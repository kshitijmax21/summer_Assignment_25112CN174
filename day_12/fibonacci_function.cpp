#include<iostream>
using namespace std;

void fiboc(int n){
    int x = 0;
    int y = 1;
    int z;

    for(int i = 1; i <= n; i++){
        cout << x << " ";

        z = x + y;
        x = y;
        y = z;
    }
}

int main(){
    int n;

    cout << "Enter how many Fibonacci numbers you want: ";
    cin >> n;

    fiboc(n);

    return 0;
}
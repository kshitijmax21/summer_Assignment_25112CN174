#include<iostream>
using namespace std;

int main() {
    int n, i, j, fact;
    bool prime;

    cout << "Enter the number you want to find prime factors of: ";
    cin >> n;

    for(i = 2; i <= n; i++) {
        if(n % i == 0) {

            fact = i;
            prime = true;

            for(j = 2; j <= fact/2; j++) {
                if(fact % j == 0) {
                    prime = false;
                    break;
                }
            }

            if(prime) {
                cout << fact << endl;
            }
        }
    }

    return 0;
}
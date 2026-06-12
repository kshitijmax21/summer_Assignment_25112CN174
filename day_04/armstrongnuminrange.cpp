#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int z, r, l1, l2;

    cout << "Enter the lower limit of the range: ";
    cin >> l1;

    cout << "Enter the upper limit of the range: ";
    cin >> l2;

    for(z = l1; z <= l2; z++) {

        int orgn = z;
        int temp = z;

        int count = 0;

        while(temp > 0) {
            temp = temp / 10;
            count++;
        }

        temp = z;
        int sum = 0;

        while(temp != 0) {
            r = temp % 10;
            sum += pow(r, count);
            temp = temp / 10;
        }

        if(orgn == sum)
            cout << orgn << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, sum;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the required sum: ";
    cin >> sum;
    bool found = false;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout << "Pair found: " << arr[i]
                     << " and " << arr[j] << endl;
                found = true;
            }
        }
    }

    if(found == false)
    {
        cout << "No pair found.";
    }

    return 0;
}
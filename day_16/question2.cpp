#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxFreq = 0;
    int maxElement;

    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}
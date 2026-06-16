#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   cout << "Array after removing duplicates";
   for(i = 0; i < n; i++)
    {
        bool duplicate = false;
          for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if(duplicate == false)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
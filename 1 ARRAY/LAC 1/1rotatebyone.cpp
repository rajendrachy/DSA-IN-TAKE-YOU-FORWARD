#include <iostream>
using namespace std;

int leftrotate(int arr[], int n) {
    int temp = arr[0];
    int i;
    for( i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[i-1] = temp;

  return arr[i];
};

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // size

    leftrotate(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


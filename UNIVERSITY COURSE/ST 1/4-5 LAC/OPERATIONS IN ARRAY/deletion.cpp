#include<iostream>
using namespace std;


void deletionAtpos(int arr[], int n, int pos) {
    int temp = arr[pos]; // store a delete value

    for(int i=pos; i<n-1; i++) {
      arr[i] = arr[i+1];
    }
    cout << temp << endl;
};

int main() {
    int arr[4] = {1, 2, 3, 4};
    int pos = 2; // 0 bse indexing

    deletionAtpos(arr, 4, pos);

    for(int i=0; i<3; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


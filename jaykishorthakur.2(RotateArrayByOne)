#include <iostream>
using namespace std;
 
void rotateByOne(int arr[], int n)
{
    int lastElement = arr[n - 1];
    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = 5;
    rotateByOne(arr, n);
    cout << "Rotated array is";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
 
    return 0;
}

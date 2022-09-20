#include <iostream>
using namespace std;

void reverse(int arr[],int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << "";
        cout << endl;
    }
}

int main()
{
    int arr[] = {1,2,3};
    int m = sizeof(arr) / sizeof(arr[0]);
    printarray(arr,m);
    reverse(arr,0,m-1);
    cout << "Reverse Array - ";
    printarray(arr,m);
    return 0;
}


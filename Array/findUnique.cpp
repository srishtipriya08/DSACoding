#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
   int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    cout << "Unique Number is - " << ans << " ";
    return ans;
}

int main()
{
    int arr[10] = {2,3,1,6,3,6,2};
    findUnique(arr,10);
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;

int findDuplicate( vector<int> &arr)
{
    int ans = 0;

    //XOR all array element
    for(int i =0;i<arr.size();i++)
    {
        ans = ans^arr[i];
    }

     //XOR [1,n-1]
    for(int i =1;i<arr.size();i++)
    {
        ans = ans^i;
    }
    cout << "Duplicate Number is - " << ans << " ";
    return ans;

}

int main()
{
    vector<int> arr = {2,4,1,6,3,6,2};
    arr.size(7);
    return 0;
}
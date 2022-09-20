#include<iostream>
using namespace std;

int sum = 0;
void array_sum(int arr[],int n){

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout << "Sum of the array is : " << sum;
}


int main(){

int arr[10] = {2,7,1,-4,11};
array_sum(arr,10);

return 0;
}
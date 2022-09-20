#include<iostream>
using namespace std;

int getPivot(int arr[] , int n)
{
    int s=0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while(s<e)
     {
        if(arr[mid] >= arr[0]){
            s=mid+1;
        }
        else{
            e = mid;
        }
        mid = s+ (e-s)/2;
     }
     return s;
}

int binarySearch(int arr[] , int s , int e,int key){
    int start=s;
    int end = e;
    int mid = s + (e-s)/2;

    while(s<=e){
        if (arr[mid] == key ){
            return key;
        }

        else if(key > arr[mid]){
            s=mid +1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int findPosition(int arr[],int n,int k){
    int pivot = getPivot(arr,n);
    if(k >=arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}
int main(){
    int ar[5] = {7,9,1,2,3};
    int search = findPosition(ar,5,2);
    cout << search+ " is present " ;
    cout << search+ "is not present";

}

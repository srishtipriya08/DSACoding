#include<iostream>
#include <climits>
using namespace std;

int getMin(int num[], int n){

    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    //return min value
    return min;
}

int getMax(int num[], int n){

    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    //return max value
    return max;
}

int main(){

int size;
cin >> size;

int num[100];

cout<< "Enter the Size :"; 
for(int i=0;i<size;i++){ 
    
    cin >>num[i];
}

cout << "Maximum Value is " << getMax(num,size) << endl;
cout << "Minimum Value is " << getMin(num,size) << endl;
  return 0;  
}
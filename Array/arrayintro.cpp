#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "Printing the array " << endl;
    // print the array
    for(int i=0;i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "Printing Done " << endl;
}

int main(){
    
    // declare
    int number[15];

    // accessinng an array
    cout << "Value at 14 index" << number[14] << endl;

    // initialising an array
    int second[3] = {5,7,11};

    // accessing an element
    cout << "Value at 2 index"<< second[2] << endl;

    int third[15] = {2,7};
    int n = 15;

    printArray(third,15);

    //initialising  location with 0
    int fourth[10] = {0};
    int m = 10;

    printArray(fourth,10);

    // initialising all locations with 1 which is not possible
    int fifth[10] = {-1};
    int p = 10;

    printArray(fifth,10);
    cout << endl << "Everything is fine" << endl << endl;

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<< "Size of Fifth is " << fifthSize << endl;
    return 0;
}
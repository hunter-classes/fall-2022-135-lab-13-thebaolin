#include <iostream>
#include "funcs.h"
using namespace std;

int main(){

//TASK A
    cout<<"TASK A - printRange(-2,10): " << printRange(-2,10)<<endl;

//TASK B
    cout<<"TASK B - sumRange(-2,10): " << sumRange(-2,10)<<endl;

//TASK C
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
    int sum1 = sumArray(arr, size);
    cout<<"TASK C - sumArray(arr,size):  " << sum1 <<endl;

//TASK D
    cout<<"TASK D - isAlphanumeric(\"ABCD\") is: "<< boolalpha << isAlphanumeric("ABCD") << endl;
    cout<<"TASK D - isAlphanumeric(\"Abcd1234xyz\") is: "<< boolalpha << isAlphanumeric("Abcd1234xyz") << endl;
    cout<<"TASK D - isAlphanumeric(\"KLMN 8-7-6\") is: "<< boolalpha << isAlphanumeric("KLMN 8-7-6") << endl;

//TASK E
    cout<<"TASK E - nestedParens(\"((()))\") is: "<< boolalpha << nestedParens("((()))") << endl;
    cout<<"TASK E - nestedParens(\"(()\") is: "<< boolalpha << nestedParens("(()") << endl;
    cout<<"TASK E - nestedParens(\"a(b)c\") is: "<< boolalpha << nestedParens("a(b)c") << endl;
}
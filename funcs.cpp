#include <iostream>
#include <cctype>
#include <string>
#include "funcs.h"
using namespace std;

string printRange(int left, int right){
    if(left > right)
        return "";
    if(left == right)
        return to_string(left);
    return to_string(left) + " " + printRange(left + 1, right);
}

int sumRange(int left, int right){
    if(left <= right){
        return left + sumRange(left + 1, right);
    }
    //if range is empty
    return 0;
}

int sumArray(int *arr, int size){
    if(size == 0){
        return 0;
    }
    return *arr + sumArray(arr + 1, size - 1);
}

bool isAlphanumeric(string s){
    if(s.empty()){
        return true;
    }
    if(isalnum(s[0]) && isAlphanumeric(s.substr(1,s.length() - 1))){
        return true;
    }
    return false;
}

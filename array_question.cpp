//question on array 

#include<iostream>
#include <climits> //INT_MAX ko likhane ke liye ye header file include karna padta hai
using namespace std;


int main(){
    // find smallest value in array 
    // lets take a array for example

    int num[] = {1,2,34,54,65,78,-5};
    int size = sizeof(num)/sizeof(num[0]);
    cout << size;
    int smallest = INT_MAX;  // INT_MAX is a constant in C++ that represents the maximum value an int can hold. By initializing smallest to INT_MAX, we ensure that any number in the array will be smaller than this initial value, allowing us to find the smallest number in the array.
    for(int i = 0; i < 7 ; i++){
        if(smallest > num[i]){
            smallest = num[i];
        }
    }
    cout << "Smallest value in array is: " << smallest << endl;


    //find largest value in array
    int largest = INT_MIN; //INT_MIN integer ki sabse chhoti value ko represent karta hai. By initializing largest to INT_MIN, we ensure that any number in the array will be larger than this initial value, allowing us to find the largest number in the array.
    for(int i = 0; i < 7; i++){
        if (largest < num[i]){
            largest = num[i];
        }
    }
    cout << "Largest value in array is: " << largest << endl;
}
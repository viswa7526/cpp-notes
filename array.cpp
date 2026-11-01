// syntax of array
// single array only one type of data store

//data type variable[tum kitne data store karna chahte ho] = {data with separated by comma};
#include<iostream>
using namespace std;

int main(){
    //create array
    int marks[4]  = {90,80,30,50}; // ye 4 likha hai agar usako nahi likha to bhi chalega but ye 4 likha hai to 4 hi data store kar sakte ho aur nahi likhatae ho to jitna data store karoge utna hi data store hoga
                     //is me data hai wo kisi position per store hota hata hai aur uska index 0 se start hota hai .
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // to check size of array
    cout << "Size of array: " << sizeof(marks) << endl; // ye size of array bata dega byte me
    cout << "Size of array: " << sizeof(marks)/sizeof(marks[0]) << endl; // ye size of array bata dega kitne data store hai

    // loop se bhi array ke data ko print kar sakte ho
    int size = sizeof(marks)/sizeof(marks[0]);
    for(int i = 0; i < size; i++){
        cout << marks[i] << endl;  
    }


    // ham kitne bhi data ko array me input le sakte hain through the the loop
    int size2 ;
    cout << "Enter the size of array: ";
    cin >> size2;
    int marks2[size2]; // ye size2 ka size ka array ban gaya hai
    for(int i =0; i < size2; i++){
        cin >> marks2[i];
    }

    for (int i = 0 ; i < size2;i++){
        cout << marks2[i] << endl;
    }


    return 0;


    // pass by reference
    
}
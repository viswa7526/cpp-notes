#include<iostream>
using namespace std;
#include <vector>
// individual vector header file ko hi include karna chahiye.
int main() {


    // vector<int> vector; // ye vector ka object ban gaya hai
    vector<int> vec1;

    // vector  ko initialize karne ke liye 2nd method 

    vector <int> vec = {1,2,3,4,5};

    // 3rd method to initialize vector
    vector <int> vec2(5,1); // ye 5 elements ka vector hai, har element ki value 1 hai

    return 0;
}

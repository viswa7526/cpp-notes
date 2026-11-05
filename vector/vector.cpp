#include<iostream>
#include<vector>
using namespace std;

int main(){
    //syntax of vector
    vector <int> vec;
    cout << vec[0]; // error because vector is empty

    // seconnd way to declare vector
    vector <int> vec1 = {1,2,3,4,5};//-std=c++11 ye add karna important beacause koi bhi error aata hai toh usako ye batata hai ki aap kaun sa c++ ka version use kar rahe hai 
    cout << vec1[1] << endl;
    return 0;

    //third syntax
    vector <int> vec2(3,0); // 3 is size of vector and 0 ki vector me 3no jagaho per 000 put ho jayega 

    //for each loop 

    vector <char> vec3 = {'a','s','d'};
    for(char val : vec3){
        cout << val << endl;

    }
    return 0;
    


}



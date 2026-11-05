#include<iostream>
using namespace std;


int main(){
    //array are in linear data structure
    int marks[5] = {10, 20, 30, 40, 50};
    //agar ye na bhi batao ki kitne elements hamae dalana hai toh sqare bracket me kuch bhi na likho
    int price[] = {100, 200, 300, 400, 500};
    //array se data ko kaise acces kare
    int a = marks[0];
    cout << a<< endl;
    // limit ke andar ke values ko hi likho nahi toh error aayega 


    // kisi b hi array ka size nikalna ho toh in bytes
    int size = sizeof(marks);
    cout << "size of marks array  is :" << size << endl;
    // sizeof opperator se array ke size ko byte me k=nikal sakte hai jaise int ek box me 4 byte store karta hai 
    size = sizeof(marks) / sizeof(marks[0]);
    //isase hame array ki exact value pata chalati hai ki array kitna bada hai 
    
    
    // array ko user se input lena ho toh 

    int sizes;
    cout << "enter the size of the array:";
    cin >> sizes;
     int values[sizes];
     cout << "enter the values of the array:" << endl;
     for(int i = 0; i < sizes; i++){
         cin >> values[i];
     }
     for(int i = 0; i < sizes; i++){
     cout << values[i] << endl;
     }
     
    }

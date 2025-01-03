#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << "Address of a: " << &a; // Prints the memory address of 'a'
    int *ptr = &a;
    cout<<"The Address of a stored in pointer: "<<ptr<<endl;
    //Take example of char

    // const char* c = "Jai Shree Ram";
    // char *ptr1 = &c;//here the adress of char c is stored in ptr1 using pointer.
    // cout<<"The pointer of char is: "<<ptr1<<endl;
}

//In this we will see the pointer with character Arrays.

#include<iostream>
using namespace std;
int main()
{
    char arr[5] = {'1','2','3','4'}; //This is char array.
    char *ptr = arr; //Pointer type of char stored the address of the 0th elememt of the char arr.
    cout<<ptr<<endl;//This will alos print the all value of arr untill it found the null character.
    cout<<arr<<endl; //This will print all the value of arr untill it found null character.
    //But if you want to print the address of the arr theb use (void*). See below for example.
    cout<<(void *)arr<<endl;//It will give the address
    cout<<(void*)ptr<<endl;//It will give the address    

    char name = 'a';
    cout<<name<<endl;
    char *ptr1 = &name; 
    cout<<ptr1<<endl;//This will give some random output.
    //But if you want to print the address.
    cout<<(void*)ptr1;
}
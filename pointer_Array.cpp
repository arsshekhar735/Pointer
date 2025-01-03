//Here we will see the relation of Pointer with Array
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};//We made the array
    int *ptr = &arr[0];//Here we have store the address of arr[0] into pointer called ptr
    cout<<ptr<<endl;//Here we print the address of arr[0] through pointer.
    //If we want to printy the value of array[0] using pointer then we can do also
    //cout<<&arr[0];
    //Now if we print the address of arr[1] then there is only 4byte difference because int take 4 byte of memeory.
    cout<<&arr[1]<<endl;
    cout<<arr<<endl;//It store the address of the first element of array.  

    //How does the value of a get printed
    int a = 5;
    cout << a<<endl;
    /*
        this thing done in this.
        
Your concept is generally on the right track, but there are a few things to clarify in a more human-like way.


Variable Declaration and Initialization:

int a = 5; creates a variable a of type int and initializes it with the value 5.
The value 5 is stored in the memory location allocated to a.
The symbol table (which the compiler maintains) keeps track of the variable's name (a), type (int), and memory address. This is more of a compile-time activity. The symbol table helps the program identify the variable, its type, and its location in memory, but it doesn't directly give the output.
Accessing the Value:

When you use cout << a;, the program needs to access the value of a.
This involves dereferencing the memory location where a is stored to get the actual value, which is 5 in this case.
Output:

After fetching the value stored in a, the cout stream takes the value 5 and outputs it to the console (or terminal).
The process of writing the value to the console is handled by the output stream, not by directly interacting with the symbol table.
Key Points:
The symbol table helps the program map variable names to memory locations during compilation.
At runtime, when cout << a; is executed, the program accesses the memory where a is stored, retrieves the value 5, and prints it.
The value is not directly fetched from the symbol table, but the symbol table helps the compiler understand the relationship between the variable name (a) and its memory address.
In short, the symbol table is there to manage variables during compilation, but the actual value retrieval and printing are handled at runtime by accessing the memory where the variable is stored.



    */
//Now the print the address of the all indexs of the array
    for (int i = 0; i < 5; i++)
    {
        cout<<"The address of the "<<i<<" index is "<<&arr[i]<<endl;
    }

//What is the differece between arr and &arr?
/*
    Arr=> It refers to the address of the first element of the array.
    &Arr => It refers to the address of the entire element of the array.
*/
}
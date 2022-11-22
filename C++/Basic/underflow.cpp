//This fucntion has a bad validation and creates an underflow on memory!
//which occurs when the result of an operation is smaller than the allowed minimum value of the data type. 
//This can lead to logical errors or execution of arbitrary code.


#include <iostream> 
using namespace std;

int main() 
{     
    for (size_t i = 5; i >= 0; --i) 
        cout << i << ' '; 
}
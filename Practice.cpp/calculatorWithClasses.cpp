#include <iostream> 
using namespace std; 
 
class test 
{ 
    public:int x,y,sum; 
            float fsum; 
    void first() 
    { 
        cout<<"Enter first number\n"; 
    } 
    void second() 
    { 
        cout<<"Enter second number\n"; 
    } 
    int add() 
    { 
        sum=x+y; 
        cout<<sum; 
    } 
    int minus() 
    { 
        sum=x-y; 
        cout<<sum; 
    } 
    int mult() 
    { 
        sum=x*y; 
        cout<<sum; 
    } 
    int divide() 
    { 
        sum=x/y; 
        cout<<fsum; 
    } 
}; 
 
 
int main() 
{ 
    test z; 
    int choice; 
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Divition\n"; 
    cin>>choice; 
    switch (choice){ 
        case 1: 
 
        z.first(); 
        cin>>z.x; 
        z.second(); 
        cin>>z.y; 
        z.add(); 
        break; 
 
        case 2: 
        z.first(); 
        cin>>z.x; 
        z.second(); 
        cin>>z.y; 
        z.minus(); 
        break; 
 
        case 3: 
        z.first(); 
        cin>>z.x; 
        z.second(); 
        cin>>z.y; 
        z.mult(); 
        break; 
 
        case 4: 
        z.first(); 
        cin>>z.x; 
        z.second(); 
        cin>>z.y; 
        z.divide(); 
        break; 
    } 
    return 0; 
} 
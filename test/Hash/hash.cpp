#include <iostream>
#include <functional>
#include <string>
using namespace std;
void string_Hashing() 
{
    string s = "CREATE";
    std::hash<std::string> str_hash ;
    string s2 = "CRATEE";
    
    cout << "\nthe hashed value is: " << str_hash(s)<<" "<<str_hash(s)<< endl; 
    
    
} 
int main() 
{ 
    string_Hashing(); 
} 

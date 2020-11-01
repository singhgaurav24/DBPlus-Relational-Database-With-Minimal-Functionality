#include<iostream>
using namespace std;
struct TypeCheck{
    int f1;
    string f2;

};

typedef struct
    {
        int KeyField;
        string DataField;
    } ItemType;

int main()
{
    cout<<"Start\n";
    TypeCheck t1[10];
    t1[0].f1=5;
    t1[0].f2="Hello";

    ItemType t2[10];
    


}
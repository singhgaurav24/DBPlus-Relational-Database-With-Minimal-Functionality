#include<iostream>
#include<vector>
#include<string>
#include "../include/create.hpp"
#include"../util/datatypes.hpp"
using namespace std;
bool validate(string a)
{
    //cout<<"From cpp "<<a;
    DataType dtype;
    if(!dtype.exist_DataTypes("VARCHAR"))
    {
        cout<<"Yes";
    }
    return true;
}
bool validate2(string a)
{
    cout<<"From cpp2 "<<a;
    return true;
}
#include<iostream>
#include<vector>
#include<string>
#include "../include/create.hpp"
#include"../util/datatypes.hpp"
#include"../util/util.hpp"
using namespace std;
bool isCreatevalidate(string query,vector<string> token)
{
    //cout<<"From cpp "<<a;
    if(token.size()<3) return false;
    toUpper(token[1]);
    if(token[1]!= "TABLE") return false;
    string table=token[2];
    //string feild=token[]
    cout<<table<<endl;

    DataType dtype;
    if(!dtype.exist_DataTypes("VARCHAR"))
    {
        cout<<"Yes ";
    }
    return true;
}

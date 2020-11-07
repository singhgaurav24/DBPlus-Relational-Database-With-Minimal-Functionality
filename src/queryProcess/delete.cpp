#include<iostream>
#include<vector>
#include<string>
#include "../include/create.hpp"
#include"../util/datatypes.hpp"
#include"../util/util.hpp"
using namespace std;
bool isCreatevalid(vector<string> token, string &err)
{
    //cout<<"From cpp "<<a;
    if(token.size()<4) 
    {
        err="Possible SYNTAX Error at CREATE ^ table....Or incomplete query";
        return false;
    }
    toUpper(token[1]);
    if(token[1]!= "TABLE")
    {
        err="Possible SYNTAX Error at CREATE ^ table....Or incomplete query";
        return false;
    } 
    string table=token[2];
    if(!token[3][0]=='(')
    {
        //Check balnced paranthesis if()
        err= "Possible SYNTAX Error at (....Or incomplete query";
        return false;
    }
    //Logic for balanced paranthesis
    DataType dtype;
    if(!dtype.exist_DataTypes("VARCHAR"))
    {
        
    }
    return true;
}

#include<set>
#include<string>
#ifndef DATATYPES_HPP
#define DATATYPES_HPP
using namespace std;
class DataType
{
    private:
    set<string> data_types;
   
    

    public:
    DataType()
    {
        data_types.insert("VARCHAR");
        data_types.insert("INT");
        data_types.insert("INTEGER");
        data_types.insert("TEXT");
        data_types.insert("DECIMAL");
        data_types.insert("DOUBLE");
        data_types.insert("LONG");

    }
    bool exist_DataTypes(string t)
    {
        if(data_types.find(t)!=data_types.end()) return true;

        return false;
        
    }
};


#endif

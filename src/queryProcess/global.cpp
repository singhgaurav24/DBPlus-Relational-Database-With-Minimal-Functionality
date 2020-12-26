#include "../include/global.hpp"

#include <unordered_map>
using namespace std;
namespace dbplus{

    std::unordered_map<std::string ,int> table_index;
    void PreprocessData::preprocess()
    {
        table_index["product"]=1;
        table_index["Persons"]=2;
        
    }
}
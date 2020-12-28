#include <string>
#include<vector>
#include<unordered_map>
#include "/usr/local/include/hsql/sql/statements.h"
#ifndef GLOBAL_HPP
#define GLOBAL_HPP

extern std::unordered_map<std::string ,int> table_index;
namespace dbplus
{
    class PreprocessData
    {

        public:
        void preprocess(); 
    };

}


#endif
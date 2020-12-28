#include <string> 
#include<vector>
#include "/usr/local/include/hsql/sql/statements.h"
#include "/usr/local/include/hsql/SQLParser.h"
#ifndef VALIDATE_QUERY_HPP
#define VALIDATE_QUERY_HPP
#include"../util/enums.hpp"
namespace dbplus{

    class ValidateQuery
    {
        private:
    /* data */
        std::string query;
        public:
    //executeQuery();
    //~executeQuery();
        bool isValid(std::string str, std::string& err,hsql::SQLParserResult &result);
        bool existTable(const std::string);

    };
} //dbplus namespace


#endif

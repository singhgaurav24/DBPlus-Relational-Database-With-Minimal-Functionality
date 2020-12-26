#include <string>
#include<vector>
#include "/usr/local/include/hsql/sql/statements.h"
#ifndef EXECUTE_QUERY_HPP
#define EXECUTE_QUERY_HPP

namespace dbplus
{


class ExecuteQuery
{
private:
    /* data */
    std::string query;
public:
    //executeQuery();
    //~executeQuery();
    void executeQuery(std::vector<const hsql::SQLStatement* > &stmts);
    

};

}


#endif
#include <string>
#include<vector>
#include "../include/validateQuery.hpp"
#include "/usr/local/include/hsql/SQLParser.h"
#include "/usr/local/include/hsql/util/sqlhelper.h"
#include "/usr/local/include/hsql/sql/statements.h"
using namespace std;
using namespace hsql;
namespace dbplus {

bool ValidateQuery:: existTable(const std::string)
{
    return false;
}


bool ValidateQuery::isValid(string query, string &err,vector<const SQLStatement* > &stmts)
{
       err="";
       hsql::SQLParserResult result;
       hsql::SQLParser::parse(query, &result);
       if (!result.isValid())
       {
            fprintf(stderr, "Given string is not a valid SQL query.\n");
            fprintf(stderr, "%s (L%d:%d)\n",
            result.errorMsg(),
            result.errorLine(),
            result.errorColumn());
            return false;
       }

       // If table is already exist
       /*
       if(existTable())
       {

       }
       */
     
      for (auto i = 0u; i < result.size(); ++i) {
        stmts.push_back(result.getStatement(i));
      }
      return true;
          
    
}
}

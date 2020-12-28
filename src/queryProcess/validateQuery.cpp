#include <string>
#include<vector>
#include<iostream>
#include <set>
#include<fstream>
#include "../include/validateQuery.hpp"
#include "/usr/local/include/hsql/SQLParser.h"
#include "/usr/local/include/hsql/util/sqlhelper.h"
#include "/usr/local/include/hsql/sql/statements.h"
#include"../util/util.hpp"

using namespace std;
using namespace hsql;
namespace dbplus {

bool ValidateQuery:: existTable(const std::string table_name)
{
     std::set<std::string> table;
     string file_name="table_index.txt";
    
        ifstream file;
        file.open(file_name);
        if(!file.is_open()) cout<<"error in opening file\n";
        string str;
        while(getline(file,str))
	    {
		  table.insert(str);
            
	    }
        file.close();

     if(table.find(table_name)!=table.end()) return true;
    return false;
    
}


bool ValidateQuery::isValid(string query, string &err,hsql::SQLParserResult &result)
{
       err="";
       //hsql::SQLParserResult result;
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

  return true;
       // If table is already exist
       /*
       if(existTable())
       {

       }
       */
     
}
}

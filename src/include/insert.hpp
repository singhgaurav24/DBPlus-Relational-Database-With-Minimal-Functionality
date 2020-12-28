#include<vector>
#include<string>
#include "/usr/local/include/hsql//sql/statements.h"

#ifndef INSERT_HPP
#define INSERT_HPP
//using namespace std;
namespace dbplus{
    class Insert{

        public:
        void insertStatement(const hsql::InsertStatement* stmt);
        
        
    };
    



}






#endif

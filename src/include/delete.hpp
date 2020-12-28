#include<vector>
#include<string>
#include "/usr/local/include/hsql//sql/statements.h"

#ifndef DELETE_H
#define DELETE_H
//using namespace std;
namespace dbplus{
    class Delete{

        public:
        void deleteStatement(const hsql::CreateStatement* create_stmt);
        
        
    };
    



}
#endif

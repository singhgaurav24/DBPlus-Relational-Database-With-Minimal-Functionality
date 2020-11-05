#include <string>

#ifndef EXECUTE_QUERY_HPP
#define EXECUTE_QUERY_HPP
class ExecuteQuery
{
private:
    /* data */
    std::string query;
public:
    //executeQuery();
    //~executeQuery();
    bool isValid(std::string str, char* err);

};


#endif

#ifndef VALIDATE_QUERY_HPP
#define VALIDATE_QUERY_HPP
#include"../util/enums.hpp"
class ValidateQuery
{
private:
    /* data */
    std::string query;
public:
    //executeQuery();
    //~executeQuery();
    bool isValid(std::string str, std::string& err, QType &qType);

};


#endif
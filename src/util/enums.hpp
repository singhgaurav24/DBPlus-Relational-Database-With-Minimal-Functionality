#ifndef ENUMS_HPP
#define ENUMS_HPP
 enum QType{
     READ,
     WRITE
 };

 typedef struct{
     std::string feild;
     std::string data_type;
     int length;
     bool NOT_NULL=false;
     int primary_key=0;

 }Table;

#endif
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string.h>
#include <sstream>
#include <stdio.h>
#include <cctype>

using namespace std;

const int MaxKeys = 11;   // max number of keys in a node
const int MaxKeysPlusOne = MaxKeys + 1;  // Order of the B Tree
const int MinKeys = 5;    // min number of keys in a node
const long NilPtr = -1L;   // the L indicates a long int
int KeyFieldMax = 15; // Max allowed length of key
const int KFMaxPlus1 = 15; //KeyFieldMax + 1;
int DataFieldMax = 46; // Max allowed length of Data in a line
int DFMaxPlus1 = DataFieldMax + 1;
const int NULLCHAR = '\0';  // NULL character used to mark end of a string
const int LineMax = 46;//KeyFieldMax + DFMaxPlus1;
int ListCount = 0;
long offset=0;

char* InputFileName;
char* IndexFileName;
char FileNameArray[255] = "";
char KeyLengthArray[255] = "";
char dummyData[255] = "";

typedef char StringType[LineMax];
typedef char KeyFieldType[KFMaxPlus1];

typedef long DataFieldType;


/**
* Input data file will be parsed as KeyField and DataField
*/
typedef struct
    {
        KeyFieldType KeyField;
        DataFieldType DataField;
    } ItemType;

typedef struct
    {
        int Count;               // Number of keys stored in the current node
        ItemType Key[MaxKeys];   // Warning: indexing starts at 0, not 1
        long Branch[MaxKeysPlusOne];   // Fake pointers to child nodes
    } NodeType;

/**
* Not really needed; In habit now
*/
class TableBaseClass
{
   public:
      virtual bool Empty(void) const = 0;
      virtual bool Insert(const ItemType & Item) = 0;
      virtual bool Retrieve(KeyFieldType SearchKey, ItemType & Item) = 0;
      virtual bool RetrieveList(KeyFieldType SearchKey, ItemType & Item) = 0;
   protected:
      fstream DataFile;   // the file stream for the table data
      long NumItems;      // number of records of type ItemType in the table
      char OpenMode;      // r or w (read or write) mode for the table
};

void Error(char * msg)
{
    cerr << msg << endl;
    exit(1);
}

/**
* Class Declaration
* For better modularity, Can be shifted to another class file
*/

/*   GROUP - 04
Name : Rohit Raj        ID : 2020B3A70906P
Name : Adarsh Agarwal   ID : 2020B5A70924P
Name : Nandalal Odedara ID : 2020B5A70693P
Name : Gaurav Mishra    ID : 2020B3A70917P
Name : Nikhil Agarwal   ID : 2020B2A71611P
Name : Parivesh Bajpai  ID : 2020B3A70752P
*/
#ifndef LEXERDEF_H
#define LEXERDEF_H

#define bufferSize 50
#define SIZE 10000

typedef struct
{
    char *value;
    char *tkId;
    int linenumber;
} TokenInfo;

// structure for the symbol table
typedef struct
{
    char *tokId;
    char *entry;
} HashEntry;

// structure for twin buffer
typedef struct
{
    char buffer1[bufferSize];
    char buffer2[bufferSize];
    int forward;
    int lexBegin;
    int inUseBuffer; // 1 for First and 2 for Second
} TwinBuffer;

#endif
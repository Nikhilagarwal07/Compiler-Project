/*   GROUP - 04
Name : Rohit Raj        ID : 2020B3A70906P
Name : Adarsh Agarwal   ID : 2020B5A70924P
Name : Nandalal Odedara ID : 2020B5A70693P
Name : Gaurav Mishra    ID : 2020B3A70917P
Name : Nikhil Agarwal   ID : 2020B2A71611P
Name : Parivesh Bajpai  ID : 2020B3A70752P
*/
#include "lexerDef.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE 100
#define maxVarSize 100

extern int lexerLineNumber;

FILE *getStream(FILE *filePointer, TwinBuffer *twinBuffer);
int fromZeroToWhere(char currentCharacter);
TokenInfo *returnToken(TokenInfo *tokenInfo, char *value, char *tokenID, int lineNumber);
TokenInfo *getNextToken(TwinBuffer *twinBuffer, FILE *filePointer);
void runLexerOnly(char *fileName);
void removeComments(const char *testcaseFile, const char *cleanFile);
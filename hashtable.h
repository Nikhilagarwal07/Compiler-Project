/*   GROUP - 04
Name : Rohit Raj        ID : 2020B3A70906P
Name : Adarsh Agarwal   ID : 2020B5A70924P
Name : Nandalal Odedara ID : 2020B5A70693P
Name : Gaurav Mishra    ID : 2020B3A70917P
Name : Nikhil Agarwal   ID : 2020B2A71611P
Name : Parivesh Bajpai  ID : 2020B3A70752P
*/
#ifndef HASHTABLE_H
#define HASHTABLE_H

#define SIZE 10000

// Define a structure for a key-value pair
typedef struct KeyValuePair
{
    char *key;
    char *value;
    struct KeyValuePair *next;
} Element;

// Define the hashmap structure
typedef struct HashMap
{
    struct KeyValuePair *buckets[SIZE];
} HashMap;

unsigned int hash(char *key);
void insertIntoHash(HashMap *map, char *key, char *value);
HashMap *initializeHashMap();
char *getValue(HashMap *map, char *key);
void destroyHashMap(HashMap *map);

#endif
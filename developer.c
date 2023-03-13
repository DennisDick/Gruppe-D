#include "developer.h"

#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 20

void developer_init( developer *const d, const char name[], const char alias[])         //initialization of developers 
{
    strncpy(d->name, name, strlen(name) + 1);
    strncpy(d->alias, alias, strlen(alias) + 1);
}

void developer_print( developer const *const d)         //function for printing developers
{
    printf("*************************\n");         
    printf("========================\n");         
    printf("Developer: \n");
    printf("%c\t", d->name);            //developer array of Luca has to be inserted in that line
    printf("%c\t", d->alias);           //developer array of Luca has to be inserted in that line
    printf("========================\n\n");
    printf("========================\n");         
    printf("Developer: \n");
    printf("%c\t", d->name);            //developer array of Luca has to be inserted in that line
    printf("%c\t", d->alias);           //developer array of Luca has to be inserted in that line
    printf("========================\n\n");
    printf("*************************\n");         

}
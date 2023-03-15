#include "developer.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_LENGTH 20
#define NUMBER_DEVELOPER 2

void developer_init( developer *const dev, const char name[], const char alias[])         //initialization of developers 
{
    strncpy(dev->name, name, strlen(name) + 1);
    strncpy(dev->alias, alias, strlen(alias) + 1);
}

void developer_print(const developer *const dev)         //function for printing developers with pointer which points on array of developer in structure developer_group
{
    if (dev == NULL)
    {

    }
    else
    {
        printf("*************************\n"); 
        for(int i = 0; i < NUMBER_DEVELOPER; i++)           //loop to print all developers 
        {
            printf("========================\n");         
            printf("Developer: \n");
            printf("%s\t", dev[i].name);            //printing developer name and alias 
            printf("%s\t", dev[i].alias);           
            printf("========================\n\n");
        }        
        printf("*************************\n");
    }       
}

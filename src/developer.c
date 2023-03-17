#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "developer.h"

#define NAME_LENGTH 20
#define NUMBER_DEVELOPER 2

void developer_init( developer *const p_dev, const char name[], const char alias[])         //initialization of developers 
{
     if (p_dev == NULL)
    {
        printf("invalid pointer value!");
        exit(-1);
    }

    else
    {
        strncpy(p_dev->name, name, strlen(name) + 1);           
        strncpy(p_dev->alias, alias, strlen(alias) + 1);
    }
}

void developer_print(const developer *const p_dev)         //function for printing developers with pointer which points on array of developer in structure developer_group
{
    if (p_dev == NULL)
    {
        printf("invalid pointer value!");
        exit(-1);
    }

    else
    {
        printf("*************************\n"); 
        for(int i = 0; i < NUMBER_DEVELOPER; i++)           //loop to print all developers 
        {
            printf("========================\n");         
            printf("Developer: \n");
            printf("name: \x1b[35;1;4m%s\t\n\033[0m", p_dev[i].name);          //printing developer name and alias 
            printf("alias: %s\t\n", p_dev[i].alias);           
            printf("========================\n");
        }        
        printf("*************************\n");
    }       
}

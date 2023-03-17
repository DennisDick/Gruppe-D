#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "developer.h"

#define NAME_LENGTH 20
#define NUMBER_DEVELOPER 2

void developer_init( developer *const p_dev, const char name[], const char alias[])         //function for initializing developer which receives a pointer pointing on the developer struct
{
     if (p_dev == NULL)         //checking for zero pointer 
    {
        printf("invalid pointer value!");
        exit(-1);
    }

    else            //reading in "name" as well as "alias" into  struct developer
    {
        strncpy(p_dev->name, name, strlen(name) + 1);           
        strncpy(p_dev->alias, alias, strlen(alias) + 1);
    }
}

void developer_print(const developer *const p_dev)         //function for printing developers by receiving a pointer pointing on the "developer_array" in the "developer_group" struct
{
    if (p_dev == NULL)          //checking for zero pointer
    {
        printf("invalid pointer value!");
        exit(-1);
    }

    else            //printing each developer
    {
        printf("*************************\n"); 
        for(int i = 0; i < NUMBER_DEVELOPER; i++)           //loop to print all developers
        {
            printf("========================\n");                
            printf("Developer: \n");
            printf("name: \x1b[35;1;4m%s\t\n\033[0m", p_dev[i].name);           //printing name and alias of the each developer
            printf("alias: %s\t\n", p_dev[i].alias);           
            printf("========================\n");
        }
                
        printf("*************************\n");
    }       
}

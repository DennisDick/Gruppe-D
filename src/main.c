#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "developer.h"
#include "developer_group.h"

#define NAME_LENGTH 20
#define NUMBER_DEVELOPER 2

int main()
{
    int select;         //integer variable to define user selection
    developer_group* ptr_dev_group;
    developer* ptr_dev;

    while(1)
    {
        printf("\033[4;92m========================\n");         //generating user interface with printf
        printf("Choose your action: \n");
        printf("List Developers \t[1]\n");
        printf("Print Group Logo \t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t\t[4]\n");
        printf("========================\033[0m\n");

        printf("Enter your selection: ");
        scanf("%d", &select);

        //following switch case is a template which later has to be filled 

        switch (select)         //previously defined user selection used in switch case
        {  
            case 1:             //list developers
                developer_print(ptr_dev);             
                break;
            case 2:             //print logo group
                group_logo_print(ptr_dev_group);             
                break;
            case 3:             //print developers and group logo
                developer_group_print(ptr_dev_group);             
                break;  
            case 4:             //terminate programm and delete storage
                exit(-1);             
                break;  
            default:
                printf("undefined selection => Try Again!")            //wrong selection => try again
                break;
        }
    }
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>

#include "developer.h"
#include "developer_group.h"

#define NAME_LENGTH 20
#define NUMBER_DEVELOPER 2

int main()
{
    uint8_t select = 0;         //uint8_t to define user selection and optimize storage usage

    developer_group group;          //creating a struct of type "developer_group"

    developer_group* ptr_dev_group;         //creating a pointer of type "developer_group"
    ptr_dev_group = &group;         //pointer points on struct "group"

    developer* ptr_dev;         //creating a pointer of type "developer"
    ptr_dev = ptr_dev_group->developer_array;           //pointer pointing on developer_array of the struct "group"

    developer_group_init(ptr_dev_group);            //initializing the developers as well as the group logo

    while(1)            //using an endless while loop so that user can do as many inputs as wished
    {
        printf("\033[4;92m========================\n");         //generating user interface with printf
        printf("Choose your action: \n");
        printf("List Developers \t[1]\n");
        printf("Print Group Logo \t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t\t[4]\n");
        printf("========================\033[0m\n");

        printf("Enter your selection: ");
        scanf("%2d", &select);          //input of user is written into variable "select"

        switch (select)         //switch case for each possible user input
        {  
            case 1:             //listing developers
                developer_print(ptr_dev);             
                break;
            case 2:             //printing logo group
                group_logo_print(ptr_dev_group);             
                break;
            case 3:             //printing developers and group logo
                developer_group_print(ptr_dev_group);             
                break;  
            case 4:             //terminate programm and delete storage
                exit(-1);      
                break;  
            default:            //wrong user input => try again
                printf("undefined selection => Try Again!\n");           
                break;
        }
    }
}

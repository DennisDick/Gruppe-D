#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "developer.h"
#include "developer_group.h"

#define LOGO_LENGTH 300
#define NUMBER_DEVELOPER 2

void group_logo_init(developer_group *const p_dev_group)
{
    if(p_dev_group == NULL)         //zero pointer check
    {
         printf("invalid pointer value!");
         exit(-1);
    }

    else            //printing out the logo
    {
        strcpy(p_dev_group->group_logo, "  .   *   ..  . *  *\n*  * @()Ooc()*   o  .\n   (Q@*0CG*O()  ___ \n   |\\_________/|/ _ \\ \n   |  |  |  |  | / | |\n   |  |  |  |  | | | |\n   |  |  |  |  | | | |\n   |  |  |  |  | | | |\n   |  |  |  |  | | | |\n   |  |  |  |  | \\_| |\n   |  |  |  |  |\\___/\n   |\\_|__|__|_/|\n    \\_________/\n");
    }
}

void developer_group_init(developer_group *const p_dev_group)
{
    developer* p_developer = p_dev_group->developer_array;          //creating a pointer of the struct developer that points on the developer_array
    if(p_dev_group == NULL)         //zero pointer check
    {
         printf("invalid pointer value!");
         exit(-1);
    }

    else
    {
        developer_init(p_developer, "Luca Diener", "LD");           //initializing the first developer
        developer_init(++p_developer, "Dennis Dick", "DoubleD");            //initializing the second developer by writing it into the second register of the developer array
        group_logo_init(p_dev_group);           //initialzing the group logo
    }  
}



void group_logo_print(const developer_group * const p_dev_group)            //function to print the group logo
{
    if(p_dev_group == NULL)         //zero pointer check
    {
        printf("invalid pointer value!");
        exit(-1);
    }

    else
    {
        printf("%s", p_dev_group->group_logo);          //printing the group logo array
    }
}

void developer_group_print(const developer_group *p_dev_group)          //function to print the developers and the group logo
 {
    if(p_dev_group == NULL)         //zero pointer check
    {
        printf("invalid pointer value!");
        exit(-1);
    }

    else
    {
        printf("^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("Developer Group NOMADS\n");
        developer_print(p_dev_group->developer_array);
        group_logo_print(p_dev_group);
        printf("^^^^^^^^^^^^^^^^^^^^^^^\n");
    }
}



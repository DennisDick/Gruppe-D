#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <developer.h>

#define LOGO_LENGTH 100
#define NUMBER_DEVELOPER 2

typedef struct 
{
    developer developer_array[NUMBER_DEVELOPER];
    char group_logo[LOGO_LENGTH];
}developer_group;


void developer_group_init(developer_group *const p_dev_group, const char group_logo[])
{
    developer* p_developer = p_dev_group->developer_array;
    if(p_dev_group == NULL)
    {
         printf("invalid pointer value!");
         exit(-1);
    }

    else
    {
        developer_init(p_developer, "Luca Diener", "LD");
        developer_init(++p_developer, "Dennis Dick", "DoubleD");
    }
    
}

void group_logo_init(developer_group const *p_dev_group)
{
    if(p_dev_group == NULL)
    {
         printf("invalid pointer value!");
         exit(-1);
    }

    else
    /*{
        strcpy(p_dev_group->group_logo, " 
                            ____\n
                        .---'-    \\ \n
            .-----------/           \\ \\n
            /           (         ^  |   __\n
        &   (             \\        O  /  / .'\n
        '._/(              '-'  (.   (_.' /\n
            \\                    \\     ./\n
            |    |       |    |/ '._.'\n
            )    |.____\|    |\n
        .  /    /       (    | \\n
        \\|, '_:::\\  . ..  '_:::\\ ..\\).\n");
        //p_dev_group->group_logo;
    
}*/
    {
        strcpy(p_dev_group->group_logo, 
   " / \
    / _ \
   | / \\ |
   ||   || _______
   ||   || |\\     \
   ||   || ||\\     \
   ||   || || \\    |
   ||   || ||  \\__/
   ||   || ||   ||
    \\\\_/ \\_/ \\_//
   /   _     _   \
  /               \
  |    O     O    |
  |   \\  ___  /   |                           
 /     \\ \\_/ /     \
/  -----  |  --\\    \
|     \\__/|\\__/ \\   |
\\       |_|_|       /
 \\_____       _____/
       \\     /
       |     |");
    }
}

void developer_group_print(const developer_group *p_dev_group)          // function to print all the developers
{
    if(p_dev_group == NULL)
    {
         printf("invalid pointer value!");
         exit(-1);
    }

    else
    {
        printf("^^^^^^^^^^^^^^^^^^^^^^^");
        printf("Developer Group NOMADS");
        developer_print(p_dev_group->developer_array);
        group_logo_print(p_dev_group->group_logo);
        printf("^^^^^^^^^^^^^^^^^^^^^^^");
    }
}

void group_logo_print(const developer_group * const p_dev_group)
{
    if(p_dev_group == NULL)
    {
         printf("invalid pointer value!");
         exit(-1);
    }

    else
    {
        printf("%s", p_dev_group->group_logo);
    }
}
 
#include <stdio.h>
#include <string.h>
#include <developer.h>
#include <stdlib.h>

#define LOGO_LENGTH 100

typedef struct 
{
    developer dev[2];
    char group_logo[LOGO_LENGTH];
}developer_group;


void developer_group_init(developer_group *const d, const char group_logo[])
{
developoer eintrag 0 auf developer1
developer2 eintrag 1 auf developer2
greoup logo
developer* developer1 =d->dev;



developer_init(developer1 ,"Luca", "LD");
developer_init(++developer1, "Dennis", "DD");
nullpointerüberprüfung
exit(-1);

strcpy(d->group_logo, " 
                       ____\n
                   .---'-    \ \n
      .-----------/           \ \n
     /           (         ^  |   __\n
&   (             \        O  /  / .'\n
'._/(              '-'  (.   (_.' /\n
     \                    \     ./\n
      |    |       |    |/ '._.'\n
       )   @).____\|  @ |\n
   .  /    /       (    | \n
  \|, '_:::\  . ..  '_:::\ ..\).\n")
d->group_logo;
}

void logo_init(developer_group *d)
{
strcpy(d->group_logo, " 
                       ____\n
                   .---'-    \ \n
      .-----------/           \ \n
     /           (         ^  |   __\n
&   (             \        O  /  / .'\n
'._/(              '-'  (.   (_.' /\n
     \                    \     ./\n
      |    |       |    |/ '._.'\n
       )   @).____\|  @ |\n
   .  /    /       (    | \n
  \|, '_:::\  . ..  '_:::\ ..\).\n")
d->group_logo;
}




void printlogo(const developer_group *)// function to print all the developers
{
developer_print()





)

}

void developer_group_print(const developer_group * const d)
{
   printf(" Das Gruppenlogo ist %s", group_logo) 
   
printlogo(d);
printDeveloper(d->dev);
}
 
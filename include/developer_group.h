#ifndef DEVELOPER_GROUP_H_hdfjsihf

#define DEVELOPER_GROUP_H_hdfjsihf

#include "developer.h"

#define NUMBER_DEVELOPER 2
#define LOGO_LENGTH 300

typedef struct          //initializing struct prototype "developer_group"
{
    developer developer_array[NUMBER_DEVELOPER];
    char group_logo[LOGO_LENGTH];
}developer_group;

void developer_group_init(developer_group *const p_dev_group);          //function to initialize the developer group

void group_logo_init(developer_group *const p_dev_group);           //function to initialize the group logo

void developer_group_print(const developer_group *p_dev_group);         //function to print the developer group

void group_logo_print(const developer_group * const p_dev_group);           //function to print the group logo

#endif

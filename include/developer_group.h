#ifndef DEVELOPER_GROUP_H_hdfjsihf

#define DEVELOPER_GROUP_H_hdfjsihf

#include "developer.h"

#define NUMBER_DEVELOPER 2
#define LOGO_LENGTH 100

typedef struct 
{
    developer developer_array[NUMBER_DEVELOPER];
    char group_logo[LOGO_LENGTH];
}developer_group;

void developer_group_init(developer_group *const p_dev_group, const char group_logo[]);

void group_logo_init(developer_group const *p_dev_group);

void developer_group_print(const developer_group *p_dev_group);

void group_logo_print(const developer_group * const p_dev_group);

#endif
#ifndef DEVELOPER_H_hfw308iohea

#define DEVELOPER_H_hfw308iohea

#define NAME_LENGTH 20

typedef struct
{
    char name[NAME_LENGTH]; 
    char alias[NAME_LENGTH];
} developer;

void developer_init(developer *const dev, const char name[], const char alias[]);

void developer_print(const developer *const dev);

#endif
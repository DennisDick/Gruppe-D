#define NAME_LENGTH 20

typedef struct
{
    char name[NAME_LENGTH]; 
    char alias[NAME_LENGTH];
} developer;

void developer_init( developer *const d, const char name[], const char alias[]);

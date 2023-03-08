#include <stdio.h>

int main()
{
    
    int select;         //integer variable to define user selection 

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
            break;
        case 2:             //print logo group
            break;
        case 3:            //print developers and group logo
            break;  
        case 4:             //terminate programm and delete storage
            break;  
        default:            //wrong selection => try again
            break;
    }
}
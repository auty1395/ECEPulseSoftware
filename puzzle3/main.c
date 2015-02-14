#include <stdio.h>
#include "puzzle3.h"


int main(int argc, char** argv)
{
int i;
char st_arg[6];
char st_text[100], buf[200];
bool access = 0;
printf("Welcome to the CIA. Enter a command to get started.\n> ");
char commands[][7] = {"pass", "add", "delete", "exit"};


while (1)
{  
    
    if (NULL == fgets(buf, 200, stdin))
    {
        printf("Invalid Command\n >");
        continue;
    }

    sscanf(buf, "%s %[^\n]s", st_arg, st_text);

    for (i = 0; i < strlen(st_arg); i++)
    {
        st_arg[i] = (char) lower(st_arg[i]);
    }

    if (!strcmp(&commands[0][0], st_arg))
    {
        if (access == 1)
        {
            printf("You alrady have access.\n> ");
        }
        else
        {
            access = PASS(st_text);
        }
    } else if (!strcmp(&commands[1][0], st_arg))
    {
        if (access == 1)
        {
            ADD(st_text);
        }
        else
        {
            printf("Access Denied.\n> ");
        }
    } else if (!strcmp(&commands[2][0], st_arg))
    {
        if(access == 1){
            DELETE(st_text);
       }
       else{
            printf("Access Denied.\n> ");
       }
       
       break; 
    } else if (!strcmp(&commands[3][0], st_arg))
    {
        access = 0;
        printf("You have been logged out.\n> ");
    } else
    {
        printf("Invalid Command. \n> ");
    }
    printf("Enter another command \n>");

  	//Pass should take the input and check for a match 
  	//return 1 and print "Access Granted" on success
  	//return 0 and print "Access Denied" on fail 
    
    }
		return 0;
}

char lower(char c)
{
    return c = (c >= 65 && c <= 90) ? c + 32 : c;
}

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char buff[4];
    int pass;
    while (1)
    {
        pass = 0;
	printf("Enter the password : ");
        gets(buff);
        if (strcmp(argv[1],buff) == 0)
	    pass = 59;
	printf("%d\n",pass);
        if(pass == 59)
        {
            printf ("Access Granted\n");
        }
    }
    return 0;
}

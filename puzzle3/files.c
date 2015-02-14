#include "puzzle3.h"

bool add_pass_to_file(char *str)
{
    static char file[] = "passwords.txt";
		char newline = '\n';
    FILE *fp = fopen(file, "a");
    int len = strlen(str);

    if (fp == NULL)
    {
        printf("Add: There was an error opening the file.\n> ");
        return FALSE;
    }

    fwrite(str, len, 1, fp);
    fwrite(&newline, 1, 1, fp);
    fclose(fp);
    printf("Add: Password has been added.\n> ");
    return TRUE;

}

bool remove_pass_from_file(char *str)
{
    static char file[] = "passwords.txt";
    static char file2[] = "~passwords.txt";
		char newline = '\n';

    FILE *fp = fopen(file, "r"), *fpnew = fopen(file, "w");
    char buf[50], temp;
    int i;

    if (fp == NULL)
    {
        printf("Remove: There was an error opening the file.\n> ");
        return FALSE;
    }

    while (!feof(fp))
    {
        for (i = 0; '\n' != (temp = fgetc(fp)); i++)
        {
            buf[i] = temp;
        }
        buf[i] = '\0';
        if (!strcmp(buf, str))
        {
            continue;
        }
        else
        {
            fwrite(buf, i, 1, fpnew);
            fwrite(&newline, 1, 1, fpnew);
        }
    }
    remove(file);
    rename(file, file2);
    fclose(fp);
    fclose(fpnew);
    printf("Remove: The password has been removed.\n> ");
    return TRUE;    

}


bool pass_exists_in_file(char *str)
{
	static char file[] = "passwords.txt";
	FILE *fp;
	char buffer[110];
	int i;
	char temp;
	
	if((fp = fopen(file, "r")) == NULL) {
		return FALSE;
	}

	while(!feof(fp)){

		for (i = 0; '\n' != (temp = fgetc(fp)); i++){
					
			buffer[i] = temp;
		}
        buffer[i] = '\0';

		if(!strcmp(buffer, str)) {
			fclose(fp);
			printf("Access Granted.\n> ");
			return TRUE;
		}

	}
	fclose(fp);
	return FALSE;
	
	
}


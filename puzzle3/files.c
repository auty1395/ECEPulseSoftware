#include "puzzle3.h"

bool add_pass_to_file(char *str)
{
    static char file[] = "passwords.txt";

    FILE *fp = fopen(file, "a");
    int len = strlen(str);

    if (fp == NULL)
    {
        printf("Add: There was an error opening the file\n");
        return FALSE;
    }

    fwrite(str, len, 1, fp);
    fwrite('\n', 1, 1, fp);
    fclose(fp);
    return TRUE;

}

bool remove_pass_from_file(char *str)
{
    static char file[] = "passwords.txt";
    static char file2[] = "~passwords.txt";

    FILE *fp = fopen(file, "r"), *fpnew = fopen(file, "w");
    char buf[50], temp;
    int i;

    if (fp == NULL)
    {
        printf("Remove: There was an error opening the file\n");
        return FALSE;
    }

    while (!feof(fp))
    {
        for (i = 0; '\n' != (temp = fgetc(fp)); i++)
        {
            buf[i] = temp;
        }
        if (!strcmp(buf, str))
        {
            continue;
        }
        else
        {
            fwrite(temp, i, 1, fpnew);
            fwrite('\n', 1, 1, fpnew);
        }
    }
    remove(file);
    rename(file, file2);
    fclose(fp);
    fclose(fpnew);
    

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

		if(!strcmp(buf, str)) {
			fclose(fp);
			return TRUE;
		}

	}
	fclose(fp);
	return FALSE;
	
	
}


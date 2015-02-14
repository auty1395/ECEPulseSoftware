int PASS(char * st_text)
{
    
    static char file[] = "database.txt";

    FILE *fp = fopen(file, 'r');
    encrypt(st_text);

    while (NULL != fread(



	return 0;
}

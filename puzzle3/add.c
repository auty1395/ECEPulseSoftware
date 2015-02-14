int ADD(char * st_text)
{

    char buf[100];

    if (NULL == fgets (buf, 100, stdin))
    {
        printf("Invalid Password!\n");
        return -1;
    }

    encrypt(buf);
    add_pass_to_file(buf);
    
    return 0;
}


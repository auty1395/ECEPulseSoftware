int ADD(char * st_text)
{
    encrypt(st_text);
    return add_pass_to_file(st_text);
}


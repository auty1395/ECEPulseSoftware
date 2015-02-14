int PASS(char * st_text)
{
    encrypt(st_text);
	return pass_exists_in_file(st_text);
}

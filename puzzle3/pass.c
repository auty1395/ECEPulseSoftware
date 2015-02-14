int PASS(char * st_text)
{
		char hash[HASH_LENGTH];
    encrypt(st_text, hash);
	return pass_exists_in_file(hash);
}

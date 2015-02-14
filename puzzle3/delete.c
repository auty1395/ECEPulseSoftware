int DELETE(char * st_text){
		char hash[HASH_LENGTH];
    encrypt(st_text, hash);
	return remove_pass_from_file(hash);
}

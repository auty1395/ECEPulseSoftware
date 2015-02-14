int DELETE(char * st_text){
    encrypt(st_text);
	return remove_pass_from_file(st_text);
}

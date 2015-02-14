#include <stdio.h>
#include "puzzle3.h"


int main(){

char st_arg[6];
char st_text[100];
char access = 0;
printf("Welcome to the CIA. Enter a command to get started.\n> ");


while(TRUE){

scanf("%6s %100s", st_arg, st_text);

switch(st_arg[0]){

	//Pass should take the input and check for a match 
	//return 1 and print "Access Granted" on success
	//return 0 and print "Access Denied" on fail 
    case 'P':
    	
       if(access == 1){
       		printf("You alrady have access.\n> ");
       }
       else{
       		access = PASS(st_text);
       }
       
       break; 

    case 'A':
       if(access == 1){
       		ADD(st_text);
       }
       else{
       		printf("Access Denied.\n> ");
       }
       
       break; 

    case 'D':
       if(access == 1){
       		DELETE(st_text);
       }
       else{
       		printf("Access Denied.\n> ");
       }
       
       break; 

    case 'E':
       access = 0;
       printf("You have been logged out.\n> ");
       break;  
  
    
    default : 
       printf("Invalid command\n> ");
       
}
}
}

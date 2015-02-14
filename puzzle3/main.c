#include <stdio.h>
#include "main.h"
#include "pass.h"
#include "add.h"
#include "delete.h"

int main(){

char st_arg[6];
char st_text[50];
char access = 0;
printf("Welcome to the CIA. Enter a command to get started.\n> ");

scanf("%6s %50s", st_arg, st_text);

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
       printf("Invalid command");
       

}
}

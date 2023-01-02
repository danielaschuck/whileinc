#include <stdio.h>
#include <string.h>
 

int main() {
char name[25];
printf("\nWhats your name?:");
fgets(name,25,stdin);
name[strlen(name)-1]='\0';
//loop se vc nao responder
//loop if you dont answer

while(strlen(name)==0){
    printf("you did not enter your name\n");
    printf("whats your name?\n");
    fgets(name,25,stdin);
    name[strlen(name)-1]= '\0';
    
    
    }
    
printf("Hello %s",name);

    return 0;
}

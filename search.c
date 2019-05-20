#include "phone.h"
#include <string.h>


void searchByName(){
	char find[50];
	int state = 0;
	printf("Enter a name to search : ");
	scanf("%s",find);
	
	for(int i=0;i<=size;i++)
	{
		if(!strcmp(PhoneBook[i].Name, find)){
			printf("%s\t%s", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
			state+=1;
			break;
		}
	}
	if(state==0) printf("Oops! %s is not in the PhoneBook", find);
}

#include "phone.h"
#include <string.h>

static char passwd[]="qwerty1234";

void registerPhoneData(){
	int i=0;
	char passwd[]="qwerty1234";
	char in_passwd[50];
	printf("Enter the password >>");
	scanf("%s",in_passwd);
	
	while(i<3)
	{
		if(!strcmp(passwd,in_passwd)) break;
		else
		{
			i++;
			if(i==3){
			printf("you are not allowed to accese PhoneBook.\n");
			return;
			}
			printf("Not matched. Enter the password>>>");
			scanf("%s",in_passwd);
		}
	}
	printf("New User Name : ");
	scanf("%s", PhoneBook[size].Name);
	printf("Phone Number : ");
	scanf("%s", PhoneBook[size].PhoneNumber);
	size+=1;
}

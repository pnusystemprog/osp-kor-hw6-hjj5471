#include "phone.h"
#include <string.h>


void deleteByName(){
	char find[50];
	int state =0;
        printf("Enter a name to delete : ");
        scanf("%s",find);

        for(int i=0;i<=size;i++)
        {
                if(!strcmp(PhoneBook[i].Name, find))
		{
                        printf("%s is deldted...",PhoneBook[i].Name);
			int j;
			for(j=i;j<size;j++)
			{
				strcpy(PhoneBook[j].Name, PhoneBook[j+1].Name);
				strcpy(PhoneBook[j].PhoneNumber, PhoneBook[j+1].PhoneNumber);
			}
			state+=1;
			size-=1;
			break;
                }
        }
	if(state==0) printf("Oops! %s is not in the PhoneBook.", find);
}

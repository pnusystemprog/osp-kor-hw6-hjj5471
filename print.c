#include "phone.h"

void printAll(){
	int i;
	printf("<< Display all contacts in the PhoneBook. >>\n");
	for(i=0;i<size;i++){
		printf("%s\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
	}
}

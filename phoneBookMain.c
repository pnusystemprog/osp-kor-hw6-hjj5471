#include "phone.h"

struct Contact PhoneBook[MAX];
int size=0;
static int count_service = 0;	// Total number of service requests

int main()
{
	int service;		// a variable for storing user's request
	do
	{
        printf("\n============ Telephone Book Management ============");
        printf("\n <<<1. Register\t 2. Print All \t 3. Search by ID \t 4. Delete \t 5. Exit >>>\n");
        printf(" Please enter your service number (1-5)> ");
		scanf("%d", &service);

		switch(service)
		{
			case 1: registerPhoneData(); break;
			case 2: printAll(); break;
            		case 3: searchByName(); break;
            		case 4: deleteByName(); break;
		}
	} while (service != 5);
	return 0;
}


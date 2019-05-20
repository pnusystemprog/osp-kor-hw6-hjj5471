CC = gcc -c
OBJS = phoneBookMain.o print.o register.o search.o delete.o

PhoneBook : $(OBJS) phone.h
	gcc -o $@ $(OBJS) phone.h
phoneBookMain.o : phoneBookMain.c
	$(CC) $^
print.o : print.c
	$(CC) $^
register.o : register.c
	$(CC) $^
search.o : search.c
	$(CC) $^
delete.o : delete.c
	$(CC) $^
clean :	
	rm *.o

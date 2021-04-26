
single: single.o functions.o
	gcc single.o functions.o -o single
single.o: single.c
	gcc -c single.c
functions.o: functions.c
	gcc -c functions.c
clean:
	rm *.o single

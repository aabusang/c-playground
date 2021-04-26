
# target: dependencies
# 	action

#recreate executable anytime main.o and age.o changes
# main: main.o age.o
# 	gcc main.o age.o -o main #recompile main.o and age.o into an executable called main
# main.o: main.c			#re-create our main.o object file anytime main.c changes
# 	gcc -c main.c		#compile all the code in main.c but instead of an executable, (-c)says make it an object file called main.o
# age.o: age.c age.h		#similar to how main.o object file is created
# 	gcc -c age.c
# clean:
# 	rm *.o main

main: main.o age.o
	gcc main.o age.o -o main
main.o: main.c		
	gcc -c main.c
age.o: age.c age.h
	gcc -c age.c
clean:
	rm *.o main

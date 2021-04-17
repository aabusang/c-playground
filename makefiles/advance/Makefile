# Usage:
# make: 		compile all binaries
# make clean	remove all binaries

.PHONY = all clean

CC = gcc 	#compiler to use

LINKERFLAG = -lm

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)

all : ${BINS}

%: %.o
	@echo "Checking..."
	${CC} ${LINKERFLAG} $< -o $@
%.o: %.c
	@echo "Creating object..."
	${CC} -c $<
clean:
	@echo "Cleaning up"
	rm -rvf *.o ${BINS}










# example on assigning varialbles
# CC = gcc

# hello: hello.c
# 	${CC} hello.c -o hello

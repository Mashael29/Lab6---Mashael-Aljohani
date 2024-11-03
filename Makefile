CC=gcc
CFLAGS = -Wall
SOURCES = Task1_1.c Task2.c Task3.c Task4.c
EXES = Task1_1 Task2 Task3 Task4

all: $(EXES)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(EXES)

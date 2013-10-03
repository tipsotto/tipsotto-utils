CC=gcc
CFLAGS="-Wall"

debug:clean
	$(CC) $(CFLAGS) -g -o note main.c
stable:clean
	$(CC) $(CFLAGS) -o note main.c
clean:
	rm -vfr *~ note

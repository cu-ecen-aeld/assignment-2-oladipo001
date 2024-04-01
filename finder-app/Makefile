CC = $(CROSS_COMPILE)gcc
default: writer

writer.o: writer.c
	$(CC) -c writer.c -o writer.o

writer: writer.o
	$(CC) writer.o -o writer

clean:
	-rm -f writer.o
	-rm -f writer
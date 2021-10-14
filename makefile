
IDIR=include
CC=gcc
CFLAGS=-I$(IDIR)
OBJS=main.o
SDIR=src
ODIR=obj


main : $(ODIR)/$(OBJS)
	$(CC) -o main $(ODIR)/$(OBJS) $(CFLAGS)

$(ODIR)/main.o : $(SDIR)/main.c include/entity.h
	$(CC) -c -o $@ $(SDIR)/main.c $(CFLAGS)

.PHONY: clean
clean :
	rm main $(ODIR)/$(OBJS)


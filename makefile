
IDIR=include
CC=gcc
CFLAGS=-I$(IDIR)
OBJS=obj/main.o obj/entity.o obj/funcs.o
SDIR=src
ODIR=obj


main : $(OBJS)
	$(CC) -o main $(OBJS) $(CFLAGS)

$(ODIR)/main.o : $(SDIR)/main.c $(IDIR)/entity.h
	$(CC) -c -o $@ $(SDIR)/main.c $(CFLAGS)

$(ODIR)/entity.o : $(SDIR)/entity.c $(IDIR)/entity.h
	$(CC) -c -o $@ $(SDIR)/entity.c $(CFLAGS)

$(ODIR)/funcs.o : $(SDIR)/funcs.c $(IDIR)/funcs.h $(IDIR)/entity.h
	$(CC) -c -o $@ $(SDIR)/funcs.c $(CFLAGS)

.PHONY: clean
clean :
	rm main $(ODIR)/$(OBJS)


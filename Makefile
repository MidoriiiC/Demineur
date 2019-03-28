# Auteurs : Mathilde Charrière

# CHAPITRE 1 : BUT FINAL

but : Demineur

# CHAPITRE 2 : VARIABLES

OFILES = main.o \
	back_end.o \

CC = gcc

CFLAGS = -Wall -ansi -pedantic -g -lgraph

# CHAPITRE 3 : DEPENDANCES (REGLES IMPLICITES)

main.o : back_end.h

# CHAPITRE 4 : DEPANDANCES AVEC COMMANDES

Demineur : $(OFILES)
	$(CC) $(CFLAGS) -o Demineur $(OFILES)

# CHAPITRE 5 : NETTOYAGE DES FICHIERS GENERES

clean :
	-rm -f $(OFILES) Demineur

# CHAPITRE 6 : BUTS FACTICES

.PHONY : but clean

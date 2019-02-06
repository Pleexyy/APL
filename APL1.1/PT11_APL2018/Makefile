CC = gcc
EXEC = memory
SRC = $(wildcard *.c) # On prend tous les fichiers qui ont comme extension .c -> stock dans la variable SRC
OBJ = $(SRC:.c=.o) # Pour chaque fichier .c contenu dans SRC nous ajoutons à OBJ un fichier de même nom mais portant l'extension .o

all : $(EXEC) # Pour créer all, il faut memory

%.o : %.c # Toutes les cibles en .o sont créées à partir de toutes les dépendances en .c
	$(CC) -o $@ -c $< # $@ = Le nom de la cible

$(EXEC) : $(OBJ) # Les fichiers .o ont été créés, on peut donc executer la commande finale
	$(CC) -o $@ $^ # $@ = Le nom de la cible (EXEC)

clean : # Supprime l'ensemble des fichiers objets (.o) de notre projet
	rm -rf *.o

mrproper : clean # Execute la commande clean
	rm -rf $(EXEC) # Puis elle
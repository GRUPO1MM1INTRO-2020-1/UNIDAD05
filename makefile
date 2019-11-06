EXE:=Racional.exe
OBJETOS:=Unidad_5.o mcd.o
CC=gcc
all:$(EXE)
$(EXE):$(OBJETOS)
	$(CC) $^ -o $@
clean:
	rm -v $(OBJETOS) $(EXE)

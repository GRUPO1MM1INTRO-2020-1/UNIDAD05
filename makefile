EXE:=Racional.exe
OBJETOS:=Unidad_5.o mcd.o
CC=gcc
all:$(EXE)
$(EXE):$(OBJETOS)
	$(CC) $^ -o $@
OBJETOS:Unidad_5.o mcd.o
	@echo "Objetos compilados."
clean:
	rm -v $(OBJETOS) $(EXE)

EXE:=Racional.exe
EXE1:=Test_fopen.exe
OBJETOS:=Unidad_5.o mcd.o
CC=gcc
all:$(EXE) $(EXE1)
$(EXE):$(OBJETOS)
	$(CC) $^ -o $@
OBJETOS:Unidad_5.o mcd.o
	@echo "Objetos compilados."
$(EXE1):test_fopen.c
	$(CC) $^ -o $@
clean:
	rm -v $(OBJETOS) $(EXE) $(EXE1)

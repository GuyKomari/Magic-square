magic: magic.o isMagicSquare.o matrixSizeInput.o matrixInput.o printMatrix.o checkNumber.o
	gcc -g -Wall -ansi -pedantic magic.o isMagicSquare.o matrixSizeInput.o matrixInput.o printMatrix.o checkNumber.o -o magic

main.o: magic.c data.h
	gcc -c -Wall -ansi -pedantic magic.c -o magic.o


isMagicSquare.o: isMagicSquare.c data.h
	gcc -c -Wall -ansi -pedantic isMagicSquare.c -o isMagicSquare.o


matrixSizeInput.o: matrixSizeInput.c data.h
	gcc -c -Wall -ansi -pedantic matrixSizeInput.c -o matrixSizeInput.o


matrixInput.o: matrixInput.c data.h
	gcc -c -Wall -ansi -pedantic matrixInput.c -o matrixInput.o


printMatrix.o: printMatrix.c data.h
	gcc -c -Wall -ansi -pedantic printMatrix.c -o printMatrix.o
	

checkNumber.o: checkNumber.c data.h
	gcc -c -Wall -ansi -pedantic checkNumber.c -o checkNumber.o


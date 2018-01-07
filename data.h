#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 25
#define MIN_SIZE 3
#define TRUE 1
#define FALSE 0

int sizeInput();
void MatrixInput(int **matrix, int n);
void printMatrix(int **matrix, int n);
void isMagic(int **matrix, int n);
int checkNumber(int *flags,int N, int num);

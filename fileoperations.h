#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Predetermined_buffer 15

void SkipLine(FILE* file) { //Yes, these functions are meant for 'r' and other similar file handling modes

    char b = 'b';

    while ((b != EOF) || (b != '\n')) {

        b = fgetc(file);

    }

}

void GetWord(FILE* file) {

    

}
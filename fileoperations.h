#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void SkipLine(FILE* file) {

    char b = 'b';

    while (b != EOF || b != '\n') {

        b = fgetc(file);

    }

}
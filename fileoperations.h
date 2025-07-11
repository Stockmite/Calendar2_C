#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define Predetermined_buffer 50

void SkipLine(FILE* file) { //Yes, these functions are meant for 'r' and other similar file handling modes

    char * buffer;
    size_t buffer_lenght = Predetermined_buffer;

    while (buffer_lenght == (size_t)Predetermined_buffer) {

        fgets(buffer, Predetermined_buffer, file);
        buffer_lenght = strlen(buffer);

    }

}

void GetWord(FILE* file) {

    char p_h = 'a';

    while((p_h != EOF) || (p_h != '\n') || (p_h != ' ')) {

        p_h = fgetc(file);

    }

}
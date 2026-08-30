#include <string.h>
#include "encrypt.h"

void encrypt(char *input, char *output) {
    int l = strlen(input);
    for (int i =0; i< l;i++) {
        output[i] = input[i] +2;
    }
    output[l] = '\0';
}

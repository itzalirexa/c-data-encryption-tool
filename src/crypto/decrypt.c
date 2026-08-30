#include <string.h>
#include "decrypt.h"

void decrypt(char *input, char *output) {
    int l = strlen(input);
    for (int i=0; i<l; i++) {
        output[i] =input[i] -2;
    }
    output[l] = '\0';
}
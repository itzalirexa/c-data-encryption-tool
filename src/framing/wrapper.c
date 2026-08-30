#include <string.h>

void wrap(char *input, char *output) {
    strcpy(output, "dwin");
    strcat(output, input);
    strcat(output, "dwin");
}

void unwrap(char *input, char *output) {
    int l = strlen(input);    
    strncpy(output, input +4,l-8);
    output[l-8] = '\0';
}

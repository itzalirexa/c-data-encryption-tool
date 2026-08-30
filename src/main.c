#include <stdio.h>
#include <string.h>
#include "crypto/encrypt.h"
#include "crypto/decrypt.h"
#include "framing/wrapper.h"

int main() {
    int q, cmd;
    char input[1024], encrypted[1024], decrypted[1024], wrapped[1024], unwrapped[1024];

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d %s", &cmd, input);

        if (cmd == 1) {
            encrypt(input, encrypted);
            wrap(encrypted, wrapped);
            printf("%s\n", wrapped);
        } else if (cmd == 2) {
            unwrap(input, unwrapped);
            decrypt(unwrapped, decrypted);
            printf("%s\n", decrypted);
        }
    }

    return 0;
}

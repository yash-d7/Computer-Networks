#include <stdio.h>
#include <string.h>

int main() {
    char bits[100], destuffed[100];
    int i, j = 0, count = 0;

    printf("Enter stuffed bit string: ");
    scanf("%s", bits);

    for (i = 0; bits[i] != '\0'; i++) {
        destuffed[j++] = bits[i];

        if (bits[i] == '1') {
            count++;

            if (count == 5) {
                i++;
                count = 0;
            }
        } else {
            count = 0;
        }
    }

    destuffed[j] = '\0';

    printf("Destuffed bit string: %s\n", destuffed);

    return 0;
}

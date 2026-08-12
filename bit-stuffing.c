#include <stdio.h>
#include <string.h>

int main() {
    char data[200], stuffed[400];
    int count = 0, j = 0;

    printf("Enter binary data: ");
    scanf("%s", data);

    for (int i = 0; i < strlen(data); i++) {
        stuffed[j++] = data[i];

        if (data[i] == '1') {
            count++;
            if (count == 5) {
                stuffed[j++] = '0';
                count = 0;
            }
        } else {
            count = 0;
        }
    }

    stuffed[j] = '\0';

    printf("Stuffed data: %s\n", stuffed);

    return 0;
}

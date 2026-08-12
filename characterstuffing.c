#include <stdio.h>
#include <string.h>

int main() {
    char data[100], result[300] = "FLAG";
    char flag[] = "FLAG", esc[] = "ESC";

    printf("Enter data: ");
    scanf("%s", data);

    for (int i = 0; i < strlen(data); i++) {
        if (strncmp(&data[i], flag, 4) == 0) {
            strcat(result, esc);
            strcat(result, flag);
            i += 3;
        } else if (strncmp(&data[i], esc, 3) == 0) {
            strcat(result, esc);
            strcat(result, esc);
            i += 2;
        } else {
            int n = strlen(result);
            result[n] = data[i];
            result[n + 1] = '\0';
        }
    }

    strcat(result, flag);

    printf("Framed data: %s\n", result);

    return 0;
}


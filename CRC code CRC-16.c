#include <stdio.h>
#include <string.h>

int main() {
    char data[100], divisor[] = "11000000000000101";
    char temp[120];
    int i, j, n, m = 17;

    printf("Enter data: ");
    scanf("%s", data);

    n = strlen(data);
    strcpy(temp, data);

    for (i = 0; i < 16; i++)
        strcat(temp, "0");

    for (i = 0; i <= strlen(temp) - m; i++) {
        if (temp[i] == '1') {
            for (j = 0; j < m; j++)
                temp[i + j] = (temp[i + j] == divisor[j]) ? '0' : '1';
        }
    }

    printf("CRC-16: ");
    for (i = n; i < n + 16; i++)
        printf("%c", temp[i]);

    printf("\n");

    return 0;
}

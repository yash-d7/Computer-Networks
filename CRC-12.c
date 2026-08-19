#include <stdio.h>
#include <string.h>

int main() {
    char data[100], divisor[] = "1100000001111";
    char temp[120];
    int i, j, n, m = 13;

    printf("Enter data: ");
    scanf("%s", data);

    n = strlen(data);
    strcpy(temp, data);

    for (i = 0; i < 12; i++)
        strcat(temp, "0");

    for (i = 0; i <= strlen(temp) - m; i++) {
        if (temp[i] == '1') {
            for (j = 0; j < m; j++)
                temp[i + j] = (temp[i + j] == divisor[j]) ? '0' : '1';
        }
    }

    printf("CRC-12: ");
    for (i = n; i < n + 12; i++)
        printf("%c", temp[i]);

    printf("\n");

    return 0;
}

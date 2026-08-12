#include <stdio.h>
#include <string.h>

int main() {
    char data[100];
    int count;

    printf("Enter data: ");
    scanf("%s", data);

    count = strlen(data) + 1;

    printf("Framed data: %d%s\n", count, data);

    return 0;
}


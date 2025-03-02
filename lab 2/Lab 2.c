#include <stdio.h>
int main() {
    double mas[3][3];
    int i, j;

    printf("Vvedite elementi massiva 3x3:\n");

    i = 0;
    while (i < 3) {
        j = 0;
        while (j < 3) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%lf", &mas[i][j]);
            j++;
        }
        i++;
    }

    printf("Vi viveli masssiv:\n");

    i = 0;
    while (i < 3) {
        j = 0;
        while (j < 3) {
            printf("%.1lf ", mas[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    double sum1 = mas[0][0] + mas[1][1] + mas[2][2];
    double sum2 = mas[0][2] + mas[1][1] + mas[2][0];

    printf("Summa glavnoi diagonali: %.1lf\n", sum1);
    printf("Summa pobochnoi diagonali: %.1lf\n", sum2);

    int mas2[2][2];
   
    printf("Vvedite elemnti massiva 2x2:\n");

    i = 0;
    while (i < 2) {
        j = 0;
        while (j < 2) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mas2[i][j]);
            j++;
        }
        i++;
    }

    printf("Vi viveli massiv:\n");

    i = 0;
    while (i < 2) {
        j = 0;
        while (j < 2) {
            printf("%d ", mas2[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    int res[2][2];

    res[0][0] = mas2[0][0] * mas2[0][0] + mas2[0][1] * mas2[1][0];
    res[0][1] = mas2[0][0] * mas2[0][1] + mas2[0][1] * mas2[1][1];
    res[1][0] = mas2[1][0] * mas2[0][0] + mas2[1][1] * mas2[1][0];
    res[1][1] = mas2[1][0] * mas2[0][1] + mas2[1][1] * mas2[1][1];

    printf("Kvadrat martitsi:\n");

    i = 0;
    while (i < 2) {
        j = 0;
        while (j < 2) {
            printf("%d ", res[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}


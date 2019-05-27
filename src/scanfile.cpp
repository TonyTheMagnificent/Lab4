#include "geometry.h"

void ScanFile(FILE* input, circle* circles, triangle* triangles, char* c,
    char* t)
{
    int i = 0, j = 0;
    char str[9];

    while (!feof(input)) {
        fscanf(input, "%s", str);

        if (strcmp(str, c) == 0) {
            strcpy(circles[i].fig, str);
            fscanf(input, "%f %f %f", &circles[i].x, &circles[i].y, &circles[i].r);
            circles[i].num = i + 1;
            i++;
        }

        if (strcmp(str, t) == 0) {
            strcpy(triangles[j].fig, str);
            fscanf(input, "%f %f %f %f %f %f", &triangles[j].x1, &triangles[j].y1,
                &triangles[j].x2, &triangles[j].y2, &triangles[j].x3,
                &triangles[j].y3);
            triangles[j].num = j + 1;
            j++;
        }
    }

    fclose(input);
    // printf("%d. Name: %s X: %.2f Y: %.2f Radius:  %.2f\n", circles[3].num,
    // circles[3].fig, circles[3].x, circles[3].y, circles[3].r);

    // printf("%d. Name: %s X1: %.2f Y1: %.2f X2: %.2f Y2: %.2f X3: %.2f Y3:
    // %.2f\n", triangles[1].num, triangles[1].fig, triangles[1].x1,
    // triangles[1].y1, triangles[1].x2, triangles[1].y2, triangles[i].x3,
    // triangles[i].y3);
}
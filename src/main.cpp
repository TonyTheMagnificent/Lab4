#include "geometry.h"

int main()
{
    FILE* input;
    circle* circles;
    triangle* triangles;
    int Circ = 0, Trig = 0;
    char str[9], c[9], t[9];

    input = fopen("file.txt", "r");

    strcpy(c, "circle");
    strcpy(t, "triangle");

    while (!feof(input)) {
        fscanf(input, "%s", str);
        // printf("\n %s\n\n", str);
        if (strcmp(str, c) == 0)
            Circ++;
        if (strcmp(str, t) == 0)
            Trig++;
        /*else
        {
                printf("\n Wrong input! \n\n");
                return 0;
        }*/
        // fgets(str, 20 , input);
    }

    printf("\n %d figures found: \n\n %d circles\n %d triangles\n", Trig + Circ,
        Circ, Trig);

    fseek(input, 0, SEEK_SET);

    circles = (circle*)malloc(Circ * sizeof(circle));
    if (circles == NULL) {
        printf("Error. No memory able");
        return 1;
    }

    triangles = (triangle*)malloc(Trig * sizeof(triangle));
    if (triangles == NULL) {
        printf("Error. No memory able");
        return 1;
    }

    ScanFile(input, circles, triangles, c, t);

    CircleIntersects(circles, triangles, Circ, Trig);

    TriangleIntersect(circles, triangles, Circ, Trig);

    printf("\n\n");

    return 0;
}
#include "geometry.h"

void CircleIntersects(circle* circles, triangle* triangles, int Circ,
    int Trig)
{
    int i, j;
    float dist;
    bool flag;

    for (i = 0; i < Circ; i++) {
        printf("\n\n %d. %s (%.2f %.2f, %.2f)", circles[i].num = i + 1,
            circles[i].fig, circles[i].x, circles[i].y, circles[i].r);
        printf("\n    perimetr = %.2f", 2 * 3.14 * circles[i].r);
        printf("\n    area = %.2f\n", 3.14 * circles[i].r * circles[i].r);
        printf("    intersects:");

        flag = true;
        for (j = 0; j < Circ; j++) {
            if (j != i) {
                dist = Dist(circles[i].x, circles[i].y, circles[j].x, circles[j].y);

                if (dist <= (circles[i].r + circles[j].r)) {
                    printf("\n      %d. %s", circles[j].num, circles[j].fig);
                    flag = false;
                }
            }
        }

        for (j = 0; j < Trig; j++) {
            // P = Perimetr(triangles[j].x1, triangles[j].y1, triangles[j].x2,
            // triangles[j].y2, triangles[j].x3, triangles[j].y3);
            if (Dist(circles[i].x, circles[i].y, triangles[j].x1, triangles[j].y1) <= circles[i].r) {
                printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                flag = false;
            } else if (Dist(circles[i].x, circles[i].y, triangles[j].x2,
                           triangles[j].y2)
                <= circles[i].r) {
                printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                flag = false;
            } else if (Dist(circles[i].x, circles[i].y, triangles[j].x3,
                           triangles[j].y3)
                <= circles[i].r) {
                printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                flag = false;
            }
        }

        if (flag)
            printf("\n        no intersects");
    }
}
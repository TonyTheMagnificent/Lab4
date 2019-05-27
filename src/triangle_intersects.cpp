#include "geometry.h"

void TriangleIntersect(circle* circles, triangle* triangles, int Circ,
    int Trig)
{
    int i, j;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double Ua, Ub, num_a, num_b, den;
    bool flag;

    for (i = 0; i < Trig; i++) {
        float P = Perimetr(triangles[i].x1, triangles[i].y1, triangles[i].x2,
            triangles[i].y2, triangles[i].x3, triangles[i].y3);
        float S = Area(triangles[i].x1, triangles[i].y1, triangles[i].x2,
            triangles[i].y2, triangles[i].x3, triangles[i].y3, P);
        printf("\n\n %d. %s (%.2f %.2f, %.2f %.2f, %.2f %.2f)",
            triangles[i].num = i + 1, triangles[i].fig, triangles[i].x1,
            triangles[i].y1, triangles[i].x2, triangles[i].y2, triangles[i].x3,
            triangles[i].y3);
        printf("\n    perimetr = %.2f", P);
        printf("\n    area = %.2f\n", S);
        printf("    intersects:");

        flag = true;
        for (j = 0; j < Trig; j++) {
            if (j != i) {
                while (1) {
                    //////// 1 front oj i triangle//////
                    x1 = triangles[i].x1;
                    y1 = triangles[i].y1;

                    x2 = triangles[i].x2;
                    y2 = triangles[i].y2;

                    x3 = triangles[j].x1;
                    y3 = triangles[j].y1;

                    x4 = triangles[j].x2;
                    y4 = triangles[j].y2;

                    den = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
                    if (den == 0) {
                        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    } else {
                        num_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
                        num_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
                        Ua = num_a / den;
                        Ub = num_b / den;
                        if ((Ua >= 0) && (Ua <= 1) && (Ub >= 0) && (Ub <= 1)) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    }

                    x3 = triangles[j].x2;
                    y3 = triangles[j].y2;

                    x4 = triangles[j].x3;
                    y4 = triangles[j].y3;

                    den = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
                    if (den == 0) {
                        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    } else {
                        num_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
                        num_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
                        Ua = num_a / den;
                        Ub = num_b / den;
                        if ((Ua >= 0) && (Ua <= 1) && (Ub >= 0) && (Ub <= 1)) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    }

                    x3 = triangles[j].x3;
                    y3 = triangles[j].y3;

                    x4 = triangles[j].x1;
                    y4 = triangles[j].y1;

                    den = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
                    if (den == 0) {
                        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    } else {
                        num_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
                        num_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
                        Ua = num_a / den;
                        Ub = num_b / den;
                        if ((Ua >= 0) && (Ua <= 1) && (Ub >= 0) && (Ub <= 1)) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    }

                    ////////////////////////////////////

                    //////// 2 front oj i triangle//////
                    x1 = triangles[i].x3;
                    y1 = triangles[i].y3;

                    x2 = triangles[i].x2;
                    y2 = triangles[i].y2;

                    x3 = triangles[j].x1;
                    y3 = triangles[j].y1;

                    x4 = triangles[j].x2;
                    y4 = triangles[j].y2;

                    den = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
                    if (den == 0) {
                        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    } else {
                        num_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
                        num_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
                        Ua = num_a / den;
                        Ub = num_b / den;
                        if ((Ua >= 0) && (Ua <= 1) && (Ub >= 0) && (Ub <= 1)) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    }

                    x3 = triangles[j].x2;
                    y3 = triangles[j].y2;

                    x4 = triangles[j].x3;
                    y4 = triangles[j].y3;

                    den = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
                    if (den == 0) {
                        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    } else {
                        num_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
                        num_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
                        Ua = num_a / den;
                        Ub = num_b / den;
                        if ((Ua >= 0) && (Ua <= 1) && (Ub >= 0) && (Ub <= 1)) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    }

                    x3 = triangles[j].x3;
                    y3 = triangles[j].y3;

                    x4 = triangles[j].x1;
                    y4 = triangles[j].y1;

                    den = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
                    if (den == 0) {
                        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    } else {
                        num_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
                        num_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
                        Ua = num_a / den;
                        Ub = num_b / den;
                        if ((Ua >= 0) && (Ua <= 1) && (Ub >= 0) && (Ub <= 1)) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    }
                    ////////////////////////////////////

                    //////// 3 front oj i triangle//////
                    x1 = triangles[i].x3;
                    y1 = triangles[i].y3;

                    x2 = triangles[i].x1;
                    y2 = triangles[i].y1;

                    x3 = triangles[j].x1;
                    y3 = triangles[j].y1;

                    x4 = triangles[j].x2;
                    y4 = triangles[j].y2;

                    den = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
                    if (den == 0) {
                        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    } else {
                        num_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
                        num_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
                        Ua = num_a / den;
                        Ub = num_b / den;
                        if ((Ua >= 0) && (Ua <= 1) && (Ub >= 0) && (Ub <= 1)) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    }

                    x3 = triangles[j].x2;
                    y3 = triangles[j].y2;

                    x4 = triangles[j].x3;
                    y4 = triangles[j].y3;

                    den = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
                    if (den == 0) {
                        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    } else {
                        num_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
                        num_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
                        Ua = num_a / den;
                        Ub = num_b / den;
                        if ((Ua >= 0) && (Ua <= 1) && (Ub >= 0) && (Ub <= 1)) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    }

                    x3 = triangles[j].x3;
                    y3 = triangles[j].y3;

                    x4 = triangles[j].x1;
                    y4 = triangles[j].y1;

                    den = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
                    if (den == 0) {
                        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    } else {
                        num_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
                        num_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
                        Ua = num_a / den;
                        Ub = num_b / den;
                        if ((Ua >= 0) && (Ua <= 1) && (Ub >= 0) && (Ub <= 1)) {
                            printf("\n      %d. %s", triangles[j].num, triangles[j].fig);
                            flag = false;
                            break;
                        }
                    }

                    break;
                }
            }
        }

        for (j = 0; j < Circ; j++) {
            if (Dist(circles[j].x, circles[j].y, triangles[i].x1, triangles[i].y1) <= circles[j].r) {
                printf("\n      %d. %s", circles[j].num, circles[j].fig);
                flag = false;
            } else if (Dist(circles[j].x, circles[j].y, triangles[i].x2,
                           triangles[i].y2)
                <= circles[j].r) {
                printf("\n      %d. %s", circles[j].num, circles[j].fig);
                flag = false;
            } else if (Dist(circles[j].x, circles[j].y, triangles[i].x3,
                           triangles[i].y3)
                <= circles[j].r) {
                printf("\n      %d. %s", circles[j].num, circles[j].fig);
                flag = false;
            }
        }

        if (flag)
            printf("\n        no intersects");
    }
}

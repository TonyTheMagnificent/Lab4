#include "geometry.h"

float Area(float x1, float y1, float x2, float y2, float x3, float y3,
    float P)
{
    float a, b, c, p, S;

    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    p = P / 2;

    S = sqrt(p * (p - a) * (p - b) * (p - c));

    return S;
}

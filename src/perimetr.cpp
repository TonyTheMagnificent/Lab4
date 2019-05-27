#include "geometry.h"

float Perimetr(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) + sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1)) + sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2)));
}
#define CTEST_MAIN
#define CTEST_COLOR_OK
#include "geometry.h"
#include <ctest.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(circle_perimetr_test, result_test)
{
    // For given
    const float x = -3.11f;
    const float y = 1.02f;
    const float r = 1.0f;

    // If this
    const float Result = Perimetr_Circ(x, y, r);

    // Equal to
    const float Expected = 3.141592f*3.0f;

    ASSERT_EQUAL(Expected, Result);
}

CTEST(circle_area_test, result_test)
{
    // For given
    const float x = 0.0f;
    const float y = 1.0f;
    const float r = 2.0f;

    // If this
    const float Result = Area_Circ(x, y, r);

    // Equal to
    const float Expected = 3.141592f*4.0f;

    ASSERT_EQUAL(Expected, Result);
}

CTEST(triangle_perimetr_test, result_test)
{
    // For given
    const float x1 = 3.0f;
    const float y1 = 3.0f;
    const float x2 = 3.0f;
    const float y2 = 13.0f;
    const float x3 = 13.0f;
    const float y3 = 3.0f;

    // If this
    const float Result = Perimetr(x1, y1, x2, y2, x3, y3);

    // Equal to
    const float Expected = 20.0f + sqrt(200.0f);

    ASSERT_EQUAL(Expected, Result);
}

CTEST(area_test, result_test)
{
    // For given
    const float x1 = 0.0f;
    const float y1 = 0.0f;
    const float x2 = 0.0f;
    const float y2 = 10.0f;
    const float x3 = 10.0f;
    const float y3 = 0.0f;
    const float P = 20.0f + sqrt(200.0f);

    // If this
    const float Result = Area(x1, y1, x2, y2, x3, y3, P);

    // Equal to
    const float Expected = 50.0f;

    ASSERT_EQUAL(Expected, Result);
}

CTEST(dist_test, result_test)
{
    // For given
    const float x1 = -1.0f;
    const float y1 = -1.0f;
    const float x2 = -1.0f;
    const float y2 = 9.0f;

    // If this
    const float Result = Dist(x1, y1, x2, y2);

    // Equal to
    const float Expected = 10.0f;

    ASSERT_EQUAL(Expected, Result);
}



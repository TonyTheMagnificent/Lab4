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
    const float Expected = 3.141592f*2.0f;

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

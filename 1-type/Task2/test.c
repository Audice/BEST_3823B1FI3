#include "acutest.h"
#include "mul.h"


void test_simple() {
    TEST_ASSERT(sum(1, 3) == 3);
    TEST_ASSERT(sum(6, 7) == 42);
    TEST_ASSERT(sum(-5, 5) == -25);
    TEST_ASSERT(sum(34, 0) == 34);
}

TEST_LIST= {
    {"Begin_task", test_simple},
    {NULL, NULL}
};

#include "acutest.h"
#include "def.h"


void test_simple() {
    TEST_ASSERT(sum(1, 3) == -2);
    TEST_ASSERT(sum(6, 7) == -1);
    TEST_ASSERT(sum(100, 101) == -1);
    TEST_ASSERT(sum(-5, 5) == -10);
    TEST_ASSERT(sum(34, 0) == 0);
}

TEST_LIST= {
    {"Begin_task", test_simple},
    {NULL, NULL}
};

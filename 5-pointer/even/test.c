#include "find_even.h"
#include "acutest.h"



void test_even() {
    int arr1[] = {-88, -47, 44, -55, 14, 0, -12, 32, 30, 9};
    int arr2[] = {5, -8, 10, -2, 1, 7, -8, -10, -2, 10, -10, -10, -10, -2, 10, 5, 7, -6, -5, 20};
    int arr3[] = {8, 5, 7, 3, -3, 3, -7, -3, 1, 6, -9, 3, 5, 7, -6, -7, -2, -10, 7, 9, -2, 3, -2, 6, 4, 4, 2, -3, -9, -7};
    int arr4[] = {-4, 10, 8, 2, 1, 9, 2, -6, 6, 2, 7, 5, 2, -7, -6, 3, 9, 4, 2, 3, 10, 10, 7, 8, 3, -8, 7, -3, -1, 5, -2, -9, 6, 3, -8, -6, -4, -10, -10, -9};
    int arr5[] = {1, -9, 7, 3, -1, -3, -5, 5, -1, 3};
    int arr6[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



    TEST_ASSERT(*(find_even(arr1, sizeof(arr1)/sizeof(int))) == -88);
    TEST_ASSERT(*(find_even(arr2, sizeof(arr2)/sizeof(int))) == -8);
    TEST_ASSERT(*(find_even(arr3, sizeof(arr3)/sizeof(int))) == 8);
    TEST_ASSERT(*(find_even(arr4, sizeof(arr4)/sizeof(int))) == -4);
    TEST_ASSERT(find_even(arr5, sizeof(arr5)/sizeof(int)) == NULL);
    TEST_ASSERT(*(find_even(arr6, sizeof(arr6)/sizeof(int))) == 0);
    
}


TEST_LIST = {
    {"Find even", test_even},
    {NULL, NULL}
};



























































































































































































































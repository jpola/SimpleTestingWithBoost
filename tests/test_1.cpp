#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE TEST1_simple_math

#include <boost/test/unit_test.hpp>
#include "simple_math.hpp"
#include <algorithm>


BOOST_AUTO_TEST_CASE (sm_add)
{

    // ilosc elementow
    int N = 1000;

    // input 1
    std::vector<int> vec(N, 1);

    // input 2
    int i = 12;

    int expected_result = 13;

    //testing element
    simpleMath::add(vec, i);

    for(auto v : vec)
    {
        BOOST_CHECK( v == expected_result);
    }
}

BOOST_AUTO_TEST_CASE (sm_multiply)
{
    int N = 1000;
    std::vector<int> vec(N);

    std::fill(vec.begin(), vec.end(), 2);

    int i = 4;

    int expected_result = 2*4;

    simpleMath::multiply(vec, i);

    for (auto v : vec)
    {
        BOOST_CHECK( v == expected_result);
    }
}


BOOST_AUTO_TEST_CASE (sm_multiply_zero)
{
    int N = 10000;
    std::vector<int> vec(N, 123123);
    int i = 0;

    simpleMath::multiply(vec, i);

    for (auto v : vec)
    {
        BOOST_CHECK ( v == 0);
    }
}

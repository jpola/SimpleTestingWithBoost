#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE TEST1_MathObject

#include <boost/test/unit_test.hpp>
#include "simple_math.hpp"
#include <algorithm>

BOOST_AUTO_TEST_CASE (sm_dmo_class_features)
{

    //Testing class features
    BOOST_CHECK( std::is_class<simpleMath::DummyMathObject<int>>::value == true);
    BOOST_CHECK( std::is_move_assignable<simpleMath::DummyMathObject<int>>::value == false);
}


BOOST_AUTO_TEST_CASE (sm_dmo_add)
{
    int N = 100;
    simpleMath::DummyMathObject<int> dmo(N);

    dmo.add(1);

    for (auto& v: dmo.GetData())
    {
        BOOST_CHECK( v == 1);
    }


}





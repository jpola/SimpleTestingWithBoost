find_package(Boost COMPONENTS unit_test_framework REQUIRED)

include_directories(
  ${PROJECT_SOURCE_DIR}/lib/include
  ${PROJECT_BINARY_DIR}/lib
  )

set( TESTS_CPP 
    test_1
    test_2
)

foreach( test ${TESTS_CPP} )
  add_executable( ${test} ${test}.cpp ${src} ${headers} )
  target_link_libraries( ${test} SimpleMathLib ${CMAKE_DL_LIBS} ${GTEST_LIBRARIES} )
  if( CMAKE_COMPILER_IS_GNUCXX OR ( CMAKE_CXX_COMPILER_ID MATCHES "Clang" ) )
   target_compile_options( ${test} PUBLIC -std=c++11 )
    if( CMAKE_COMPILER_IS_GNUCXX )
        target_link_libraries( ${test} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} pthread ) #gtest on linux brings this dependency
    endif( )
  endif( )
endforeach( )

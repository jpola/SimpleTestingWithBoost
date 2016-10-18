project(SimpleMath)
cmake_minimum_required(VERSION 2.8)

if( CMAKE_COMPILER_IS_GNUCXX OR ( CMAKE_CXX_COMPILER_ID MATCHES "Clang" ) )
  add_definitions( -std=c++11 )
endif( )


add_subdirectory(lib)
add_subdirectory(tests)

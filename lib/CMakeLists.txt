project(SimpleMathLib)
cmake_minimum_required(VERSION 2.8)

if( CMAKE_COMPILER_IS_GNUCXX OR ( CMAKE_CXX_COMPILER_ID MATCHES "Clang" ) )
  add_definitions( -std=c++11 )
endif( )


include_directories(include)


set( headers
    include/simple_math.hpp
)
set( src
src/simple_math.cpp
)


add_library(${PROJECT_NAME} ${src} ${headers})


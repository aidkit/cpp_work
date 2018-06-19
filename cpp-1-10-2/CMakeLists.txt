project(cpp-1-10-2)
 
if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4 /EHsc")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
endif()
 
add_executable(cpp-1-10-2 main.cpp foo.cpp foo.h)
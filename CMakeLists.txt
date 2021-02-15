set(PROJECT_NAME aip_template)
project(${PROJECT_NAME})

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c++11")

set(SRC_LIST first.cpp second.cpp third.cpp fourth.cpp fifth.cpp main.cpp)
add_executable(${PROJECT_NAME} ${SRC_LIST})

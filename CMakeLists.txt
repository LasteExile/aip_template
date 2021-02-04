set(PROJECT_NAME aip_template)
project(${PROJECT_NAME})

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

set(SRC_LIST first.c second.c third.c fourth.c fifth.c main.c)
add_executable(${PROJECT_NAME} ${SRC_LIST})

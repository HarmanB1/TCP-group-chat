cmake_minimum_required(VERSION 3.14)
project(GroupChatServer )

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -pthread -Wextra")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(server
  src/server.c
)

add_executable(client
  src/client.c
)

target_link_libraries(server pthread)
target_link_libraries(client pthread)

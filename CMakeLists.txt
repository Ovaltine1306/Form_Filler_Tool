cmake_minimum_required(VERSION 3.10)

project(Auto_fill_form)

include_directories(include)

include_directories(external/curl/include)

include_directories(external/curl/lib)

file(GLOB SRC_FILE "src/*.cpp")

add_executable(Form_filler_tool ${SRC_FILE})

target_link_libraries(Form_filler_tool ${CMAKE_SOURCE_DIR}/external/curl/lib/libcurl.dll.a)



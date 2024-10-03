cmake_minimum_required(VERSION 3.25)
project(MyKerb)
set(MPROJECT_VERSION 1.0.0)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

# Путь к заголовочным файлам
include(settings.cmake)

if(NOT EXISTS ${SOURCE_PATH} OR NOT EXISTS ${INCLUDE_PATH})
message(FATAL_ERROR "Пути SOURCE_PATH или INCLUDE_PATH не существуют.")
endif()
# Ваши пути SOURCE_PATH и INCLUDE_PATH должны быть определены в settings.cmake или здесь
# Например:
# set(SOURCE_PATH "${CMAKE_SOURCE_DIR}/source")
# set(INCLUDE_PATH "${CMAKE_SOURCE_DIR}/include")

file(GLOB_RECURSE SOURCE ${SOURCE_PATH}/*.c)
file(GLOB_RECURSE HEADER ${INCLUDE_PATH}/*.h)

add_library(OTP SHARED ${SOURCE})

# Добавить пути включения к заголовкам
target_include_directories(OTP PRIVATE ${HEADER} ${INCLUDE_PATH})

# Выходной путь библиотеки
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/lib)
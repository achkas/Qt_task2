cmake_minimum_required(VERSION 3.14)

project(N_task_2 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Sql Network)
#find_package(Qt6 REQUIRED COMPONENTS Sql)

add_executable(N_task_2
  main.cpp
)
target_link_libraries(N_task_2 PRIVATE Qt${QT_VERSION_MAJOR}::Core
                               PRIVATE Qt${QT_VERSION_MAJOR}::Sql
                               PRIVATE Qt${QT_VERSION_MAJOR}::Network)



#target_link_libraries(N_task_2 PRIVATE Qt6::Sql)

install(TARGETS N_task_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

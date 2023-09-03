cmake_minimum_required(VERSION 3.0.0)

set(PROJECT_NAME
    payroll
)
set(SOURCE_DIR
    src
)
set(SOURCE
    ${SOURCE_DIR}/main.cpp
    ${SOURCE_DIR}/account.cpp
)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} ${SOURCE})

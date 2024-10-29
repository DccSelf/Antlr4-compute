cmake_minimum_required(VERSION 3.20)
project(ANTLRProject)

# 导出编译命令
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置编译器为 g++
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

# 包含路径和库路径
set(INSTALL_DIR "${CMAKE_SOURCE_DIR}/install")
set(INCPATH "${INSTALL_DIR}/include/antlr4-runtime")
set(LDPATH "${INSTALL_DIR}/lib")
set(SRC "${CMAKE_SOURCE_DIR}/visitor")

# 添加 include 路径
include_directories(${INCPATH})
include_directories(${SRC})

# 添加库路径
link_directories(${LDPATH})

#收集源文件
file(GLOB_RECURSE DIR_SRC "${CMAKE_SOURCE_DIR}/visitor/*.cpp")

# 指定源文件  main.cpp依赖的cpp文件
set(SRC_FILES
    main.cpp
    ${DIR_SRC}
)

# 定义可执行文件
add_executable(compute ${SRC_FILES})

# 链接库
target_link_libraries(compute PRIVATE antlr4-runtime pthread)

# 测试目标
add_custom_target(test
    COMMAND env LD_LIBRARY_PATH=${LDPATH}:$ENV{LD_LIBRARY_PATH} ./compute test.txt
    DEPENDS compute
)
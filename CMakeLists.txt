# 声明 CMake 的最低版本要求
cmake_minimum_required(VERSION 3.20)

# 声明你的项目名称（可以随便起，比如叫 CppStudy）
project(CppStudy CXX)

# 指定 C++ 标准（这里用 C++17 或 C++20 都可以，根据你的编译器自动适配）
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 临时放一个虚拟入口，防止 CMake 因为没有源文件而报错
# 等你用上那个右键插件后，插件会自动在下面追加新的编译规则
add_executable(temp_main_entry "")
add_executable(exercise_sum_sq_cubes Cpp/src/exercise/数组/2_平方和与立方和.cpp)
set_target_properties(exercise_sum_sq_cubes PROPERTIES OUTPUT_NAME "2_平方和与立方和")

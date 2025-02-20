cmake_minimum_required(VERSION 3.10)

project(TaskManager)

# Устанавливаем стандарт C
set(CMAKE_C_STANDARD 99)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Добавляем директорию с заголовочными файлами
include_directories(include)

# Указываем исходные файлы
add_executable(tskmng src/main.c src/task_manager.c src/deftype.c)


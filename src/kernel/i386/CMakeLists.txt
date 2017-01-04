cmake_minimum_required(VERSION 3.5)
project( kernel C ASM )
set(CMAKE_VERBOSE_MAKEFILE TRUE)
#set(EXECUTABLE_OUTPUT_PATH ../build)
set(CMAKE_EXE_LINKER_FLAGS "-T ${CMAKE_CURRENT_SOURCE_DIR}/kernel.ld -nostdlib -melf_i386")
set(CMAKE_C_LINK_EXECUTABLE "/usr/bin/ld <LINK_FLAGS> <OBJECTS> <LINK_LIBRARIES> -o <TARGET>")
add_executable(${PROJECT_NAME}
  ../main.c
  ../system.c
  ../proc.c
  ../printer.c
  ../dmp.c
  ../table.c
  ../clock.c
  ../tty.c
  ../memory.c
  ../floppy.c
  ../wini.c
  multiboot.c
  klib.s
  mpx.s
  boot.S
#  ../xt_wini.c
#  ../at_wini.c
)
target_link_libraries(${PROJECT_NAME} c)
target_compile_options(${PROJECT_NAME} PRIVATE -Di8088 -m32 -fno-builtin -nostdlib -nostdinc -fno-stack-protector)
target_include_directories(${PROJECT_NAME} PRIVATE ../../h)
target_include_directories(${PROJECT_NAME} PRIVATE ../../include)

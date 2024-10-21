cmake_minimum_required(VERSION 3.10)
project(dungeon)

set(CMAKE_CXX_STANDARD 20)



add_executable(dungeon src/main.cc)


target_include_directories(dungeon PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


target_link_libraries(dungeon m pthread dl)


if(APPLE)
  set(CMAKE_OSX_ARCHITECTURES arm64) 
  target_link_libraries(dungeon ${CMAKE_CURRENT_SOURCE_DIR}/lib/apple_arm64_libraylib.a)
  find_library(COCOA_LIBRARY Cocoa)
  find_library(GL_LIBRARY OpenGL)
  find_library(IOKIT_LIBRARY IOKit)
  find_library(COREVIDEO_LIBRARY CoreVideo)
  target_link_libraries(dungeon ${COCOA_LIBRARY} ${GL_LIBRARY} ${IOKIT_LIBRARY} ${COREVIDEO_LIBRARY})
endif(APPLE)

if(LINUX)
  target_link_libraries(dungeon ${CMAKE_CURRENT_SOURCE_DIR}/lib/libraylib.a)
endif(LINUX)




project(SuperTeacher)

if(MINGW)
  include(ExternalSDL2)
else()
  find_package(SDL2 REQUIRED)
endif()

include_directories(${SDL2_INCLUDE_DIR})

add_executable(SuperTeacher main.cpp)
target_link_libraries(SuperTeacher ${SDL2_LIBRARY})
install(TARGETS SuperTeacher RUNTIME DESTINATION ${BIN_DIR})

# Auto download SDL2 for Windows

ExternalProject_Add(
    SDL2
    URL https://www.libsdl.org/release/SDL2-devel-2.0.4-mingw.tar.gz
    LOG_DOWNLOAD ON
    INSTALL_COMMAND ""
    BUILD_COMMAND ""
    CONFIGURE_COMMAND ""
)

# SDL2 come pre_built in source_dir
ExternalProject_Get_Property(SDL2 source_dir)

set(SDL2_INCLUDE_DIR "${source_dir}/i686-w64-mingw32/include" CACHE STRING "SDL2 include")
set(SDL2_LIBRARY "${source_dir}/i686-w64-mingw32/lib/libSDL2.a;${source_dir}/i686-w64-mingw32/lib/libSDL2main.a;-lpthread" CACHE STRING "SDL2 Library")


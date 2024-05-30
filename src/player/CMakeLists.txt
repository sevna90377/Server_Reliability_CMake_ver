add_library(Player player.cpp
        ../../include/player/player.h)

target_include_directories(Player PRIVATE ${PROJECT_SOURCE_DIR}/include)
add_executable(Server_Reliability_Sim main.cpp
        server/server_manager.cpp
        ../include/server/server_manager.h)

add_subdirectory(RNG)
add_subdirectory(player)
add_subdirectory(server)

target_link_libraries(Server_Reliability_Sim PRIVATE RNG Player Server)

target_include_directories(Server_Reliability_Sim PRIVATE ${PROJECT_SOURCE_DIR}/include)
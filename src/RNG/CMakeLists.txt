add_library(RNG normal_distribution_RNG.cpp
        box_muller_transform.cpp
        linear_congruential_RNG.cpp)

target_include_directories(RNG PRIVATE ${PROJECT_SOURCE_DIR}/include)
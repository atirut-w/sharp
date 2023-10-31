add_library(sharp STATIC
    "src/object.cpp"
    "src/valuetype.cpp"
)
target_include_directories(sharp PUBLIC include)

add_library(sharp STATIC
    # Basic types
    "src/object.cpp"
    "src/valuetype.cpp"
    "src/char.cpp"
    
    "src/console.cpp"
)
target_include_directories(sharp PUBLIC include)

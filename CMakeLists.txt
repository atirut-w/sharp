add_library(sharp STATIC
    # Basic types
    "src/object.cpp"
    "src/valuetype.cpp"
    "src/char.cpp"

    # High-level types ("high-level" used loosely here)
    "src/string.cpp"
    
    "src/console.cpp"
)
target_include_directories(sharp PUBLIC include)

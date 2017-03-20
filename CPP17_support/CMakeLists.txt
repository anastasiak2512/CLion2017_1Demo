set(SOURCE_FILES nested_namespaces.cpp)

include(CheckCXXCompilerFlag)

# Check for standard to use
check_cxx_compiler_flag(-std=c++17 HAVE_FLAG_STD_CXX17)
if(HAVE_FLAG_STD_CXX17)
    add_compile_options("-std=c++17")
else()
    check_cxx_compiler_flag(-std=c++1z HAVE_FLAG_STD_CXX1Z)
    if(HAVE_FLAG_STD_CXX1Z)
        add_compile_options("-std=c++1z")
    else()
        message(SEND_ERROR "C++ compiler doesn't support C++17")
    endif()
endif()

add_library(CPP17_support ${SOURCE_FILES})
cmake_minimum_required (VERSION 3.5)
project(lf_utils)

### Configuration
set(CPP_ROOT "${CMAKE_CURRENT_LIST_DIR}/..")
set(CPP_SOURCE_DIR "${LIBIGL_ROOT}/cpp")

# TODO Used as a header only library for now
include_directories(CPP_SOURCE_DIR)

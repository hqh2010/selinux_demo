set(CMAKE_BUILD_TYPE Debug)
cmake_minimum_required(VERSION 3.0)

project(selinux_demo)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(PkgConfig REQUIRED)
# find_package(glib-2.0-dev REQUIRED)
# pkg_check_modules(GLIB REQUIRED glib-2.0 gio-2.0)

# need install glib-2.0 glib-2.0-dev gobject-2.0 gtk+-2.0 first 
set(LINK_LIBS
    stdc++
#	${GLIB_LINK_LIBRARIES}
    )

add_executable(selinux_demo_test client.cpp)
target_link_libraries(selinux_demo_test ${LINK_LIBS})
# target_include_directories(selinux_demo_test PRIVATE  ${GLIB_INCLUDE_DIRS})
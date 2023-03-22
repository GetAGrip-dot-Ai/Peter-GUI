cmake_minimum_required(VERSION 3.5)

project(peter_gui_package VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

#===================== ros depends ============================

#find_package(catkin REQUIRED COMPONENTS
#  roscpp
#  std_msgs
#  message_generation
#)

### Generate messages in the 'msg' folder
#add_message_files(
#   FILES
#   arithmetic_reply.msg
#)

### Generate added messages and services with any dependencies listed here
#generate_messages(
#   DEPENDENCIES
#   std_msgs
#)

#catkin_package(
#  CATKIN_DEPENDS message_runtime
#)

#include_directories(
## include
#  ${catkin_INCLUDE_DIRS}
#)


#===================== ros depends ============================


set(PROJECT_SOURCES
        main.cpp
        petergui.cpp
        petergui.h
        petergui.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(peter_gui_package
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET peter_gui_package APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(peter_gui_package SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(peter_gui_package
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(peter_gui_package PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(peter_gui_package PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS peter_gui_package
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(peter_gui_package)
endif()

# 3.7 required for Qt5 COMPONENTS
cmake_minimum_required(VERSION 3.7.0 FATAL_ERROR)
project(discord_typer VERSION 1.1.0 LANGUAGES CXX)

# Runs Qt's MOC on necessary files
set(CMAKE_AUTOMOC ON)
# Generates any Qt ui_XXX.h files
set(CMAKE_AUTOUIC ON)

# Only using the Core, Widgets, and Gui
find_package(Qt5
	COMPONENTS Core Widgets Gui
	REQUIRED
)

add_executable(discord_typer
	"src/main.cpp"
	"src/mainwindow.cpp"
)

target_include_directories(discord_typer PRIVATE
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
	$<INSTALL_INTERFACE:src>
)

target_compile_features(discord_typer PRIVATE
	cxx_std_11
	cxx_range_for
)

target_link_libraries(discord_typer PRIVATE
	Qt5::Core
	Qt5::Widgets
	Qt5::Gui
)

# Defines standardized defaults for install paths
include(GNUInstallDirs)

# Gives "Make install" esque operations a location to install to.
install(TARGETS discord_typer
	RUNTIME DESTINATION "${CMAKE_INSTALL_FULL_BINDIR}"
)

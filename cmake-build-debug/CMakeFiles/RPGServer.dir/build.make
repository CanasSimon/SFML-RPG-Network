# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CLion\OnlineTurnBasedGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLion\OnlineTurnBasedGame\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RPGServer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RPGServer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RPGServer.dir/flags.make

CMakeFiles/RPGServer.dir/Server.cpp.obj: CMakeFiles/RPGServer.dir/flags.make
CMakeFiles/RPGServer.dir/Server.cpp.obj: CMakeFiles/RPGServer.dir/includes_CXX.rsp
CMakeFiles/RPGServer.dir/Server.cpp.obj: ../Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion\OnlineTurnBasedGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RPGServer.dir/Server.cpp.obj"
	D:\Progs\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RPGServer.dir\Server.cpp.obj -c D:\CLion\OnlineTurnBasedGame\Server.cpp

CMakeFiles/RPGServer.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPGServer.dir/Server.cpp.i"
	D:\Progs\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion\OnlineTurnBasedGame\Server.cpp > CMakeFiles\RPGServer.dir\Server.cpp.i

CMakeFiles/RPGServer.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPGServer.dir/Server.cpp.s"
	D:\Progs\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLion\OnlineTurnBasedGame\Server.cpp -o CMakeFiles\RPGServer.dir\Server.cpp.s

CMakeFiles/RPGServer.dir/Player.cpp.obj: CMakeFiles/RPGServer.dir/flags.make
CMakeFiles/RPGServer.dir/Player.cpp.obj: CMakeFiles/RPGServer.dir/includes_CXX.rsp
CMakeFiles/RPGServer.dir/Player.cpp.obj: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion\OnlineTurnBasedGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RPGServer.dir/Player.cpp.obj"
	D:\Progs\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RPGServer.dir\Player.cpp.obj -c D:\CLion\OnlineTurnBasedGame\Player.cpp

CMakeFiles/RPGServer.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPGServer.dir/Player.cpp.i"
	D:\Progs\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion\OnlineTurnBasedGame\Player.cpp > CMakeFiles\RPGServer.dir\Player.cpp.i

CMakeFiles/RPGServer.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPGServer.dir/Player.cpp.s"
	D:\Progs\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLion\OnlineTurnBasedGame\Player.cpp -o CMakeFiles\RPGServer.dir\Player.cpp.s

CMakeFiles/RPGServer.dir/TextManager.cpp.obj: CMakeFiles/RPGServer.dir/flags.make
CMakeFiles/RPGServer.dir/TextManager.cpp.obj: CMakeFiles/RPGServer.dir/includes_CXX.rsp
CMakeFiles/RPGServer.dir/TextManager.cpp.obj: ../TextManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLion\OnlineTurnBasedGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RPGServer.dir/TextManager.cpp.obj"
	D:\Progs\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RPGServer.dir\TextManager.cpp.obj -c D:\CLion\OnlineTurnBasedGame\TextManager.cpp

CMakeFiles/RPGServer.dir/TextManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RPGServer.dir/TextManager.cpp.i"
	D:\Progs\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLion\OnlineTurnBasedGame\TextManager.cpp > CMakeFiles\RPGServer.dir\TextManager.cpp.i

CMakeFiles/RPGServer.dir/TextManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RPGServer.dir/TextManager.cpp.s"
	D:\Progs\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLion\OnlineTurnBasedGame\TextManager.cpp -o CMakeFiles\RPGServer.dir\TextManager.cpp.s

# Object files for target RPGServer
RPGServer_OBJECTS = \
"CMakeFiles/RPGServer.dir/Server.cpp.obj" \
"CMakeFiles/RPGServer.dir/Player.cpp.obj" \
"CMakeFiles/RPGServer.dir/TextManager.cpp.obj"

# External object files for target RPGServer
RPGServer_EXTERNAL_OBJECTS =

RPGServer.exe: CMakeFiles/RPGServer.dir/Server.cpp.obj
RPGServer.exe: CMakeFiles/RPGServer.dir/Player.cpp.obj
RPGServer.exe: CMakeFiles/RPGServer.dir/TextManager.cpp.obj
RPGServer.exe: CMakeFiles/RPGServer.dir/build.make
RPGServer.exe: D:/Progs/MinGW/lib/libsfml-network-d.a
RPGServer.exe: D:/Progs/MinGW/lib/libsfml-system-d.a
RPGServer.exe: CMakeFiles/RPGServer.dir/linklibs.rsp
RPGServer.exe: CMakeFiles/RPGServer.dir/objects1.rsp
RPGServer.exe: CMakeFiles/RPGServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLion\OnlineTurnBasedGame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable RPGServer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RPGServer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RPGServer.dir/build: RPGServer.exe

.PHONY : CMakeFiles/RPGServer.dir/build

CMakeFiles/RPGServer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RPGServer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RPGServer.dir/clean

CMakeFiles/RPGServer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLion\OnlineTurnBasedGame D:\CLion\OnlineTurnBasedGame D:\CLion\OnlineTurnBasedGame\cmake-build-debug D:\CLion\OnlineTurnBasedGame\cmake-build-debug D:\CLion\OnlineTurnBasedGame\cmake-build-debug\CMakeFiles\RPGServer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RPGServer.dir/depend

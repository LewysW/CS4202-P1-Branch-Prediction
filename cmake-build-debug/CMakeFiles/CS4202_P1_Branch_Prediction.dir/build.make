# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CS4202_P1_Branch_Prediction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CS4202_P1_Branch_Prediction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS4202_P1_Branch_Prediction.dir/flags.make

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.o: CMakeFiles/CS4202_P1_Branch_Prediction.dir/flags.make
CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.o -c /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/main.cpp

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/main.cpp > CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.i

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/main.cpp -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.s

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.o: CMakeFiles/CS4202_P1_Branch_Prediction.dir/flags.make
CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.o: ../src/branch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.o -c /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/branch.cpp

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/branch.cpp > CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.i

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/branch.cpp -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.s

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.o: CMakeFiles/CS4202_P1_Branch_Prediction.dir/flags.make
CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.o: ../src/predictor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.o -c /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/predictor.cpp

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/predictor.cpp > CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.i

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/predictor.cpp -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.s

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.o: CMakeFiles/CS4202_P1_Branch_Prediction.dir/flags.make
CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.o: ../src/alwaysTaken.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.o -c /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/alwaysTaken.cpp

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/alwaysTaken.cpp > CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.i

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/alwaysTaken.cpp -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.s

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.o: CMakeFiles/CS4202_P1_Branch_Prediction.dir/flags.make
CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.o: ../src/twoBit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.o -c /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/twoBit.cpp

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/twoBit.cpp > CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.i

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/twoBit.cpp -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.s

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.o: CMakeFiles/CS4202_P1_Branch_Prediction.dir/flags.make
CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.o: ../src/GShare.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.o -c /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/GShare.cpp

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/GShare.cpp > CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.i

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/GShare.cpp -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.s

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.o: CMakeFiles/CS4202_P1_Branch_Prediction.dir/flags.make
CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.o: ../src/profiled.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.o -c /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/profiled.cpp

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/profiled.cpp > CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.i

CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/src/profiled.cpp -o CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.s

# Object files for target CS4202_P1_Branch_Prediction
CS4202_P1_Branch_Prediction_OBJECTS = \
"CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.o" \
"CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.o" \
"CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.o" \
"CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.o" \
"CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.o" \
"CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.o" \
"CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.o"

# External object files for target CS4202_P1_Branch_Prediction
CS4202_P1_Branch_Prediction_EXTERNAL_OBJECTS =

CS4202_P1_Branch_Prediction: CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/main.cpp.o
CS4202_P1_Branch_Prediction: CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/branch.cpp.o
CS4202_P1_Branch_Prediction: CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/predictor.cpp.o
CS4202_P1_Branch_Prediction: CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/alwaysTaken.cpp.o
CS4202_P1_Branch_Prediction: CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/twoBit.cpp.o
CS4202_P1_Branch_Prediction: CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/GShare.cpp.o
CS4202_P1_Branch_Prediction: CMakeFiles/CS4202_P1_Branch_Prediction.dir/src/profiled.cpp.o
CS4202_P1_Branch_Prediction: CMakeFiles/CS4202_P1_Branch_Prediction.dir/build.make
CS4202_P1_Branch_Prediction: CMakeFiles/CS4202_P1_Branch_Prediction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable CS4202_P1_Branch_Prediction"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CS4202_P1_Branch_Prediction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS4202_P1_Branch_Prediction.dir/build: CS4202_P1_Branch_Prediction

.PHONY : CMakeFiles/CS4202_P1_Branch_Prediction.dir/build

CMakeFiles/CS4202_P1_Branch_Prediction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CS4202_P1_Branch_Prediction.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CS4202_P1_Branch_Prediction.dir/clean

CMakeFiles/CS4202_P1_Branch_Prediction.dir/depend:
	cd /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug /home/lewys/Documents/Practicals/CS4202-P1-Branch-Prediction/cmake-build-debug/CMakeFiles/CS4202_P1_Branch_Prediction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CS4202_P1_Branch_Prediction.dir/depend


echo Building and running Jatkosota
cd './src'

#Remove
echo Removing unnecessary files...
rm ./CMakeCache.txt
rm ./Makefile
rm ./cmake_install.cmake
rm -R ./CMakeFiles

#Make
echo Files removed, making the game...
cmake CMakeLists.txt
make

#Run
echo Running the game...
./Jatkosota

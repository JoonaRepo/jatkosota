This is the repository for 'Jatkosota', a continuation war -inspired real time strategy game.

To run the game, run the script 'build-and-run.sh' in the repository root. Alternatively;

- go to src
- delete the files 'CMakeCache.txt', 'Makefile', and 'cmake_install.txt' and the folder 'CMakeFiles'
- open the terminal (in src) and run the following commands:
	- cmake CMakeLists.txt
	- make
	- ./Jatkosota
	
--Controls--
Menu:
	- W or Up: Move up
	- S or Down: Move down
	- Space: Confirm selection/cycle setting
	
Game:
	Click button: activate
	Click and drag: select multiple units
	Click unit: select unit (ally)/Command selected units to attack (enemy)
	Shift + click: add waypoints to selected units
	Right click: deselect
	WASD or Up/Left/Down/Right: Move camera
	Mouse scroll: Zoom
	
--How to--
Obtain Iron:
	Engineers can obtain iron, move a engineer unit close to an iron pile and press the harvest iron button and the engineer will start harvesting iron and bring it back to base

Buy a unit or structure:

	Engineers are used to build structures. The engineer needs to be still to build a structure. Press the wanted structure button to build it close to the engineer. Same can be done with
	buildings, but they only spawn units.
	
Obtain Victory points:
	To obtain victorypoints simply move your unit to a flagpoint. You need to have more units on the flagpoint than the enemy.

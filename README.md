# Move-or-DIE
A simple game about moving a cube around<br>
You consume red cubes to gain points, for every point you gain a speed boost<br>
If you hit the border it's game over. <br><br>

Controls are: <br>
`wasd` for movement <br>
`r` for resetting <br><br>

# Installation

Installation for Linux:<br>
1: Clone this respiratory `git clone https://github.com/RockRottenSalad/Move-or-DI`<br>
2: If you do not have raylib, then you can either manually install raylib from: https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux. Or you can try to use my automated raylib bashscript. Run it by going into the directory and running `sudo ./installraylib.sh` <br>
3: Once raylib is installed, you can run the game: `./move-or-die.out`
<br><br>

Installation for Windows:<br>
1: Install the Move_Or_DIE.exe<br>
2: Deal with the antivirus<br><br>

# Compiling
If you'd like to compile the code yourself, then follow these instructions:<br><br>

Compiling for Linux:<br>
1: Clone this respiratory `git clone https://github.com/RockRottenSalad/Move-or-DI`<br>
2: Install raylib(Instructions can be found in step 2 in installation for Linux)<br>
3: Install the gcc package. `sudo apt-get install gcc` or `sudo pacman -S gcc` depending on package manager<br>
4: Run the command `gcc MoveOrDieSource.c -lraylib -o move-or-die.out`<br><br>

Compiling for Windows:<br>
1: Download `MoveOrDieSource.c` from this respiratory<br>
2: Download notepad++ https://notepad-plus-plus.org/downloads/ <br>
3: Go to https://www.raylib.com/index.html and click on download now<br>
4: Download the installer with the TCC compiler<br>
5: Run the setup.exe file<br>
6: Once raylib is installed, press the windows key and search for `Notepad++ for raylib`<br>
7: Once notepad++ is open, press the open button in the upper left corner<br>
8: Select `MoveOrDieSource.c`<br>
9: Once it's open, press `F6` on your keyboard<br>
10: Make sure you've selected the `raylib_compile_execute` option and click save<br>
11: Click save again, and then click OK<br>







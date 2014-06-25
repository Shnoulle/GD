Game Develop
============
2008-2014 Florian Rival (Florian.Rival@gmail.com / http://www.FlorianRival.com)

Game Develop is a full featured, open source game development software, allowing to create any kind of 2D game
without needing any knowledge in a specific programming language. All the game logic is made thanks to an
intuitive and powerful event based system.

About directory structure
-------------------------

* Core: Game Develop core library, containing common tools to implement the IDE and platforms.
* GDCpp: Sources files of Game Develop C++ Platform, used to build native games.
* GDJS: Sources files of Game Develop JS Platform, used to build HTML5 games.
* IDE: Sources files of Game Develop IDE.
* Extensions: Sources files of extensions. (For C++ or JS platform)

* Binaries: Binaries are generated in Binaries/Output. Binaries/Releases contains the installer exes and compressed files containing Game Develop releases.
* GDSDK: Game Develop SDK for building extensions or platforms: Generated using a script.

* scripts: Various scripts, notably scripts to package GD (ReleaseProcedure* scripts).

How to build
------------

Refer to the SDK available on http://www.compilgames.net which has a nice pre-built HTML documentation
inside GDCpp folder, or download GDJS on http://www.github.com/4ian and also check the documentation.

Basically:
* Install and launch [CMake].
* Choose this directory as the source directory, and a hidden directory like Binaries/.build
as the directory where to build. Files will be output in Binaries/Output anyway.
* Be sure to have 3rd party libraries downloaded and extract in *ExtLibs* folder. On Windows,
be sure to use the compiler shipped on compilgames.net for better compatibility.
* Generate the Makefile (or [Ninja] build file) and launch it.

License
-------

* The IDE (in the IDE folder) licensed with GPL v3.
* The Core library, the native and HTML5 platforms (respectively Core, GDCpp and GDJS folders) are LGPL.
* Extensions (in the Extensions folder) are using zlib/libpng license.


[CMake]:http://www.cmake.org/
[Ninja]:http://martine.github.io/ninja/
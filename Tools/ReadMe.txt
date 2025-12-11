!Prototype generates C++ Toolbox application source code from a resource file and Events, Toolbox and Wimp.

The application code for !MinProg2 has been generated entirely from !Prototype, the only event required to be selected from the Iconbar->Options->Toolbox Events was the toolbox QuitQuit event, the !MinProg2 Iconbar Quit menu item having a click action to deliver the event &82a91, which is QuitQuit.

Usage:
Create an application directory, eg !Something.
Add two Obey files !Boot and !Run with the required contents.
Create a resource file and name it as res (as long it is the name of a normal resource filename the Toolbox understands)
Run !Prototype
Drag and drop your res file to !Prototype, select your options from the Iconbar menu and click on Generate Code.
By default directories c++, h and o will be created and source code will populate the c++ and h directories.
Create a Makefile to generate a !RunImage from the c++ sources and link with ToolboxC++Lib, RiscOSC++Lib, CommonC++Lib, wimplib, c++lib and stubs

Currently !Prototype does not generate code to take into account of Gadgets, this is something to be developed.

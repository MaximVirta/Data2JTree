########################################################

This program is a modified version of Dr. DongJo Kim's
macro. This program is adapted to read csv-files in 
form of: 
"# pt,           eta,            phi             evtN".

The data is then turned into root file containing JTree
objects. 

########################################################

HOW TO COMPILE:

The program can be compiled with make -command. There is
also the Makefile which contains configurations for the 
compilation.

########################################################

HOW TO RUN:

The program is used as any other program with command
"./Data2JTree" without any arguments. The input files
are defined as a vector inside "Data2JTree.C" file. The
input files are assumed to be in "inputs" folder and 
start with "input" and end with ".dat". Whatever comes 
between "input" and ".dat" are placed in the vector. 
E.g. let's say you have following files 
"inputs/inputdemoScan.dat" and 
"inputs/inputmultiplicityScan.dat". Then you can read 
these by placing strings "multiplicityScan" and 
"demoScan" inside the vector in "Data2Jtree.c" file.

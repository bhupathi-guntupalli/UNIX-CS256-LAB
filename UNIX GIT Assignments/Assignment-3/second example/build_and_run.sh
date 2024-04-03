#!/bin/bash

# Compile the BST source files into object files
gcc -c bst_insert.c bst_delete.c bst_search.c bst_print.c
if [ $? -ne 0 ]; then
    echo "Error: Compilation of BST source files failed."
    exit 1
fi

# Create static library
ar rcs libbst_functions.a bst_insert.o bst_delete.o bst_search.o bst_print.o
if [ $? -ne 0 ]; then
    echo "Error: Creation of static library failed."
    exit 1
fi

# Create dynamic library
gcc -shared -o libbst_functions.so bst_insert.o bst_delete.o bst_search.o bst_print.o
if [ $? -ne 0 ]; then
    echo "Error: Creation of dynamic library failed."
    exit 1
fi

# Set library path
export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH

# Compile main program with static library
gcc main.c -L. -lbst_functions -o main_static
if [ $? -ne 0 ]; then
    echo "Error: Compilation of main program with static library failed."
    exit 1
fi

# Compile main program with dynamic library
gcc main.c -L. -lbst_functions -o main_dynamic
if [ $? -ne 0 ]; then
    echo "Error: Compilation of main program with dynamic library failed."
    exit 1
fi

# Execute main programs
echo "Executing main program with static library..."
./main_static
if [ $? -ne 0 ]; then
    echo "Error: Execution of main program with static library failed."
    exit 1
fi

echo "Executing main program with dynamic library..."
./main_dynamic
if [ $? -ne 0 ]; then
    echo "Error: Execution of main program with dynamic library failed."
    exit 1
fi

# Clean up object files and executables
rm *.o libbst_functions.a libbst_functions.so main_static main_dynamic


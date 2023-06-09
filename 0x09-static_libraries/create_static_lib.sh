#!/bin/bash
gcc -c *c
ar rc liball.a *.o

echo "Static library liball.a created successfully."

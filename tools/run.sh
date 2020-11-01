#!/bin/bash
DIR="../build"
if [ -d "$DIR" ]; then
  ### Take action if $DIR exists ###
  echo "Installing config files in ${DIR}"
  cd ${DIR}
  exec bash #if we do not use this then it will go inside build
 
  
else
  ###  Control will jump here if $DIR does NOT exists ###
  cd ..
  mkdir build
  cd build
  exec bash 
  
fi

cmake ..
make

echo "Started runnuing the database....."
./DBPlus

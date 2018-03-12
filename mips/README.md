# mips

This repository includes MIPS assembly code examples compiled on a Linux virtual machine (Ubuntu 16.04 LTS).

## Compiling C Code to MIPS Assembly

### Requirements

All code was compiled on a Linux virtual machine (Ubuntu 16.04 LTS) through the command line. An additional SDK package must
be installed on your machine in order to compile C code to MIPS assembly through GCC. 

1. Ubuntu 16.04 LTS [download](https://www.ubuntu.com/download/desktop)
2. VirtualBox [download](https://www.virtualbox.org/wiki/Downloads)
3. Codescape MIPS SDK [download](https://www.mips.com/develop/tools/codescape-mips-sdk/)

## Installing MIPS SDK Package

Once downloading the Codescape MIPS SDK package online, run the following commands on a bash terminal to install it on your machine. 
Make sure you are in the directory of the .run file. 

```
chmod 755 mipssdk.v2.0.0k.linux-x64.x64.webinstall.run
./mipssdk.v2.0.0k.linux-x64.x64.webinstall.run
```

Follow the on-screen instructions to install the Codescape MIPS SDK package. 

## Compiling from C code to MIPS assembly

Once the SDK package is installed, it is easy to compile C code into MIPS assembly using GCC. 

```
mips-mti-elf-gcc -S -O0 -std=c99 -fomit-frame-pointer <file-name.c> -o <output-file-name.s>
```

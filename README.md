# TAPE

TAPE is an assembly language that allows you to write instructions for a turning machine. For documentation on the TAPE language, see [TAPE.md](TAPE.md).

It is largely incomplete, there is no working environment yet.

## Building the TAPE environment

Requirements: a C99 compiler (preferably POSIX-compliant)

There is no Makefile yet. You can build the assembler like this:
```sh
$ cc tasm.c bitops.c -o tasm
```


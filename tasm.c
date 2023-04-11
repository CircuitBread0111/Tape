#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct {
	uint16_t op : 13;
	uint16_t ins : 3;
} Opcode;

enum instruction {
	INS_CHECK, INS_WRITE, INS_LEFT, INS_RIGHT, INS_JUMP,
	INS_PRINT, INS_HALT, INS_NOP,
	INS_COUNT // number of instructions
};

const char *INSTRUCTION_TABLE[] = {
	"CHECK", "WRITE", "LEFT", "RIGHT", "JUMP",
	"PRINT", "HALT", "NOP"
};

static int str_to_inst(const char *str) {
	int i;
	for (i = 0; i < INS_COUNT; ++i) {
		// match found
		if (!strcmp(str, INSTRUCTION_TABLE[i])) return i;
	}

	// no match found	
	return -1;
}

// Accepts 8192 opcode long array, returns length of program
size_t assemble_source(char *source, Opcode program[8192]) {
	assert(0 && "Not implemented yet.");
}

#define USAGE "Usage: %s [file]\n"

int main(int argc, char **argv) {
	if (argc < 2) {
		fprintf(stderr, "Enter some command line arguments!\n" USAGE, argv[0]);
		return 0;
	}

	char *path = argv[1];
	FILE *source_file = fopen(path, "r");
	if (!source_file) {
		fprintf(stderr, "Failed to open %s: %s\n", path, strerror(errno));
		return 1;
	}

	fseek(source_file, 0, SEEK_END);
	long file_length = ftell(source_file);
	rewind(source_file);

	char *source = malloc(file_length + 1);
	if (fread(source, 1, file_length, source_file) < file_length) {
		fprintf(stderr, "Failed to read %s.\n", path);
		fclose(source_file);
	}
	source[file_length] = '\0';
	fclose(source_file);

	return 0;
}

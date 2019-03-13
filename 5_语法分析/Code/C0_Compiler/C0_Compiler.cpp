#include "C0_Compiler.h"

C0_Compiler::C0_Compiler() {
	token_number = 0;
	current_symbol = "";
	new_line = "";
	current_line = 0;
	current_char = '\0';
	current_pos = 0;
	begin_pos = 0;


	infile.open("15071054_test.txt", ios::in);
	outfile.open("result.txt", ios::out);
	errorfile.open("errorlog.txt", ios::out);
}

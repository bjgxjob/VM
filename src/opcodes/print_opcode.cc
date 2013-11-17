#include "print_opcode.h"

#include <iostream>

PrintOpcode::PrintOpcode(std::string v) : variable(v) {}

int PrintOpcode::get_id() {
	return 0;
}

std::string PrintOpcode::get_name() {
	return "print";
}

void PrintOpcode::execute(std::map<std::string, int> *memory) {
	std::cout << memory->at(variable) << std::endl;
}
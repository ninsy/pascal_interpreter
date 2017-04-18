#pragma once
#include <iostream>
#include <memory>

#include "Parsable.h";

namespace PascalInterpreter {
	class Repl : public Parsable<std::istream&> {
		Repl(std::istream &is, std::ostream &os);
		std::shared_ptr<std::string> parse(std::istream &is, unsigned int tokenLength);
		void read();
		void write();
	};

};


#pragma once

#include "Token.hpp";
#include "Common.hpp";
#include "Lexer.hpp";
#include "Parsable.h";

namespace PascalInterpreter {
	template<class T>
	class Interpreter {
	public:
		Interpreter(Parsable<T> &p);
	private:
		Parsable<T> source;
		void eat();
		void interpretArithmetic();
	};
};


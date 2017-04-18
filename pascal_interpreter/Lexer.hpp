#pragma once
#include <string>
#include <cctype>
#include <sstream>

#include "Token.hpp";
#include "Common.hpp";

namespace PascalInterpreter {
	template<class T>
	class Lexer {
		static Token<T>& getNextToken(const std::string&, int&);
	};
	template<class T>
	static Token<T>& Lexer::getNextToken(const std::string& in, int& offset) {
		if (offset > in.length() - 1) {
			return new Token<nullptr>(nullptr, TOKEN_TYPE::EOF);
		}
		std::string curr = in[offset];		
		if (std::isdigit(curr)) {
			int val = getIntegerValue(in, offset);
			return new Token<int>(val, TOKEN_TYPE::INTEGER);
		} 
	}
	static int getIntegerValue(const std::string& in, int& offset) {
		std::stringstream tmp;
		/*
		std::string curr = in[offset];
		do {
			
		} while (std::isdigit(curr));
		*/
		return std::stoi(tmp.str());
	}
};

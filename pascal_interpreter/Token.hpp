#pragma once

#include "Common.hpp";

namespace PascalInterpreter {
	template<class T>
	class Token {
	private:
		T value;
		PascalInterpreter
		TOKEN_TYPE type;
	public:
		Token(T, TOKEN_TYPE);
		void setValue(T);
		void setType(TOKEN_TYPE)
		T getValue();
		TOKEN_TYPE getType();
	};

	template<class T>
	Token::Token(T v, TOKEN_TYPE t) : value(v), type(t) {};

	template<class T>
	void Token::setValue(T v) {
		value = v;
	};

	template<class T>
	void Token::setType(TOKEN_TYPE t) {
		type = t;
	};

	template<class T>
	T Token::getValue() {
		return value;
	};

	template<class T>
	TOKEN_TYPE Token::getType() {
		return t;
	};

};

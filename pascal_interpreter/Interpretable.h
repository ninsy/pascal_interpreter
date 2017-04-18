#pragma once
#include <memory>
#include <string>

namespace PascalInterpreter {
	template<class T>
	class Interpretable {
	public:
		virtual std::shared_ptr<std::string[]> parse(T source, unsigned int tokenLength) = 0;
	};
};


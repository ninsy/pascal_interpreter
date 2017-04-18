#pragma once

namespace PascalInterpreter {
	template<class T>
	class Parsable {
	public:
		virtual std::shared_ptr<std::string> parse(T source, unsigned int tokenLength) = 0;
	};
};


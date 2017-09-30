

#ifndef __WW_CONFIG_HEADER__
#define __WW_CONFIG_HEADER__


#include <string>
#include <vector>

namespace ww {

class Config {

public:
	static void parse(int argc, char** argv);

	static std::string in_directory;
	static std::string out_directory;

};

}

#endif

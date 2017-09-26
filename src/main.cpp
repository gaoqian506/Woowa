
#include "Config.h"
#include "SfmBuilder.h"

int main(int argc, char** argv) {

	ww::Config::parse(argc, argv);
	ww::SfmBuilder::build();
	return 0;

}

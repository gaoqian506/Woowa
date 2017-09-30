

#include <stdio.h>
#include "Config.h"
#include "SfmBuilder.h"

int main(int argc, char** argv) {

	ww::Config::parse(argc, argv);

	ww::SfmBuilder builder;
	builder.build();

	printf("Hello Wrold!\n");
	return 0;

}

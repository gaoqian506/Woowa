

#ifndef __WW_SFM_BUILDER_HEADER__
#define __WW_SFM_BUILDER_HEADER__

#include "SiftExtractor.h"


namespace ww {

class SfmBuilder {

public:
	void build();

private:

	SiftExtractor m_extractor;

};

}

#endif

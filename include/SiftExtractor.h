

#ifndef __WW_SIFT_EXTRACTOR_HEADER__
#define __WW_SIFT_EXTRACTOR_HEADER__

#include <string.h> 
#include "opencv2/core/core.hpp"

namespace ww {

class SiftExtractor {

public:

	void extract();

private:
	void write_features(std::string& image_name, cv::Mat& features);

};

}


#endif

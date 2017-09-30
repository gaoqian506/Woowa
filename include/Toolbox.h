

#ifndef __WW_TOOLBOX_HEADER__
#define __WW_TOOLBOX_HEADER__


#include <string>
#include <vector>
#include "opencv2/core/core.hpp"

namespace ww {

class Toolbox {

public:
	static std::vector<std::string> find_image_names(std::string& dir);
	static cv::Mat detect_sift_features(cv::Mat& image);
};

}

#endif

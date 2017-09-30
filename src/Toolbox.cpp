


#include "Toolbox.h"
#include <dirent.h>  
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>

namespace ww {

std::vector<std::string> Toolbox::find_image_names(std::string& path) {
		
	std::vector<std::string> names;

	DIR *dir;
	struct dirent *file_info;
	dir = opendir(path.c_str());
	while ((file_info = readdir(dir)) != NULL) {
		
		char* ext = strrchr(file_info->d_name, '.');
		if( strcmp(ext, ".jpg") == 0 || strcmp(ext, ".png") == 0) {
			//std::cout << file_info->d_name << std::endl;
			names.push_back(file_info->d_name);
		}
	}
	closedir(dir);
	std::sort(names.begin(), names.end());
	return names;
}


cv::Mat Toolbox::detect_sift_features(cv::Mat& image) {

	return cv::Mat();
}



} // namespace


//names.push_back(path + std::string(file_info->d_name));

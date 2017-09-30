

#include "SiftExtractor.h"
#include "Config.h"
#include "Toolbox.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <sys/stat.h> // mkdir
#include <stdio.h> // printf



namespace ww {


void SiftExtractor::extract() {
	
	std::string in_dir = Config::in_directory;

	std::vector<std::string> image_names = Toolbox::find_image_names(in_dir);
	std::vector<std::string>::iterator name_itr;
	for (name_itr = image_names.begin(); name_itr != image_names.end(); name_itr++) {

		cv::Mat image = cv::imread(in_dir + *name_itr);
		cv::Mat features = Toolbox::detect_sift_features(image);
		write_features(*name_itr, features);
	}


}

void SiftExtractor::write_features(std::string& image_name, cv::Mat& features) {


	std::string out_dir = Config::out_directory + "features/";
	mkdir(out_dir.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	std::string ext = ".sift";

	cv::FileStorage fs(out_dir+image_name+ext, cv::FileStorage::WRITE);
	fs << "test" << "aaa";
	fs.release();  
}

} // namespace


/*


	const int dir_err = mkdir(out_dir.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	if (-1 == dir_err)
	{
		printf("Error creating directory!n");
		exit(1);
	}


        FileStorage fs(filename, FileStorage::WRITE);

        fs << "iterationNr" << 100;
        fs << "strings" << "[";                              // text - string sequence
        fs << "image1.jpg" << "Awesomeness" << "baboon.jpg";
        fs << "]";                                           // close sequence

        fs << "Mapping";                              // text - mapping
        fs << "{" << "One" << 1;
        fs <<        "Two" << 2 << "}";

        fs << "R" << R;                                      // cv::Mat
        fs << "T" << T;

        fs << "MyData" << m;                                // your own data structures

        fs.release();                                       // explicit close
        cout << "Write Done." << endl;

*/


	//for each image {

		// img_rsz = resize(img);
		// img_ppr = preprocess(img_rsz);
		// features = detect(img_ppr);
		// write(img_ppr, features);
	//}
	//std::string out_dir = Config::out_directory;
	//out_dir, 



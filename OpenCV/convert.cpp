#include <iostream>
#include <vector>
#include <opencv.hpp>

int main(int argc, char** argv)
{
	cv::Mat img = cv::imread(argv[1],-1);
	if ( img.empty() ) {
		return -1;
	} else {
		cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
		cv::imshow("Example1", img);
		cv::waitKey(0);
		cv::destroyWindow("Example1");
		return 0;
	}
}
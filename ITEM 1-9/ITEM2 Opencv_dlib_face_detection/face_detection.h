#pragma once
#include "pch.h"
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>

using namespace std;
using namespace cv;
using namespace cv::dnn;

Mat detectFaceHaar(Mat frame, string faceCascadePath);
Mat detectFaceOpenCVDNN(Mat frame, string configFile, string weightFile);
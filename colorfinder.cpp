#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<bits/stdc++.h>
using namespace std;
using namespace cv;

Mat imgHSV,mask;
int hmin = 0, smin = 0,vmin=0;
int hmax = 179, smax = 255, vmax = 255;
void main()
{
	VideoCapture cap(0);
	Mat img;
	while (true)
	{
		cap.read(img);
	
		imshow("Image", img);
		
	
	

		cvtColor(img, imgHSV, COLOR_BGR2HSV);

		namedWindow("Trackbars", (640, 200));
		createTrackbar("Hue Min", "Trackbars", &hmin, 179);
		createTrackbar("Hue Max", "Trackbars", &hmax, 179);
		createTrackbar("Sat Min", "Trackbars", &smin, 255);
		createTrackbar("Sat Max", "Trackbars", &smax, 255);
		createTrackbar("Val Min", "Trackbars", &vmin, 255);
		createTrackbar("Val Max", "Trackbars", &vmax, 255);

		
		cout << hmin <<" "<< smin<<" " << vmin<<" " << hmax<<" " << smax<<" " << vmax << endl;

		Scalar lower(hmin, smin, vmin);
		Scalar upper(hmax, smax, vmax);
		inRange(imgHSV, lower, upper, mask);

		imshow("Image", img);
		//imshow("Image HSV", imgHSV);
		imshow("Image MASK", mask);
		waitKey(1);
	}
} 

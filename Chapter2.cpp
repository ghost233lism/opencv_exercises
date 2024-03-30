//#include<opencv2/imgcodecs.hpp>
//#include<opencv2/highgui.hpp>
//#include<opencv2/imgproc.hpp>
//#include<bits/stdc++.h>
//using namespace std;
//using namespace cv;
//
//void main()
//{
//	string path = "Resources/Resources/test.png";
//	Mat img = imread(path);
//	Mat imgGray,imgBlur, imgCanny,imgDia,imgErode;
//
//	cvtColor(img, imgGray, COLOR_BGR2GRAY);//灰度
//	GaussianBlur(img, imgBlur, Size(3, 3),3,0);//高斯模糊
//	Canny(imgBlur, imgCanny, 25, 75);//提取边缘
//
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
//	dilate(imgCanny, imgDia, kernel);//扩大
//	erode(imgDia, imgErode, kernel);//减少厚度
//
//	imshow("Image", img);
//	imshow("Image Gray", imgGray);
//	imshow("Image Blur", imgBlur);
//	imshow("Image Canny", imgCanny);
//	imshow("Image Dilation", imgDia);
//	imshow("Image Erode", imgErode);
//	waitKey(0);
//}

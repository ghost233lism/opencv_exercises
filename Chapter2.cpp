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
//	cvtColor(img, imgGray, COLOR_BGR2GRAY);//�Ҷ�
//	GaussianBlur(img, imgBlur, Size(3, 3),3,0);//��˹ģ��
//	Canny(imgBlur, imgCanny, 25, 75);//��ȡ��Ե
//
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
//	dilate(imgCanny, imgDia, kernel);//����
//	erode(imgDia, imgErode, kernel);//���ٺ��
//
//	imshow("Image", img);
//	imshow("Image Gray", imgGray);
//	imshow("Image Blur", imgBlur);
//	imshow("Image Canny", imgCanny);
//	imshow("Image Dilation", imgDia);
//	imshow("Image Erode", imgErode);
//	waitKey(0);
//}

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
//	Mat imgResize,imgCrop;
//	
//	cout << img.size() << endl;
//	resize(img, imgResize, Size(),0.5,0.5);//调整大小
//
//	Rect roi(200, 100, 300, 300);//切割图片
//	imgCrop = img(roi);
//
//	imshow("Image", img);
//	imshow("Image Resize", imgResize);
//	imshow("Image Crop", imgCrop);
//	waitKey(0);
//}

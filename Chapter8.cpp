//#include<opencv2/imgcodecs.hpp>
//#include<opencv2/highgui.hpp>
//#include<opencv2/imgproc.hpp>
//#include<opencv2/objdetect.hpp>
//#include<bits/stdc++.h>
//using namespace std;
//using namespace cv;
//
//
//void main()
//{
//	string path = "Resources/Resources/test.png";
//	Mat img = imread(path);
//
//	CascadeClassifier faceCascade;
//	faceCascade.load("Resources/Resources/haarcascade_frontalface_default.xml");
//	if (faceCascade.empty())
//	{
//		cout << "������" << endl;
//	}
//
//	vector<Rect> faces;
//	faceCascade.detectMultiScale(img, faces, 1.1, 10);
//
//	for (int i = 0; i < faces.size(); i++)
//	{
//		rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);
//	}
//
//	imshow("Image", img);
//	waitKey(0);
//} 
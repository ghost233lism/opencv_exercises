//#include<opencv2/imgcodecs.hpp>
//#include<opencv2/highgui.hpp>
//#include<opencv2/imgproc.hpp>
//#include<bits/stdc++.h>
//using namespace std;
//using namespace cv;
//
//void getContours(Mat imgDil,Mat img)
//{
//	vector<vector<Point>> contours;
//	vector<Vec4i> hierarchy;
//	findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
//	//drawContours(img, contours, -1, Scalar(255, 0, 255), 2);
//
//	for (int i = 0; i < contours.size(); i++)
//	{
//		int area = contourArea(contours[i]);
//		cout << area << endl;
//
//		vector<vector<Point>> conPoly(contours.size());
//		vector<Rect> boundRect(contours.size());
//		string objectType;
//
//		if (area > 1000)
//		{
//			float peri = arcLength(contours[i], true);
//			approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
//			
//			cout << conPoly[i].size() << endl;
//			boundRect[i]=boundingRect(conPoly[i]);
//			
//
//			int objCor = (int)conPoly[i].size();
//
//			if (objCor == 3) { objectType = "Tri"; }
//			if (objCor == 4)
//			{ 
//				float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
//				cout << aspRatio << endl;
//				if (aspRatio > 0.95 && aspRatio < 1.05)
//				{
//					objectType = "Squ";
//				}
//				else
//				{
//					objectType = "Rec";
//				}
//
//
//			}
//			
//
//			if (objCor > 4) { objectType = "Circle"; }
//
//			drawContours(img, conPoly, i, Scalar(255, 0, 255), 1.5);
//			rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
//
//			putText(img, objectType, {boundRect[i].x,boundRect[i].y-5}, FONT_HERSHEY_PLAIN, 1, Scalar(255, 0, 0), 1);
//			
//		}
//	}
//}
//
//Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;
//void main()
//{
//	string path = "Resources/Resources/shapes.png";
//	Mat img = imread(path);
//
//	cvtColor(img, imgGray, COLOR_BGR2GRAY);//�Ҷ�
//	GaussianBlur(imgGray, imgBlur, Size(3, 3),3,0);//��˹ģ��
//	Canny(imgBlur, imgCanny, 25, 75);//��ȡ��Ե
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//	dilate(imgCanny, imgDil, kernel);//����
//
//	getContours(imgDil,img);
//
//	imshow("Image", img);
//	/*imshow("Image Gray", imgGray);
//	imshow("Image Blur", imgBlur);
//	imshow("Image Canny", imgCanny);
//	imshow("Image Dil", imgDil);*/
//	
//	waitKey(0);
//} 
//
//
//
//

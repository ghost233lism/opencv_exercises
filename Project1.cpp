#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<bits/stdc++.h>
using namespace std;
using namespace cv;

Mat img;
vector<vector<int>> newPoints;

vector<vector<int>> myColors{ {109,153,139,179,230,251},//red
							  {47,30,124,68,54,196} };//green

vector<Scalar> myColorValues{ {105,95,246},
							  {168,206,177 } };
Point getContours(Mat imgDil)
{
	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;
	findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
	//drawContours(img, contours, -1, Scalar(255, 0, 255), 2);
	vector<vector<Point>> conPoly(contours.size());
	vector<Rect> boundRect(contours.size());

	Point myPoints(0.0);
	
	for (int i = 0; i < contours.size(); i++)
	{
		int area = contourArea(contours[i]);
		cout << area << endl;

		

		if (area>1000)
		{
			float peri = arcLength(contours[i], true);
			approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);

			cout << conPoly[i].size() << endl;
			boundRect[i] = boundingRect(conPoly[i]);

			myPoints.x = boundRect[i].x + boundRect[i].width / 2;
			myPoints.y = boundRect[i].y;


			drawContours(img, conPoly, i, Scalar(255, 0, 255), 1.5);
			rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);


		}
	}
	return myPoints;
}
void drawOnCan(vector<vector<int>> newPoints, vector<Scalar> myColorValues)
{
	for (int i = 0; i < newPoints.size(); i++)
	{
		circle(img, Point(newPoints[i][0], newPoints[i][1]), 10, myColorValues[newPoints[i][2]], FILLED);
	}
}
void findColor(Mat img)
{
	Mat imgHSV;
	cvtColor(img, imgHSV, COLOR_BGR2HSV);
	for (int i = 0; i < myColors.size(); i++)
	{
		Scalar lower(myColors[i][0], myColors[i][1], myColors[i][2]);
		Scalar upper(myColors[i][3], myColors[i][4], myColors[i][5]);
		Mat mask;
		inRange(imgHSV, lower, upper, mask);
		//imshow(to_string(i), mask);
		getContours(mask);
		Point myPoints = getContours(mask);
		if (myPoints.x != 0 && myPoints.y != 0)
		{
			newPoints.push_back({ myPoints.x,myPoints.y, i });
		}
		
	}
	drawOnCan(newPoints, myColorValues);
	
}





void main()
{
	
	VideoCapture cap(0);
	
	while (true)
	{
		cap.read(img);
		findColor(img);
		

		imshow("Image", img);
		waitKey(1);

	}

}

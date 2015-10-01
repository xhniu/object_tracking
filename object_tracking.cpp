/********************************************************************
	created:	2015/10/01
	created:	1:10:2015   9:25
	filename: 	c:\Users\royal\documents\visual studio 2010\Projects\object_tracking\object_tracking\object_tracking.cpp
	file path:	c:\Users\royal\documents\visual studio 2010\Projects\object_tracking\object_tracking
	file base:	object_tracking
	file ext:	cpp
	author:		xhniu
	
	purpose:	主要是练习一下目标跟踪的方法
	            首先选定的是光流法跟踪,手动选择ＲＯＩ区域
*********************************************************************/
#include "object_tracking.h"

using namespace std;
using namespace cv;

/*************************************************
 * Function: LKOpticalFlowTracking()
 * Description: LK光流法估计
 * Calls: main
 * Called By: none
 * Input: 输入图像是目标文件,彩色的图像
 * Output: none
 * Return: none
 * Author: yghan
 * History: <author> <date>  <desc>
			
 * Others: none
*************************************************/
int LKOpticalFlowTracking(Mat src_image)
{
	if ( NULL != src_image.data )
	{
		printf("src_image data is null");
		return -1;
	}
	namedWindow("src_image");
	imshow("src_image", src_image);
	moveWindow("src_image", 100, 100);
}

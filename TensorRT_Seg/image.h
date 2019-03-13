#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	//���Լ�д�ĺ���������ͷ�ļ�Ҳд�˺��������cpp�ļ�Ҳ���빤����
	//�������ȷ��������϶�����������ļ��У�ȴ��Ȼ����LNK2019����
	//C���Ժ�C++���Ի�࣬��ΪC++֧�ֺ�����������C++���������ɵĿ��ļ��еĺ���������Ŀȫ�ǣ�
	//������� ����c ͷ�ļ���������
#ifndef IMAGE_H
#define IMAGE_H

#include <stdlib.h>
#include <stdio.h>
#include <float.h>
#include <string.h>
#include <math.h>

	typedef struct {
		int w;
		int h;
		int c;
		float *data;
	} image;
	void free_image(image m);
	void show_image(image p, const char *name);
	image make_empty_image(int w, int h, int c);//73
	image make_image(int w, int h, int c);  //71
	void rgbgr_image(image im);
	image copy_image(image p);
	static float get_pixel(image m, int x, int y, int c);
	void constrain_image(image im);
	image resize_image(image im, int w, int h);
	image normal_image(image im);
	image Tranpose(float *prob);
	void flip_image(image a);
	//image ipl_to_image(IplImage* src); //
	//void rgbgr_image(image im);
	//image get_image_from_stream_cpp(CvCapture *cap);

#endif

#ifdef __cplusplus
}
#endif#pragma once


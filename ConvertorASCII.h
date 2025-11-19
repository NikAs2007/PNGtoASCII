#ifndef CONVERTORASCII_H
#define CONVERTORASCII_H

#include "FileManager.h"

#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class ConvertorASCII {
	struct Settings {
		bool stop = false;
		int k = 10;
		double aspect_ratio = 2.5;
	};

	Settings stgs;
	FileManagerBK fm;
	vector<string> ends = { "*.jpg", ".png" };

	int gcd(int a, int b);
	pair<int, int> resize(int width, int height, int k);
	unsigned char ptouc(unsigned char r, unsigned char g, unsigned char b);
	string PNGtoASCII(unsigned char* data, int original_width, int original_height, int width_art, int height_art);
	string remake_console(std::string pixels, double aspect_ratio);
	string converted(string path_);
public:
	void asking();

};


#endif //CONVERTORASCII_H
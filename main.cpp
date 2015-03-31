#include "CImg.h"

using namespace cimg_library;
int main(){
	CImg<double> image("StarWars.bmp");
	CImgDisplay main_disp(image, "StarWars", 0);
	system("PAUSE");
	return 0;
}
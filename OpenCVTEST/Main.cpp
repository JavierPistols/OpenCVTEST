#include <opencv2\opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc, char** argv) {

	//crea una ventana llamada ‘ventana’ de tamaño automático o ajustable
	namedWindow("ventana", CV_WINDOW_AUTOSIZE);

	//Espera a que se presione una tecla
	waitKey(0);

	//destruye la ventana
	destroyWindow("ventana");
}
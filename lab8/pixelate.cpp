/*
  Youssef elsuradi

inverts colors from black to white and vice versa on half the img
*/


#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("outImage.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}
void scale2x2(int img[MAX_H][MAX_W], int out[2*MAX_H][2*MAX_W], int row, int col);

void scale2x2(int img[MAX_H][MAX_W], int out[2*MAX_H][2*MAX_W], int row, int col){
	for (int i = 2*row; i < 2*row + 2; i++ ){
		for (int j = 2*col; j < 2*col + 2; j++){
			out[i][j] = img[row][col];
		}
	}

}
// Part F.
void pixelate2x2(int img[MAX_H][MAX_W], int out[MAX_H][MAX_W], int row, int col){
    int avg = 0;
     for (int i = row; i < row + 2; i++){
        for (int j = col; j < col + 2; j++){
            avg += avg + img[i][j]; // Calculate the sum.
		}
	}
    avg = avg/4;
    for (int i = row; i < row + 2; i++){
        for (int j = col; j < col + 2; j++){
            out [i][j] = avg;
		}
	
	}
}



int main() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];



		// Part E and F
	for (int row = 0; row < h; row++) { 
		for (int col = 0; col < w; col++) {
			//scale2x2(img, out, row, col);
			pixelate2x2(img, out, row, col);

		}
	}      






/*// Part D
	for (int row = 0; row < h; row++) {
		for (int col = 0; col < w; col++) {
			if ( (row == h/4 or row == 3*h/4) and (col >= w/4 and col <= 3*w/4) ){
				out [row] [col] = 255;
			}
			else if ( (col == w/4 or col == 3*w/4) and (row >= h/4 and row <= 3*h/4) ){
				out[row][col] = 255;
			}
			else{
				out [row] [col] = img[row][col];
			}
		}
	}
*/



	/*// Part C
	for(int row = 0; row < h; row++) {
		for (int col = 0; col < w; col++) {
			if ( (row >= h/4 and row <= 3*h/4) and (col >= w/4 and col <= 3*w/4) ){
				out [row] [col] = 255; // Convert the pixel to 'white'.
			}
			else{
				out [row] [col] = img[row][col]; // Keep outImage pixel the same as img.
			}
		}
	} */



	/*// Part B.
	for(int row = 0; row < h; row++) {
		for (int col = 0; col < w; col++) {
			if (col > w/2){
				out[row][col] = 255 - img[ row][col]; // Invert pixel of outImage.
			}
			else{
				out [row][col] = img[row][col]; 
			}
		}
	}

	*/


	/* //part A
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			out[row][col] = 255 - img[row][col];
		}
	}
	*/

	// and save this new image to file "outImage.pgm"
	writeImage(out, h, w);
}

	

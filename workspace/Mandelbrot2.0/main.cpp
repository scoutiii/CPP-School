//This program genreates interesting view and colors of the mandelbrot set
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>
#include "ppmToBmp.hpp"
using namespace std;

//a structure for the rgb colors
struct Color {
    int r;
    int g;
    int b;
};

//a structure for the image configuration
struct MandelbrotConfig {
    int pixels;
    
    long double midX, midY;
    long double axisLen;
    
    double maxIterations;
    
    Color colorOne;
    Color colorTwo;
    Color colorThree;
    
    string outputPPMfile;
    
    long double minX, minY;
    long double maxX, maxY;
    long double pixelSize;
    
    double step_r;
    double step_g;
    double step_b;
    double stepTwo_r;
    double stepTwo_g;
    double stepTwo_b;
    //double stepThree_r;
    //double stepThree_g;
    //double stepThree_b;
};

//reads and makes a mandelbrot config
MandelbrotConfig readConfig(string configFileLocation) {
    MandelbrotConfig fileInput;
    fstream fin(configFileLocation);
    if(!fin) {
        cout << "failed to open" << endl;
    }
    fin >> fileInput.pixels;
    fin >> fileInput.midX >> fileInput.midY;
    fin >> fileInput.axisLen;
    fin >> fileInput.maxIterations;
    //fin >> fileInput.colorOne.r >> fileInput.colorOne.g >> fileInput.colorOne.b;
    //fin >> fileInput.colorTwo.r >> fileInput.colorTwo.g >> fileInput.colorTwo.b;
    //fin >> fileInput.colorThree.r >> fileInput.colorThree.g >> fileInput.colorThree.b;
    fin >> fileInput.outputPPMfile;
    fileInput.minX = fileInput.midX - (fileInput.axisLen * 0.5);
    fileInput.minY = fileInput.midY - (fileInput.axisLen * 0.5);
    fileInput.maxX = fileInput.midX + (fileInput.axisLen * 0.5);
    fileInput.maxY = fileInput.midY + (fileInput.axisLen * 0.5);
    fileInput.pixelSize = fileInput.axisLen/fileInput.pixels;
    /*fileInput.step_r = static_cast<double>(((double)fileInput.colorTwo.r - fileInput.colorOne.r) / fileInput.maxIterations);
    fileInput.step_g = static_cast<double>(((double)fileInput.colorTwo.g - fileInput.colorOne.g) / fileInput.maxIterations);
    fileInput.step_b = static_cast<double>(((double)fileInput.colorTwo.b - fileInput.colorOne.b) / fileInput.maxIterations);
    fileInput.stepTwo_r = static_cast<double>(((double)fileInput.colorThree.r - fileInput.colorOne.r) / fileInput.maxIterations);
    fileInput.stepTwo_g = static_cast<double>(((double)fileInput.colorThree.g - fileInput.colorOne.g) / fileInput.maxIterations);
    fileInput.stepTwo_b = static_cast<double>(((double)fileInput.colorThree.b - fileInput.colorOne.b) / fileInput.maxIterations);*/
    //fileInput.step_r = static_cast<double>(((double)fileInput.colorTwo.r - fileInput.colorOne.r) / fileInput.maxIterations);
    //fileInput.step_g = static_cast<double>(((double)fileInput.colorTwo.g - fileInput.colorOne.g) / fileInput.maxIterations);
    //fileInput.step_b = static_cast<double>(((double)fileInput.colorTwo.b - fileInput.colorOne.b) / fileInput.maxIterations);
    //fileInput.stepTwo_r = static_cast<double>(((double)fileInput.colorThree.r - fileInput.colorTwo.r) / fileInput.maxIterations);
   // fileInput.stepTwo_g = static_cast<double>(((double)fileInput.colorThree.g - fileInput.colorTwo.g) / fileInput.maxIterations);
    //fileInput.stepTwo_b = static_cast<double>(((double)fileInput.colorThree.b - fileInput.colorTwo.b) / fileInput.maxIterations);
    
    
    fin.close();
    return fileInput;
    
}

//helper function, counts/determines iterations
int countIterations (MandelbrotConfig config, int row, int col) {
    double complexAxisLength = config.axisLen;
    double imageSizePixels = config.pixels;
    double pixelSize = complexAxisLength/imageSizePixels;
    double xComplexCenter = config.midX;
    double yComplexCenter = config.midY;
    int MAX_ITERATIONS = config.maxIterations;
    double x0 = config.minX + col * pixelSize;
    double y0 = config.maxY - row * pixelSize;
    
    double x = 0.0;
    double y = 0.0;
    int iterations = 0;
    while(x*x + y*y < 2*2 and iterations < MAX_ITERATIONS) {
        double xTemp = x*x - y*y + x0;
        y = 2*x*y + y0;
        x = xTemp;
        iterations += 1;
    }
    return iterations;
}

//figures which color 
Color getPixelColor (MandelbrotConfig config, int iterations) {
    Color tempConfig;
    long double t = iterations/config.maxIterations;
    /*if(iterations >= config.maxIterations / 2) {
        tempConfig.r = config.colorOne.r + (config.stepTwo_r * iterations);
        tempConfig.g = config.colorOne.g + (config.stepTwo_g * iterations);
        tempConfig.b = config.colorOne.b + (config.stepTwo_b * iterations);
    }
    else {
        tempConfig.r = config.colorOne.r + (config.step_r * iterations);
        tempConfig.g = config.colorOne.g + (config.step_g * iterations);
        tempConfig.b = config.colorOne.b + (config.step_b * iterations);
    }*/
    tempConfig.r = ((int)(8.5*(1-t)*(1-t)*(1-t)*t*255));//not actual correct r step
  	tempConfig.g = ((int)(9*(1-t)*t*t*t*255)); //not actual correct g step
  	tempConfig.b = ((int)(15*(1-t)*(1-t)*t*t*255)); //not actual correct b step
  	/*if(iterations >= config.maxIterations/2) {
  	    tempConfig.r = config.colorTwo.r + (config.stepTwo_r * iterations); 
  	    tempConfig.g = config.colorTwo.g + (config.stepTwo_g * iterations); 
  	    tempConfig.b = config.colorTwo.b + (config.stepTwo_b * iterations); 
  	}
  	else {
  	    tempConfig.r = config.colorOne.r + (config.step_r * iterations);
  	    tempConfig.g = config.colorOne.g + (config.step_g * iterations);
  	    tempConfig.b = config.colorOne.b + (config.step_b * iterations);
  	}*/
    
    return tempConfig;
    
}

//draws mandelbrot
bool drawMandelbrot (MandelbrotConfig config) {
    ofstream fout(config.outputPPMfile);
    fout << "P3" << endl;
    fout << config.pixels << " " << config.pixels << endl;
    fout << 255 << endl;
    for(int row=0; row<config.pixels; ++row) {
        for(int col=0; col<config.pixels; ++col) {
            double iterations = countIterations(config, row, col);
            Color pixelColor = getPixelColor(config, iterations);
            fout << left << setw(4) << static_cast<int>(pixelColor.r);
            fout << left << setw(4) << static_cast<int>(pixelColor.g);
            fout << left << setw(6) << static_cast<int>(pixelColor.b);
        }
        fout << endl;
    }
    fout.close();
    return true;
}

int main() {
    cout << "Welcome to the mandelbrot image generator!" << endl;
    cout << "please enter the name of a file that has proper formating." << endl;
    MandelbrotConfig config;
    string fileName;
    cin >> fileName;
    config = readConfig(fileName);
    if(drawMandelbrot(config)) {
        ppmToBmp(config.outputPPMfile);
    }
    else {
        return 1;
    }

    return 0;
}
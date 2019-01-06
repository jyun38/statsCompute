// Libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include "Matrix615.h"
#include <Eigen/Core>
#include <Eigen/SVD>

// Global stuffs
#include "constants.h"

// Classes
#include "GlrmClass.h"
#include "QRPcaClass.h"
#include "QSPcaClass.h"
#include "RSPcaClass.h"

using namespace std;
using namespace Eigen;

// Author: Zhihao Huang
// Create Time: Nov. 2018
// Description: This is the main function of the glrm. User can choose to 
// input the file directory, and the methods of low rank approaches. A user
// menu is (will be) included as well.

int main(){

  string fileDirectory = "test.csv";
  string outDirectory = "OutY.csv";
  RSPcaClass test(fileDirectory);

  test.getSolution();

  // test.writeY(outDirectory);
  test.writeY(outDirectory);
  return 0;
}
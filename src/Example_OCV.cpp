// Simple OpenCV Example......
#include <stdlib.h>  
#include <opencv2/opencv.hpp> 

// Define the namespaces to use......
using namespace std; 
using namespace cv; 

//==============================================================================
// Main function to the executable
int main(int argc, char** argv)
{

  // Create a 3x3 float Matrix
  Mat X(3, 3, CV_32F);

  // Initialize with random values
  randn(X, Scalar(0), Scalar(5));

  // Show the output
  cout << X << endl;

  // Now lets explore how data is written out
  // what do you notice about the ordering???
  float *ptr = (float *)X.data; 
  for(int i=0; i<X.total(); i++) {
    cout << *ptr++ << endl; 
  }
  cout << endl;

}

# Example_OCV

Simply showing how to build an executable on the command line for OpenCV. Demonstrates how numbers in the Mat Class are row ordered. Assuming everyone is using a MAC here. 

On a MAC you may need to modify the OPENCV_PATH variable to your current path for OpenCV (I am assuming OpenCV 2.4.XXXX). 

For another operating system (Linux, Windows) you will ALSO need to rename Makefile_Darwin to Makefile_$(OS) where $OS denotes whatever operating system you are using. You can determine $OS that by simply typing at the terminal on either Mac, Linux or Cygwin (Windows),  

$ uname -s

To build simply bring up a terminal on either Mac, Linux or Cygwin (Windows) and type, 

$ make

You should find the executable Detect_Lena now in the directory. At the command line simple type, 

$ ./Example_OCV

To run the program. 
/*
 * SimpleDraw.h
 *
 * Author: Samuel R. Buss
 *
 * Software accompanying the book
 *		3D Computer Graphics: A Mathematical Introduction with OpenGL,
 *		by S. Buss, Cambridge University Press, 2003.
 *
 * Software is "as-is" and carries no warranty.  It may be used without
 *   restriction, but if you modify it, please change the filenames to
 *   prevent confusion between different versions.
 * Bug reports: Sam Buss, sbuss@ucsd.edu.
 * Web page: http://math.ucsd.edu/~sbuss/MathCG
 */

// Function prototypes for SimpleDraw.c

void myKeyboardFunc();
bool PressSpacebar(GLFWwindow * window);

void drawScene(void);

void initRendering();
void resizeWindow(int w, int h);

void Exercise3();
void Exercise5();

#include<windows.h>
#include <GL\glut.h>
#include<iostream>
#include <time.h>
#include <GL/gl.h>    // Header File For The OpenGL32 Library
#include <GL/glu.h>
#include <math.h>
 int speed =1;
 int day=1;

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_LINES);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


	int i=speed,j;
	int scase=0;

//float _move =10.0;
void myDisplay(void)
{

    if(day==1)
    {

    //the line
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 160);
	glVertex2i(00, 161);
	glVertex2i(650, 161);
	glVertex2i(650, 160);
	glEnd();

	//sky
	glColor3f(0.7, 0.8, 0.9);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0, 720);
	glVertex2i(0, 170);
	glVertex2i(1024, 170);
	glVertex2i(1024, 720);
	glEnd();

	//1st building
	glColor3f(0.0, 0.0, 0.2);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 161);
	glVertex2i(60, 161);
	glVertex2i(60, 361);
	glVertex2i(00, 361);
	glEnd();

	//rooftop of biulding 1
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 361);
	glVertex2i(60, 361);
	glVertex2i(60, 371);
	glVertex2i(10, 371);
	glEnd();

	//glasses of building1
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 165);
	glVertex2i(56, 165);
	glVertex2i(56, 357);
	glVertex2i(04, 357);
	glEnd();

	//glasses of building 1
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04,175);
	glVertex2i(56, 175);
	glVertex2i(56, 177);
	glVertex2i(04, 177);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 187);
	glVertex2i(56, 189);
	glVertex2i(56, 187);
	glVertex2i(04, 189);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 199);
	glVertex2i(56, 201);
	glVertex2i(56, 199);
	glVertex2i(04, 201);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 211);
	glVertex2i(56, 213);
	glVertex2i(56, 211);
	glVertex2i(04, 213);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 223);
	glVertex2i(56, 225);
	glVertex2i(56, 223);
	glVertex2i(04, 225);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 235);
	glVertex2i(56, 237);
	glVertex2i(56, 235);
	glVertex2i(04, 237);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 247);
	glVertex2i(56, 249);
	glVertex2i(56, 247);
	glVertex2i(04, 249);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 259);
	glVertex2i(56, 261);
	glVertex2i(56, 259);
	glVertex2i(04, 261);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 271);
	glVertex2i(56, 273);
	glVertex2i(56, 271);
	glVertex2i(04, 273);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 283);
	glVertex2i(56, 285);
	glVertex2i(56, 283);
	glVertex2i(04, 285);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 295);
	glVertex2i(56, 297);
	glVertex2i(56, 295);
	glVertex2i(04, 297);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 307);
	glVertex2i(56, 309);
	glVertex2i(56, 307);
	glVertex2i(04, 309);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 319);
	glVertex2i(56, 321);
	glVertex2i(56, 319);
	glVertex2i(04, 321);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 331);
	glVertex2i(56, 333);
	glVertex2i(56, 331);
	glVertex2i(04, 333);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 343);
	glVertex2i(56, 345);
	glVertex2i(56, 343);
	glVertex2i(04, 345);
	glEnd();




	//light 1
	glColor3f(0.2, 0.2, 0.2);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(32, 158);
	glVertex2i(36, 158);
	glVertex2i(36, 240);
	glVertex2i(32, 240);
	glEnd();


    glColor3f(0.2, 0.2, 0.2);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(27, 235);
	glVertex2i(39, 235);
	glVertex2i(39, 243);
	glVertex2i(27, 243);
	glEnd();

    //glColor4f(0.9, 0.5, 0.9,0.4);
	//glPointSize(4.0);
	//glBegin(GL_QUADS);
	//glVertex2i(05, 150);
	//glVertex2i(65, 150);
	//glVertex2i(35, 235);
	//glVertex2i(32, 235);
    //glEnd();

	//building 2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(60, 161);
	glVertex2i(150, 161);
	glVertex2i(150, 461);
	glVertex2i(60, 461);
	glEnd();

	//rooftop of building 2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(60, 461);
	glVertex2i(150, 461);
	glVertex2i(160, 471);
	glVertex2i(70, 471);
	glEnd();

	//side view of building 2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(150, 461);
	glVertex2i(160, 471);
	glVertex2i(160, 171);
	glVertex2i(150, 161);
	glEnd();

	//side glasses
	glColor3f(0.70, 0.8, 0.9);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 459);
	glVertex2i(158, 469);
	glVertex2i(158, 159);
	glVertex2i(152, 169);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 415);
	glVertex2i(158, 425);
	glVertex2i(158, 429);
	glVertex2i(152, 419);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 430);
	glVertex2i(158, 440);
	glVertex2i(158, 444);
	glVertex2i(152, 434);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 443);
	glVertex2i(158, 453);
	glVertex2i(158, 457);
	glVertex2i(152, 447);
	glEnd();

	//glassess of building 2
	glColor3f(0.70, 0.80, 0.90);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 165);
	glVertex2i(146, 165);
	glVertex2i(146, 457);
	glVertex2i(64, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 175);
	glVertex2i(146, 175);
	glVertex2i(146, 177);
	glVertex2i(64, 177);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 187);
	glVertex2i(146, 187);
	glVertex2i(146, 189);
	glVertex2i(64, 189);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 199);
	glVertex2i(146, 199);
	glVertex2i(146, 201);
	glVertex2i(64, 201);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 211);
	glVertex2i(146, 211);
	glVertex2i(146, 213);
	glVertex2i(64, 213);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 223);
	glVertex2i(146, 223);
	glVertex2i(146, 225);
	glVertex2i(64, 225);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 235);
	glVertex2i(146, 235);
	glVertex2i(146, 237);
	glVertex2i(64, 237);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 247);
	glVertex2i(146, 247);
	glVertex2i(146, 249);
	glVertex2i(64, 249);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 259);
	glVertex2i(146, 259);
	glVertex2i(146, 261);
	glVertex2i(64, 261);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 271);
	glVertex2i(146, 271);
	glVertex2i(146, 273);
	glVertex2i(64, 273);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 283);
	glVertex2i(146, 283);
	glVertex2i(146, 285);
	glVertex2i(64, 285);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 295);
	glVertex2i(146, 295);
	glVertex2i(146, 297);
	glVertex2i(64, 297);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 307);
	glVertex2i(146, 307);
	glVertex2i(146, 309);
	glVertex2i(64, 309);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 319);
	glVertex2i(146, 319);
	glVertex2i(146, 321);
	glVertex2i(64, 321);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 331);
	glVertex2i(146, 331);
	glVertex2i(146, 333);
	glVertex2i(64, 333);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 343);
	glVertex2i(146, 343);
	glVertex2i(146, 345);
	glVertex2i(64, 345);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 355);
	glVertex2i(146, 355);
	glVertex2i(146, 357);
	glVertex2i(64, 357);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 367);
	glVertex2i(146, 367);
	glVertex2i(146, 369);
	glVertex2i(64, 369);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 379);
	glVertex2i(146, 379);
	glVertex2i(146, 381);
	glVertex2i(64, 381);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 391);
	glVertex2i(146, 391);
	glVertex2i(146, 393);
	glVertex2i(64, 393);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 403);
	glVertex2i(146, 403);
	glVertex2i(146, 405);
	glVertex2i(64, 405);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 415);
	glVertex2i(146, 415);
	glVertex2i(146, 417);
	glVertex2i(64, 417);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 427);
	glVertex2i(146, 427);
	glVertex2i(146, 429);
	glVertex2i(64, 429);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 439);
	glVertex2i(146, 439);
	glVertex2i(146, 441);
	glVertex2i(64, 441);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 451);
	glVertex2i(146, 451);
	glVertex2i(146, 453);
	glVertex2i(64, 453);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(74, 155);
	glVertex2i(74, 457);
	glVertex2i(76, 155);
	glVertex2i(76, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(84, 155);
	glVertex2i(84, 457);
	glVertex2i(86, 155);
	glVertex2i(86, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(94, 155);
	glVertex2i(94, 457);
	glVertex2i(96, 155);
	glVertex2i(96, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(104, 155);
	glVertex2i(104, 457);
	glVertex2i(106, 155);
	glVertex2i(106, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(114, 155);
	glVertex2i(114, 457);
	glVertex2i(116, 155);
	glVertex2i(116, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(124, 155);
	glVertex2i(124, 457);
	glVertex2i(126, 155);
	glVertex2i(126, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(134, 155);
	glVertex2i(134, 457);
	glVertex2i(136, 155);
	glVertex2i(136, 457);
	glEnd();

	//building3
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(150, 161);
	glVertex2i(150, 407);
	glVertex2i(220, 457);
	glVertex2i(220, 161);
	glEnd();

	//glasses of building 3
	glColor3f(0.80, 0.70, 0.90);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 161);
	glVertex2i(152, 405);
	glVertex2i(218, 452);
	glVertex2i(218, 161);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(162, 161);
	glVertex2i(164,161 );
	glVertex2i(164, 413);
	glVertex2i(162, 413);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(174, 161);
	glVertex2i(176, 161);
	glVertex2i(176, 423);
	glVertex2i(174, 422);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(186, 161);
	glVertex2i(188, 161);
	glVertex2i(188, 433);
	glVertex2i(186, 433);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(198, 161);
	glVertex2i(201, 161);
	glVertex2i(198, 440);
	glVertex2i(201, 440);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(210, 161);
	glVertex2i(212, 161);
	glVertex2i(212, 447);
	glVertex2i(210, 447);
	glEnd();

	//building 4
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(220,161);
	glVertex2i(280, 161);
	glVertex2i(280, 400);
	glVertex2i(250, 450);
	glVertex2i(220, 400);
	glEnd();

	//clock on building 3
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(222, 398);
	glVertex2i(222, 348);
	glVertex2i(278, 348);
	glVertex2i(278, 398);
	glEnd();


	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(222, 338);
	glVertex2i(222, 161);
	glVertex2i(232, 161);
	glVertex2i(232, 338);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(278, 338);
	glVertex2i(278, 161);
	glVertex2i(268, 161);
	glVertex2i(268, 338);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(244, 338);
	glVertex2i(244, 161);
	glVertex2i(256, 161);
	glVertex2i(256, 338);
	glEnd();

	//building 5
	glColor3f(1.0, 0.50, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 161);
	glVertex2i(350, 161);
	glVertex2i(350, 450);
	glVertex2i(280, 450);
	glEnd();

	//rooftop of 5
	glColor3f(0.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 450);
	glVertex2i(350, 450);
	glVertex2i(360, 460);
	glVertex2i(290, 460);
	glEnd();

	//side view of 5
	glColor3f(0.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(350, 161);
	glVertex2i(360, 161);
	glVertex2i(360, 460);
	glVertex2i(350, 450);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(352, 163);
	glVertex2i(358, 163);
	glVertex2i(358, 455);
	glVertex2i(352, 448);
	glEnd();

	//glassess of building 5
	glColor3f(0.70, 0.70, 0.90);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(282, 163);
	glVertex2i(348, 163);
	glVertex2i(348, 448);
	glVertex2i(282, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(292, 163);
	glVertex2i(294, 163);
	glVertex2i(294, 448);
	glVertex2i(292, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(302, 163);
	glVertex2i(304, 163);
	glVertex2i(304, 448);
	glVertex2i(302, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(314, 163);
	glVertex2i(316, 163);
	glVertex2i(316, 448);
	glVertex2i(314, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(326, 163);
	glVertex2i(328, 163);
	glVertex2i(328, 448);
	glVertex2i(326, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(338, 163);
	glVertex2i(340, 163);
	glVertex2i(340, 448);
	glVertex2i(338, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 171);
	glVertex2i(280, 173);
	glVertex2i(350, 173);
	glVertex2i(350, 171);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 183);
	glVertex2i(280, 185);
	glVertex2i(350, 185);
	glVertex2i(350, 183);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 195);
	glVertex2i(280, 197);
	glVertex2i(350, 197);
	glVertex2i(350, 195);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 207);
	glVertex2i(280, 209);
	glVertex2i(350, 209);
	glVertex2i(350, 207);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 219);
	glVertex2i(280, 221);
	glVertex2i(350, 221);
	glVertex2i(350, 219);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 231);
	glVertex2i(280, 233);
	glVertex2i(350, 233);
	glVertex2i(350, 231);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 243);
	glVertex2i(280, 245);
	glVertex2i(350, 245);
	glVertex2i(350, 243);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 255);
	glVertex2i(280, 257);
	glVertex2i(350, 257);
	glVertex2i(350, 255);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 267);
	glVertex2i(280, 269);
	glVertex2i(350, 269);
	glVertex2i(350, 267);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 279);
	glVertex2i(280, 281);
	glVertex2i(350, 281);
	glVertex2i(350, 279);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 291);
	glVertex2i(280, 293);
	glVertex2i(350, 293);
	glVertex2i(350, 291);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 301);
	glVertex2i(280, 303);
	glVertex2i(350, 303);
	glVertex2i(350, 301);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 313);
	glVertex2i(280, 315);
	glVertex2i(350, 315);
	glVertex2i(350, 313);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 325);
	glVertex2i(280, 327);
	glVertex2i(350, 327);
	glVertex2i(350, 325);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 337);
	glVertex2i(280, 339);
	glVertex2i(350, 339);
	glVertex2i(350, 337);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 349);
	glVertex2i(280, 351);
	glVertex2i(350, 351);
	glVertex2i(350, 349);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 361);
	glVertex2i(280, 363);
	glVertex2i(350, 363);
	glVertex2i(350, 361);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 373);
	glVertex2i(280, 375);
	glVertex2i(350, 375);
	glVertex2i(350, 373);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 385);
	glVertex2i(280, 387);
	glVertex2i(350, 387);
	glVertex2i(350, 385);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 397);
	glVertex2i(280, 399);
	glVertex2i(350, 399);
	glVertex2i(350, 397);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 409);
	glVertex2i(280, 411);
	glVertex2i(350, 411);
	glVertex2i(350, 409);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 421);
	glVertex2i(280, 423);
	glVertex2i(350, 423);
	glVertex2i(350, 421);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 433);
	glVertex2i(280, 435);
	glVertex2i(350, 435);
	glVertex2i(350, 433);
	glEnd();

	//building 6
	glColor3f(0.70, 0.5, 0.90);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(350, 161);
	glVertex2i(550, 161);
	glVertex2i(550, 350);
	glVertex2i(450, 400);
	glVertex2i(350, 350);
	glEnd();

	//the rooftop of 6
	glColor3f(0.70, 0.60, 0.70);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(354, 348);
	glVertex2i(546, 348);
	glVertex2i(450, 396);
	glEnd();

	//pillars of building 6
	glColor3f(0.40, 0.30, 0.40);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(375, 161);
	glVertex2i(385, 161);
	glVertex2i(385, 350);
	glVertex2i(375, 350);
	glEnd();

	glColor3f(0.40, 0.30, 0.40);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(525, 161);
	glVertex2i(515, 161);
	glVertex2i(515, 350);
	glVertex2i(525, 350);
	glEnd();

	//gate of building 6
	glColor3f(0.50, 0.50, 0.50);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(435, 161);
	glVertex2i(465, 161);
	glVertex2i(465, 200);
	glVertex2i(435, 200);
	glEnd();


	//light 2
	glColor3f(0.2, 0.2, 0.2);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(415, 158);
	glVertex2i(419, 158);
	glVertex2i(419, 240);
	glVertex2i(415, 240);
	glEnd();


    glColor3f(0.2, 0.2, 0.2);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(411, 235);
	glVertex2i(423, 235);
	glVertex2i(423, 243);
	glVertex2i(411, 243);
	glEnd();

    //glColor4f(0.9, 0.5, 0.9,0.4);
	//glPointSize(4.0);
	//glBegin(GL_QUADS);
	//glVertex2i(385, 150);
	//glVertex2i(452, 150);
	//glVertex2i(418, 235);
	//glVertex2i(416, 235);
    //glEnd();


	//building 7
	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(550, 161);
	glVertex2i(650, 161);
	glVertex2i(650, 350);
	glVertex2i(550, 400);
	glEnd();

	//rooftop of 7
	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(550, 400);
	glVertex2i(570, 420);
	glVertex2i(650, 370);
	glVertex2i(550, 70);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(554, 404);
	glVertex2i(574, 416);
	glVertex2i(646, 366);
	glVertex2i(546, 66);
	glEnd();

	//glasses of building 7
	glColor3f(0.70, 0.60, 0.70);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(554, 161);
	glVertex2i(646, 161);
	glVertex2i(646, 346);
	glVertex2i(554, 390);
	glEnd();

	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(564, 161);
	glVertex2i(566, 161);
	glVertex2i(566, 392);
	glVertex2i(564, 392);
	glEnd();

	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(576, 161);
	glVertex2i(578, 161);
	glVertex2i(578, 384);
	glVertex2i(576, 384);
	glEnd();

	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(588, 161);
	glVertex2i(590, 161);
	glVertex2i(590, 376);
	glVertex2i(588, 376);
	glEnd();

	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(600, 161);
	glVertex2i(602, 161);
	glVertex2i(602, 368);
	glVertex2i(600, 368);
	glEnd();

	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(612, 161);
	glVertex2i(614, 161);
	glVertex2i(614, 360);
	glVertex2i(612, 360);
	glEnd();

	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(624, 161);
	glVertex2i(626, 161);
	glVertex2i(626, 352);
	glVertex2i(624, 352);
	glEnd();


	//the road


	glPushMatrix();


	glColor3f(0.25, 0.25, 0.25);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0, 110);
	glVertex2i(650, 110);
	glVertex2i(650, 160);
	glVertex2i(0, 160);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(50, 133);
	glVertex2i(100, 133);
	glVertex2i(100, 136);
	glVertex2i(50, 136);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(150, 133);
	glVertex2i(200, 133);
	glVertex2i(200, 136);
	glVertex2i(150, 136);




	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(250, 133);
	glVertex2i(300, 133);
	glVertex2i(300, 136);
	glVertex2i(250, 136);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(350, 133);
	glVertex2i(400, 133);
	glVertex2i(400, 136);
	glVertex2i(350, 136);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(450, 133);
	glVertex2i(500, 133);
	glVertex2i(500, 136);
	glVertex2i(450, 136);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(550, 133);
	glVertex2i(600, 133);
	glVertex2i(600, 136);
	glVertex2i(550, 136);






	//gari...up..2nd..body



	glColor3f(0.0, 0.60, 0.9);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(550-i, 150);
	glVertex2i(635-i, 150);
	glVertex2i(635-i, 170);
	glVertex2i(550-i, 170);


	// car up 2nd roof

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(565-i, 170);
	glVertex2i(625-i, 170);
	glVertex2i(615-i, 185);
	glVertex2i(575-i, 185);

	//glass

	glColor3f(0.70, 0.70, 0.90);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(569-i, 173);
	glVertex2i(621-i, 173);
	glVertex2i(611-i, 182);
	glVertex2i(579-i, 182);

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(597-i, 170);
	glVertex2i(593-i, 170);
	glVertex2i(593-i, 185);
	glVertex2i(597-i, 185);

	//chaka..1
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(570-i, 155);
	glVertex2i(580-i, 155);
	glVertex2i(580-i, 145);
	glVertex2i(570-i, 145);

 //chaka..2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(610-i, 155);
	glVertex2i(620-i, 155);
	glVertex2i(620-i, 145);
	glVertex2i(610-i, 145);

//gari...up..1st..body

	glColor3f(0.0, 0.20, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(95-i, 150);
	glVertex2i(180-i, 150);
	glVertex2i(180-i, 170);
	glVertex2i(95-i, 170);

//car up 1st roof

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(110-i, 170);
	glVertex2i(170-i, 170);
	glVertex2i(160-i, 185);
	glVertex2i(120-i, 185);

	//glass


	glColor3f(0.70, 0.70, 0.90);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(114-i, 173);
	glVertex2i(166-i, 173);
	glVertex2i(156-i, 182);
	glVertex2i(124-i, 182);

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(138-i, 170);
	glVertex2i(142-i, 170);
	glVertex2i(142-i, 185);
	glVertex2i(138-i, 185);

	//chaka..1
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(115-i, 155);
	glVertex2i(125-i, 155);
	glVertex2i(125-i, 145);
	glVertex2i(115-i, 145);

 //chaka..2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(155-i, 155);
	glVertex2i(165-i, 155);
	glVertex2i(165-i, 145);
	glVertex2i(155-i, 145);


	//gari..1st..down..body
	glColor3f(0.0, 0.80, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0+i, 120);
	glVertex2i(85+i, 120);
	glVertex2i(85+i, 140);
	glVertex2i(0+i, 140);

//1st car roof

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(10+i, 140);
	glVertex2i(70+i, 140);
	glVertex2i(60+i, 155);
	glVertex2i(20+i, 155);

	//glass


	glColor3f(0.70, 0.70, 0.90);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(14+i, 143);
	glVertex2i(66+i, 143);
	glVertex2i(56+i, 153);
	glVertex2i(24+i, 153);

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(38+i, 140);
	glVertex2i(42+i, 140);
	glVertex2i(42+i, 155);
	glVertex2i(38+i, 155);

	//chaka..1
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(15+i, 115);
	glVertex2i(25+i, 115);
	glVertex2i(25+i, 125);
	glVertex2i(15+i, 125);

 //chaka..2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(55+i, 115);
	glVertex2i(65+i, 115);
	glVertex2i(65+i, 125);
	glVertex2i(55+i, 125);


	//bus
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(300+i, 120);
	glVertex2i(200+i, 120);
	glVertex2i(200+i, 160);
	glVertex2i(300+i, 160);

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(290+i, 138);
	glVertex2i(250+i, 138);
	glVertex2i(250+i, 148);
	glVertex2i(290+i, 148);

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(210+i, 138);
	glVertex2i(240+i, 138);
	glVertex2i(240+i, 148);
	glVertex2i(210+i, 148);

	//bus chaka
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280+i, 125);
	glVertex2i(270+i, 125);
	glVertex2i(270+i, 115);
	glVertex2i(280+i, 115);

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(230+i, 125);
	glVertex2i(220+i, 125);
	glVertex2i(220+i, 115);
	glVertex2i(230+i, 115);



	//gari..2nd..body
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(450+i, 120);
	glVertex2i(535+i, 120);
	glVertex2i(535+i, 140);
	glVertex2i(450+i, 140);

//1st car roof

	glColor3f(1.0, 0.80, 0.30);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(460+i, 140);
	glVertex2i(520+i, 140);
	glVertex2i(510+i, 155);
	glVertex2i(470+i, 155);

	//glass


	glColor3f(0.70, 0.70, 0.90);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(464+i, 143);
	glVertex2i(516+i, 143);
	glVertex2i(506+i, 153);
	glVertex2i(474+i, 153);

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(488+i, 140);
	glVertex2i(492+i, 140);
	glVertex2i(492+i, 155);
	glVertex2i(488+i, 155);

	//chaka..1
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(465+i, 115);
	glVertex2i(475+i, 115);
	glVertex2i(475+i, 125);
	glVertex2i(465+i, 125);

 //chaka..2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(505+i, 115);
	glVertex2i(515+i, 115);
	glVertex2i(515+i, 125);
	glVertex2i(505+i, 125);


	glEnd();





	//lowest line
	glColor3f(0.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0, 108);
	glVertex2i(650, 108);
	glVertex2i(650, 110);
	glVertex2i(0, 110);

	glEnd();

	//lake
	glColor3f(0.50, 0.60, 0.90);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 108);
	glVertex2i(00, 00);
	glVertex2i(650, 00);
	glVertex2i(650, 108);
	glEnd();



		// brick wall
	glColor3f(0.1, 0.1372550, 0.1372550);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 111);
	glVertex2i(00, 90);
	glVertex2i(650, 90);
	glVertex2i(650, 111);
	glEnd();

	glColor3f(0.5568630, 0.1372550, 0.1372550);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 90);
	glVertex2i(00, 67);
	glVertex2i(650, 67);
	glVertex2i(650, 90);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 111);
	glVertex2i(00, 109);
	glVertex2i(650, 109);
	glVertex2i(650, 111);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 92);
	glVertex2i(00, 90);
	glVertex2i(650, 90);
	glVertex2i(650, 92);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 111);
	glVertex2i(00, 90);
	glVertex2i(02, 90);
	glVertex2i(02, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(65, 111);
	glVertex2i(65, 90);
	glVertex2i(67, 90);
	glVertex2i(67, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(132, 111);
	glVertex2i(132, 90);
	glVertex2i(134, 90);
	glVertex2i(134, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(199, 111);
	glVertex2i(199, 90);
	glVertex2i(201, 90);
	glVertex2i(201, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(266, 111);
	glVertex2i(266, 90);
	glVertex2i(268, 90);
	glVertex2i(268, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(333, 111);
	glVertex2i(333, 90);
	glVertex2i(335, 90);
	glVertex2i(335, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(400, 111);
	glVertex2i(400, 90);
	glVertex2i(402, 90);
	glVertex2i(402, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(467, 111);
	glVertex2i(467, 90);
	glVertex2i(469, 90);
	glVertex2i(469, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(534, 111);
	glVertex2i(534, 90);
	glVertex2i(536, 90);
	glVertex2i(536, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(601, 111);
	glVertex2i(601, 90);
	glVertex2i(603, 90);
	glVertex2i(603, 111);
	glEnd();



	//lake

	glColor4f(0.0, 0.5, 0.80, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 95);
	glVertex2i(00, 00);
	glVertex2i(650, 00);
	glVertex2i(650, 95);
	glEnd();



	//nowka body


	glColor3f(0.0, 0.40, 0.9);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0+i, 40);
	glVertex2i(140+i, 40);
	glVertex2i(120+i, 20);
	glVertex2i(20+i, 20);
//roof
	glColor3f(1.0, 0.30, 0.80);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(30+i, 55);
	glVertex2i(110+i, 55);
	glVertex2i(110+i, 40);
	glVertex2i(30+i, 40);



	//2nd nowka
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(650-i, 80);
	glVertex2i(510-i, 80);
	glVertex2i(530-i, 60);
	glVertex2i(630-i, 60);

//roof
	glColor3f(1.0, 01.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(530-i, 80);
	glVertex2i(630-i, 80);
	glVertex2i(630-i, 95);
	glVertex2i(530-i, 95);



	glEnd();
	glPopMatrix();


	glFlush();




       }


    else
    {
        //the line
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 160);
	glVertex2i(00, 161);
	glVertex2i(650, 161);
	glVertex2i(650, 160);
	glEnd();

	//sky
	glColor3f(0.0, 0.0, 0.1);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0, 720);
	glVertex2i(0, 170);
	glVertex2i(1024, 170);
	glVertex2i(1024, 720);
	glEnd();

	//1st building
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 161);
	glVertex2i(60, 161);
	glVertex2i(60, 361);
	glVertex2i(00, 361);
	glEnd();

	//rooftop of biulding 1
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 361);
	glVertex2i(60, 361);
	glVertex2i(60, 371);
	glVertex2i(10, 371);
	glEnd();

	//glasses of building1
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 165);
	glVertex2i(56, 165);
	glVertex2i(56, 357);
	glVertex2i(04, 357);
	glEnd();

	//glasses of building 1
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04,175);
	glVertex2i(56, 175);
	glVertex2i(56, 177);
	glVertex2i(04, 177);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 187);
	glVertex2i(56, 189);
	glVertex2i(56, 187);
	glVertex2i(04, 189);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 199);
	glVertex2i(56, 201);
	glVertex2i(56, 199);
	glVertex2i(04, 201);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 211);
	glVertex2i(56, 213);
	glVertex2i(56, 211);
	glVertex2i(04, 213);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 223);
	glVertex2i(56, 225);
	glVertex2i(56, 223);
	glVertex2i(04, 225);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 235);
	glVertex2i(56, 237);
	glVertex2i(56, 235);
	glVertex2i(04, 237);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 247);
	glVertex2i(56, 249);
	glVertex2i(56, 247);
	glVertex2i(04, 249);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 259);
	glVertex2i(56, 261);
	glVertex2i(56, 259);
	glVertex2i(04, 261);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 271);
	glVertex2i(56, 273);
	glVertex2i(56, 271);
	glVertex2i(04, 273);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 283);
	glVertex2i(56, 285);
	glVertex2i(56, 283);
	glVertex2i(04, 285);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 295);
	glVertex2i(56, 297);
	glVertex2i(56, 295);
	glVertex2i(04, 297);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 307);
	glVertex2i(56, 309);
	glVertex2i(56, 307);
	glVertex2i(04, 309);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 319);
	glVertex2i(56, 321);
	glVertex2i(56, 319);
	glVertex2i(04, 321);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 331);
	glVertex2i(56, 333);
	glVertex2i(56, 331);
	glVertex2i(04, 333);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(04, 343);
	glVertex2i(56, 345);
	glVertex2i(56, 343);
	glVertex2i(04, 345);
	glEnd();


	//light 1
	glColor3f(0.2, 0.2, 0.2);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(32, 158);
	glVertex2i(36, 158);
	glVertex2i(36, 240);
	glVertex2i(32, 240);
	glEnd();


    glColor3f(0.2, 0.2, 0.2);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(27, 235);
	glVertex2i(39, 235);
	glVertex2i(39, 243);
	glVertex2i(27, 243);
	glEnd();

    glColor4f(1.0, 0.5, 0.0,0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(05, 150);
	glVertex2i(65, 150);
	glVertex2i(35, 235);
    glVertex2i(32, 235);
    glEnd();


	//building 2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(60, 161);
	glVertex2i(150, 161);
	glVertex2i(150, 461);
	glVertex2i(60, 461);
	glEnd();

	//rooftop of building 2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(60, 461);
	glVertex2i(150, 461);
	glVertex2i(160, 471);
	glVertex2i(70, 471);
	glEnd();

	//side view of building 2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(150, 461);
	glVertex2i(160, 471);
	glVertex2i(160, 171);
	glVertex2i(150, 161);
	glEnd();

	//side glasses
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 459);
	glVertex2i(158, 469);
	glVertex2i(158, 159);
	glVertex2i(152, 169);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 415);
	glVertex2i(158, 425);
	glVertex2i(158, 429);
	glVertex2i(152, 419);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 430);
	glVertex2i(158, 440);
	glVertex2i(158, 444);
	glVertex2i(152, 434);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 443);
	glVertex2i(158, 453);
	glVertex2i(158, 457);
	glVertex2i(152, 447);
	glEnd();

	//glassess of building 2
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 165);
	glVertex2i(146, 165);
	glVertex2i(146, 457);
	glVertex2i(64, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 175);
	glVertex2i(146, 175);
	glVertex2i(146, 177);
	glVertex2i(64, 177);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 187);
	glVertex2i(146, 187);
	glVertex2i(146, 189);
	glVertex2i(64, 189);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 199);
	glVertex2i(146, 199);
	glVertex2i(146, 201);
	glVertex2i(64, 201);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 211);
	glVertex2i(146, 211);
	glVertex2i(146, 213);
	glVertex2i(64, 213);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 223);
	glVertex2i(146, 223);
	glVertex2i(146, 225);
	glVertex2i(64, 225);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 235);
	glVertex2i(146, 235);
	glVertex2i(146, 237);
	glVertex2i(64, 237);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 247);
	glVertex2i(146, 247);
	glVertex2i(146, 249);
	glVertex2i(64, 249);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 259);
	glVertex2i(146, 259);
	glVertex2i(146, 261);
	glVertex2i(64, 261);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 271);
	glVertex2i(146, 271);
	glVertex2i(146, 273);
	glVertex2i(64, 273);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 283);
	glVertex2i(146, 283);
	glVertex2i(146, 285);
	glVertex2i(64, 285);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 295);
	glVertex2i(146, 295);
	glVertex2i(146, 297);
	glVertex2i(64, 297);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 307);
	glVertex2i(146, 307);
	glVertex2i(146, 309);
	glVertex2i(64, 309);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 319);
	glVertex2i(146, 319);
	glVertex2i(146, 321);
	glVertex2i(64, 321);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 331);
	glVertex2i(146, 331);
	glVertex2i(146, 333);
	glVertex2i(64, 333);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 343);
	glVertex2i(146, 343);
	glVertex2i(146, 345);
	glVertex2i(64, 345);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 355);
	glVertex2i(146, 355);
	glVertex2i(146, 357);
	glVertex2i(64, 357);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 367);
	glVertex2i(146, 367);
	glVertex2i(146, 369);
	glVertex2i(64, 369);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 379);
	glVertex2i(146, 379);
	glVertex2i(146, 381);
	glVertex2i(64, 381);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 391);
	glVertex2i(146, 391);
	glVertex2i(146, 393);
	glVertex2i(64, 393);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 403);
	glVertex2i(146, 403);
	glVertex2i(146, 405);
	glVertex2i(64, 405);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 415);
	glVertex2i(146, 415);
	glVertex2i(146, 417);
	glVertex2i(64, 417);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 427);
	glVertex2i(146, 427);
	glVertex2i(146, 429);
	glVertex2i(64, 429);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 439);
	glVertex2i(146, 439);
	glVertex2i(146, 441);
	glVertex2i(64, 441);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(64, 451);
	glVertex2i(146, 451);
	glVertex2i(146, 453);
	glVertex2i(64, 453);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(74, 155);
	glVertex2i(74, 457);
	glVertex2i(76, 155);
	glVertex2i(76, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(84, 155);
	glVertex2i(84, 457);
	glVertex2i(86, 155);
	glVertex2i(86, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(94, 155);
	glVertex2i(94, 457);
	glVertex2i(96, 155);
	glVertex2i(96, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(104, 155);
	glVertex2i(104, 457);
	glVertex2i(106, 155);
	glVertex2i(106, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(114, 155);
	glVertex2i(114, 457);
	glVertex2i(116, 155);
	glVertex2i(116, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(124, 155);
	glVertex2i(124, 457);
	glVertex2i(126, 155);
	glVertex2i(126, 457);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(134, 155);
	glVertex2i(134, 457);
	glVertex2i(136, 155);
	glVertex2i(136, 457);
	glEnd();

	//building3
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(150, 161);
	glVertex2i(150, 407);
	glVertex2i(220, 457);
	glVertex2i(220, 161);
	glEnd();

	//glasses of building 3
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(152, 161);
	glVertex2i(152, 405);
	glVertex2i(218, 452);
	glVertex2i(218, 161);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(162, 161);
	glVertex2i(164,161 );
	glVertex2i(164, 413);
	glVertex2i(162, 413);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(174, 161);
	glVertex2i(176, 161);
	glVertex2i(176, 423);
	glVertex2i(174, 422);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(186, 161);
	glVertex2i(188, 161);
	glVertex2i(188, 433);
	glVertex2i(186, 433);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(198, 161);
	glVertex2i(201, 161);
	glVertex2i(198, 440);
	glVertex2i(201, 440);
	glEnd();

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(210, 161);
	glVertex2i(212, 161);
	glVertex2i(212, 447);
	glVertex2i(210, 447);
	glEnd();

	//building 4
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(220,161);
	glVertex2i(280, 161);
	glVertex2i(280, 400);
	glVertex2i(250, 450);
	glVertex2i(220, 400);
	glEnd();

	//clock on building 3
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(222, 398);
	glVertex2i(222, 348);
	glVertex2i(278, 348);
	glVertex2i(278, 398);
	glEnd();


	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(222, 338);
	glVertex2i(222, 161);
	glVertex2i(232, 161);
	glVertex2i(232, 338);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(278, 338);
	glVertex2i(278, 161);
	glVertex2i(268, 161);
	glVertex2i(268, 338);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(244, 338);
	glVertex2i(244, 161);
	glVertex2i(256, 161);
	glVertex2i(256, 338);
	glEnd();

	//building 5
	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 161);
	glVertex2i(350, 161);
	glVertex2i(350, 450);
	glVertex2i(280, 450);
	glEnd();

	//rooftop of 5
	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 450);
	glVertex2i(350, 450);
	glVertex2i(360, 460);
	glVertex2i(290, 460);
	glEnd();

	//side view of 5
	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(350, 161);
	glVertex2i(360, 161);
	glVertex2i(360, 460);
	glVertex2i(350, 450);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(352, 163);
	glVertex2i(358, 163);
	glVertex2i(358, 455);
	glVertex2i(352, 448);
	glEnd();

	//glassess of building 5
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(282, 163);
	glVertex2i(348, 163);
	glVertex2i(348, 448);
	glVertex2i(282, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(292, 163);
	glVertex2i(294, 163);
	glVertex2i(294, 448);
	glVertex2i(292, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(302, 163);
	glVertex2i(304, 163);
	glVertex2i(304, 448);
	glVertex2i(302, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(314, 163);
	glVertex2i(316, 163);
	glVertex2i(316, 448);
	glVertex2i(314, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(326, 163);
	glVertex2i(328, 163);
	glVertex2i(328, 448);
	glVertex2i(326, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(338, 163);
	glVertex2i(340, 163);
	glVertex2i(340, 448);
	glVertex2i(338, 448);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 171);
	glVertex2i(280, 173);
	glVertex2i(350, 173);
	glVertex2i(350, 171);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 183);
	glVertex2i(280, 185);
	glVertex2i(350, 185);
	glVertex2i(350, 183);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 195);
	glVertex2i(280, 197);
	glVertex2i(350, 197);
	glVertex2i(350, 195);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 207);
	glVertex2i(280, 209);
	glVertex2i(350, 209);
	glVertex2i(350, 207);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 219);
	glVertex2i(280, 221);
	glVertex2i(350, 221);
	glVertex2i(350, 219);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 231);
	glVertex2i(280, 233);
	glVertex2i(350, 233);
	glVertex2i(350, 231);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 243);
	glVertex2i(280, 245);
	glVertex2i(350, 245);
	glVertex2i(350, 243);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 255);
	glVertex2i(280, 257);
	glVertex2i(350, 257);
	glVertex2i(350, 255);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 267);
	glVertex2i(280, 269);
	glVertex2i(350, 269);
	glVertex2i(350, 267);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 279);
	glVertex2i(280, 281);
	glVertex2i(350, 281);
	glVertex2i(350, 279);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 291);
	glVertex2i(280, 293);
	glVertex2i(350, 293);
	glVertex2i(350, 291);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 301);
	glVertex2i(280, 303);
	glVertex2i(350, 303);
	glVertex2i(350, 301);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 313);
	glVertex2i(280, 315);
	glVertex2i(350, 315);
	glVertex2i(350, 313);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 325);
	glVertex2i(280, 327);
	glVertex2i(350, 327);
	glVertex2i(350, 325);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 337);
	glVertex2i(280, 339);
	glVertex2i(350, 339);
	glVertex2i(350, 337);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 349);
	glVertex2i(280, 351);
	glVertex2i(350, 351);
	glVertex2i(350, 349);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 361);
	glVertex2i(280, 363);
	glVertex2i(350, 363);
	glVertex2i(350, 361);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 373);
	glVertex2i(280, 375);
	glVertex2i(350, 375);
	glVertex2i(350, 373);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 385);
	glVertex2i(280, 387);
	glVertex2i(350, 387);
	glVertex2i(350, 385);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 397);
	glVertex2i(280, 399);
	glVertex2i(350, 399);
	glVertex2i(350, 397);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 409);
	glVertex2i(280, 411);
	glVertex2i(350, 411);
	glVertex2i(350, 409);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 421);
	glVertex2i(280, 423);
	glVertex2i(350, 423);
	glVertex2i(350, 421);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280, 433);
	glVertex2i(280, 435);
	glVertex2i(350, 435);
	glVertex2i(350, 433);
	glEnd();

	//building 6
	glColor3f(0.5, 0.5, 0.5);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(350, 161);
	glVertex2i(550, 161);
	glVertex2i(550, 350);
	glVertex2i(450, 400);
	glVertex2i(350, 350);
	glEnd();

	//the rooftop of 6
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(354, 348);
	glVertex2i(546, 348);
	glVertex2i(450, 396);
	glEnd();

	//pillars of building 6
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(375, 161);
	glVertex2i(385, 161);
	glVertex2i(385, 350);
	glVertex2i(375, 350);
	glEnd();

	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(525, 161);
	glVertex2i(515, 161);
	glVertex2i(515, 350);
	glVertex2i(525, 350);
	glEnd();

	//gate of building 6
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(435, 161);
	glVertex2i(465, 161);
	glVertex2i(465, 200);
	glVertex2i(435, 200);
	glEnd();


	//light 2
	glColor3f(0.2, 0.2, 0.2);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(415, 158);
	glVertex2i(419, 158);
	glVertex2i(419, 240);
	glVertex2i(415, 240);
	glEnd();


    glColor3f(0.2, 0.2, 0.2);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(411, 235);
	glVertex2i(423, 235);
	glVertex2i(423, 243);
	glVertex2i(411, 243);
	glEnd();

    glColor4f(1.0, 0.4, 0.0,0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(385, 150);
	glVertex2i(452, 150);
	glVertex2i(418, 235);
	glVertex2i(416, 235);
    glEnd();


	//building 7
	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(550, 161);
	glVertex2i(650, 161);
	glVertex2i(650, 350);
	glVertex2i(550, 400);
	glEnd();

	//rooftop of 7
	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(550, 400);
	glVertex2i(570, 420);
	glVertex2i(650, 370);
	glVertex2i(550, 70);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(554, 404);
	glVertex2i(574, 416);
	glVertex2i(646, 366);
	glVertex2i(546, 66);
	glEnd();

	//glasses of building 7
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(554, 161);
	glVertex2i(646, 161);
	glVertex2i(646, 346);
	glVertex2i(554, 390);
	glEnd();

	glColor3f(0.0, 0.0, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(564, 161);
	glVertex2i(566, 161);
	glVertex2i(566, 392);
	glVertex2i(564, 392);
	glEnd();

	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(576, 161);
	glVertex2i(578, 161);
	glVertex2i(578, 384);
	glVertex2i(576, 384);
	glEnd();

	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(588, 161);
	glVertex2i(590, 161);
	glVertex2i(590, 376);
	glVertex2i(588, 376);
	glEnd();

	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(600, 161);
	glVertex2i(602, 161);
	glVertex2i(602, 368);
	glVertex2i(600, 368);
	glEnd();

	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(612, 161);
	glVertex2i(614, 161);
	glVertex2i(614, 360);
	glVertex2i(612, 360);
	glEnd();

	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(624, 161);
	glVertex2i(626, 161);
	glVertex2i(626, 352);
	glVertex2i(624, 352);
	glEnd();


	//the road


	glPushMatrix();


	glColor3f(0.1, 0.1, 0.1);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0, 110);
	glVertex2i(650, 110);
	glVertex2i(650, 160);
	glVertex2i(0, 160);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(50, 133);
	glVertex2i(100, 133);
	glVertex2i(100, 136);
	glVertex2i(50, 136);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(150, 133);
	glVertex2i(200, 133);
	glVertex2i(200, 136);
	glVertex2i(150, 136);




	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(250, 133);
	glVertex2i(300, 133);
	glVertex2i(300, 136);
	glVertex2i(250, 136);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(350, 133);
	glVertex2i(400, 133);
	glVertex2i(400, 136);
	glVertex2i(350, 136);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(450, 133);
	glVertex2i(500, 133);
	glVertex2i(500, 136);
	glVertex2i(450, 136);



	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(550, 133);
	glVertex2i(600, 133);
	glVertex2i(600, 136);
	glVertex2i(550, 136);






	//gari...up..2nd..body



	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(550-i, 150);
	glVertex2i(635-i, 150);
	glVertex2i(635-i, 170);
	glVertex2i(550-i, 170);


	// car up 2nd roof

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(565-i, 170);
	glVertex2i(625-i, 170);
	glVertex2i(615-i, 185);
	glVertex2i(575-i, 185);

	//glass

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(569-i, 173);
	glVertex2i(621-i, 173);
	glVertex2i(611-i, 182);
	glVertex2i(579-i, 182);

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(597-i, 170);
	glVertex2i(593-i, 170);
	glVertex2i(593-i, 185);
	glVertex2i(597-i, 185);

	//chaka..1
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(570-i, 155);
	glVertex2i(580-i, 155);
	glVertex2i(580-i, 145);
	glVertex2i(570-i, 145);

 //chaka..2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(610-i, 155);
	glVertex2i(620-i, 155);
	glVertex2i(620-i, 145);
	glVertex2i(610-i, 145);

//gari...up..1st..body

	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(95-i, 150);
	glVertex2i(180-i, 150);
	glVertex2i(180-i, 170);
	glVertex2i(95-i, 170);

//car up 1st roof

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(110-i, 170);
	glVertex2i(170-i, 170);
	glVertex2i(160-i, 185);
	glVertex2i(120-i, 185);

	//glass


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(114-i, 173);
	glVertex2i(166-i, 173);
	glVertex2i(156-i, 182);
	glVertex2i(124-i, 182);

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(138-i, 170);
	glVertex2i(142-i, 170);
	glVertex2i(142-i, 185);
	glVertex2i(138-i, 185);

	//chaka..1
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(115-i, 155);
	glVertex2i(125-i, 155);
	glVertex2i(125-i, 145);
	glVertex2i(115-i, 145);

 //chaka..2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(155-i, 155);
	glVertex2i(165-i, 155);
	glVertex2i(165-i, 145);
	glVertex2i(155-i, 145);


	//gari..1st..down..body
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0+i, 120);
	glVertex2i(85+i, 120);
	glVertex2i(85+i, 140);
	glVertex2i(0+i, 140);

//1st car roof

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(10+i, 140);
	glVertex2i(70+i, 140);
	glVertex2i(60+i, 155);
	glVertex2i(20+i, 155);

	//glass


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(14+i, 143);
	glVertex2i(66+i, 143);
	glVertex2i(56+i, 153);
	glVertex2i(24+i, 153);

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(38+i, 140);
	glVertex2i(42+i, 140);
	glVertex2i(42+i, 155);
	glVertex2i(38+i, 155);

	//chaka..1
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(15+i, 115);
	glVertex2i(25+i, 115);
	glVertex2i(25+i, 125);
	glVertex2i(15+i, 125);

 //chaka..2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(55+i, 115);
	glVertex2i(65+i, 115);
	glVertex2i(65+i, 125);
	glVertex2i(55+i, 125);


	//bus
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(300+i, 120);
	glVertex2i(200+i, 120);
	glVertex2i(200+i, 160);
	glVertex2i(300+i, 160);

	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(290+i, 138);
	glVertex2i(250+i, 138);
	glVertex2i(250+i, 148);
	glVertex2i(290+i, 148);

	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(210+i, 138);
	glVertex2i(240+i, 138);
	glVertex2i(240+i, 148);
	glVertex2i(210+i, 148);

	//bus chaka
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(280+i, 125);
	glVertex2i(270+i, 125);
	glVertex2i(270+i, 115);
	glVertex2i(280+i, 115);

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(230+i, 125);
	glVertex2i(220+i, 125);
	glVertex2i(220+i, 115);
	glVertex2i(230+i, 115);



	//gari..2nd..body
	glColor3f(0.0, 0.0, 0.3);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(450+i, 120);
	glVertex2i(535+i, 120);
	glVertex2i(535+i, 140);
	glVertex2i(450+i, 140);

//1st car roof

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(460+i, 140);
	glVertex2i(520+i, 140);
	glVertex2i(510+i, 155);
	glVertex2i(470+i, 155);

	//glass


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(464+i, 143);
	glVertex2i(516+i, 143);
	glVertex2i(506+i, 153);
	glVertex2i(474+i, 153);

	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(488+i, 140);
	glVertex2i(492+i, 140);
	glVertex2i(492+i, 155);
	glVertex2i(488+i, 155);

	//chaka..1
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(465+i, 115);
	glVertex2i(475+i, 115);
	glVertex2i(475+i, 125);
	glVertex2i(465+i, 125);

 //chaka..2
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(505+i, 115);
	glVertex2i(515+i, 115);
	glVertex2i(515+i, 125);
	glVertex2i(505+i, 125);


	glEnd();





	//lowest line
	glColor3f(0.0, 0.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0, 108);
	glVertex2i(650, 108);
	glVertex2i(650, 110);
	glVertex2i(0, 110);

	glEnd();


		// brick wall
	glColor3f(0.5568630, 0.1372550, 0.1372550);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 111);
	glVertex2i(00, 90);
	glVertex2i(650, 90);
	glVertex2i(650, 111);
	glEnd();

	glColor3f(0.5568630, 0.1372550, 0.1372550);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 90);
	glVertex2i(00, 67);
	glVertex2i(650, 67);
	glVertex2i(650, 90);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 111);
	glVertex2i(00, 109);
	glVertex2i(650, 109);
	glVertex2i(650, 111);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 92);
	glVertex2i(00, 90);
	glVertex2i(650, 90);
	glVertex2i(650, 92);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 111);
	glVertex2i(00, 90);
	glVertex2i(02, 90);
	glVertex2i(02, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(65, 111);
	glVertex2i(65, 90);
	glVertex2i(67, 90);
	glVertex2i(67, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(132, 111);
	glVertex2i(132, 90);
	glVertex2i(134, 90);
	glVertex2i(134, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(199, 111);
	glVertex2i(199, 90);
	glVertex2i(201, 90);
	glVertex2i(201, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(266, 111);
	glVertex2i(266, 90);
	glVertex2i(268, 90);
	glVertex2i(268, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(333, 111);
	glVertex2i(333, 90);
	glVertex2i(335, 90);
	glVertex2i(335, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(400, 111);
	glVertex2i(400, 90);
	glVertex2i(402, 90);
	glVertex2i(402, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(467, 111);
	glVertex2i(467, 90);
	glVertex2i(469, 90);
	glVertex2i(469, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(534, 111);
	glVertex2i(534, 90);
	glVertex2i(536, 90);
	glVertex2i(536, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(601, 111);
	glVertex2i(601, 90);
	glVertex2i(603, 90);
	glVertex2i(603, 111);
	glEnd();



	//lake

	glColor4f(0.0, 0.5, 0.80, 0.4);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 95);
	glVertex2i(00, 00);
	glVertex2i(650, 00);
	glVertex2i(650, 95);
	glEnd();


	//nowka body


	glColor3f(0.0, 0.40, 0.9);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0+i, 40);
	glVertex2i(140+i, 40);
	glVertex2i(120+i, 20);
	glVertex2i(20+i, 20);
//roof
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(30+i, 55);
	glVertex2i(110+i, 55);
	glVertex2i(110+i, 40);
	glVertex2i(30+i, 40);



	//2nd nowka
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(650-i, 80);
	glVertex2i(510-i, 80);
	glVertex2i(530-i, 60);
	glVertex2i(630-i, 60);

//roof
	glColor3f(1.0, 01.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(530-i, 80);
	glVertex2i(630-i, 80);
	glVertex2i(630-i, 95);
	glVertex2i(530-i, 95);



	glEnd();
	glPopMatrix();


	glFlush();

    }



}





void update(int value) {


	if (i>=0)
	{

		i+=2;


	}
	if(i>=650)
	{
	i=0;
	j=0;
	}
	glVertex2i(i,j);

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(80, update, 0);
}
void keyboardFunc( unsigned char key, int x, int y )
{
switch( key )
    {


case 'd':
	case 'D':
		day=1;
		break;

	case 'n':
case 'N':
		day=0;
		break;

    };

}



int main(int argc, char** argv)
{


	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1024, 720);
	glutInitWindowPosition(100, 10);
	glutCreateWindow("city view");
	glutDisplayFunc(myDisplay);
    glutKeyboardFunc(keyboardFunc);


	glutTimerFunc(25, update, 0);
	myInit();
	myDisplay();
	glutMainLoop();
}

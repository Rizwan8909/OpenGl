#include <GL/glut.h> 
#include <math.h> 


void initializewindow(); 
void registercallbacks(); 
void initGL(); 
void displayfunc(); 
void keyboardfunc(); 
void mousefunc();
int main(int argc,char*argv[]) {
	glutInit(&argc,argv); 	
	initializewindow(); 	
	registercallbacks(); 	
	initGL();
	glutMainLoop(); 
}

void initializewindow() { 	
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA); 	
	glutInitWindowSize(640, 480); 	
	glutInitWindowPosition(50,50); 	
	glutCreateWindow("scenery by Rizwan Ahmed");
} 

void registercallbacks() { 	
	glutDisplayFunc(displayfunc);
} 



void displayfunc() { 	
	glClearColor(0,0.8,1.0,0.0); 	
	glLineWidth(4.0); 	
	glClear(GL_COLOR_BUFFER_BIT); 	
	glColor3f(0.0, 0.5, 0.0); 	 
	glRectf(0,115,640,0); 

	glBegin(GL_POLYGON); 
		glColor3f(1,0.7,0.4); 	  
		glVertex2d(220,70); 	  
		glVertex2d(550,70); 	  
		glVertex2d(550,280); 	  
		glVertex2d(220,280); 	
	glEnd();  

	glBegin(GL_POLYGON); 
		//Roof of house
		glColor3f(0.6, 0.16, 0.16); 

		glVertex2i(220,280); //left top 	  
		glVertex2i(200,220); //  
		glVertex2i(570,220); //right bottom	  
		glVertex2i(550,280); //	right top
	glEnd(); 

	glBegin(GL_POLYGON); 	 
		// window
		glColor3f(0.7,0.8,0.8); 	  
		glVertex2i(525,210); //up	  
		glVertex2i(455,210); // up	  
		glVertex2i(455,160); 	  
		glVertex2i(525,160); 	
	glEnd();  

glLineWidth(2.0); 	
	glBegin(GL_LINES); 	 
		glColor3f(0.6,0.16,0.16); 	  
		glVertex2i(490,210); 	  
		glVertex2i(490,160); 	  
		glVertex2i(455,185); 	  
		glVertex2i(525,185); 	
	glEnd(); 

	glBegin(GL_LINE_LOOP); 
		glColor3f(0.6,0.16,0.16); 	  
		glVertex2i(525,210); 	  
		glVertex2i(455,210); 	  
		glVertex2i(455,160); 	  
		glVertex2i(525,160); 	
	glEnd();  

	
	glBegin(GL_POLYGON); 	 
		// window2
		glColor3f(0.7,0.8,0.8); 	  
		glVertex2i(415,210); //up	  
		glVertex2i(345,210); // up	  
		glVertex2i(345,160); 	  
		glVertex2i(415,160); 	
	glEnd();  

glLineWidth(2.0); 	
	glBegin(GL_LINES); 	 
		glColor3f(0.6,0.16,0.16); 	  
		glVertex2i(380,210); 	  
		glVertex2i(380,160); 	  
		glVertex2i(345,185); 	  
		glVertex2i(415,185); 	
	glEnd(); 

	glBegin(GL_LINE_LOOP); 
		glColor3f(0.6,0.16,0.16); 	  
		glVertex2i(415,210); 	  
		glVertex2i(345,210); 	  
		glVertex2i(345,160); 	  
		glVertex2i(415,160); 	
	glEnd();  

 

	glBegin(GL_POLYGON); 	 
		// window3
		glColor3f(0.7,0.8,0.8); 	  
		glVertex2i(310,210); //up	  
		glVertex2i(240,210); // up	  
		glVertex2i(240,160); 	  
		glVertex2i(310,160); 	
	glEnd();  

glLineWidth(2.0); 	
	glBegin(GL_LINES); 	 
		glColor3f(0.6,0.16,0.16); 	  
		glVertex2i(275,210); 	  
		glVertex2i(275,160); 	  
		glVertex2i(240,185); 	  
		glVertex2i(310,185); 	
	glEnd(); 

	glBegin(GL_LINE_LOOP); 
		glColor3f(0.6,0.16,0.16); 	  
		glVertex2i(310,210); 	  
		glVertex2i(240,210); 	  
		glVertex2i(240,160); 	  
		glVertex2i(310,160); 	
	glEnd();  

	glBegin(GL_POLYGON); 
		//door
		glColor3f(0.6,0.1,0.0); 	  
		glVertex2i(240,70); 	  
		glVertex2i(240,150); 	  
		glVertex2i(305,150); 	  
		glVertex2i(305,70); 	
	glEnd(); 

	glBegin(GL_LINE_LOOP); 
		//door border
		glColor3f(1,1,1);  	  
		glVertex2i(240,70); 	  
		glVertex2i(240,150); //up	  
		glVertex2i(305,150); //up	  
		glVertex2i(305,70); 	
	glEnd(); 



	glBegin(GL_LINES);
		//door center line
		glColor3f(1,1,1); 	  
		  
		  glVertex2i(250,110); 	  
		  glVertex2i(260,110);
	glEnd();  	

	//Sky Color
	glColor3f(0.74,0.9,0.8);
	glRectf(0,320,640,480); 

	glBegin(GL_POLYGON);
		//Mountains back -70
		glColor3f(0.64,0.16,0.16); 	  
		glVertex2d(-70,320); 	  
		glVertex2d(10,370); 	  
		glVertex2d(90,320); 	
	glEnd(); 
	glBegin(GL_POLYGON);
		//Mountains front
		glColor3f(0.64,0.16,0.16); 	  
		glVertex2d(0,320); 	  
		glVertex2d(80,420); 	  
		glVertex2d(160,320); 	
	glEnd();  

	glBegin(GL_POLYGON);
		//Mountains back+70
		glColor3f(0.64,0.16,0.16); 	  
		glVertex2d(70,320); 	  
		glVertex2d(150,460); 	  
		glVertex2d(230,320); 	
	glEnd(); 

	glBegin(GL_POLYGON);
		//Mountains front
		glColor3f(0.64,0.16,0.16); 	  
		glVertex2d(160,320); 	  
		glVertex2d(240,380); 	  
		glVertex2d(320,320); 	
	glEnd();

	glBegin(GL_POLYGON);
		//Mountains back+70
		glColor3f(0.64,0.16,0.16); 	  
		glVertex2d(230,320); 	  
		glVertex2d(310,400); 	  
		glVertex2d(390,320); 	
	glEnd(); 

	glBegin(GL_POLYGON); 
		//Mountains Front
		glColor3f(0.64,0.16,0.16); 	  
		glVertex2d(320,320); 	  
		glVertex2d(400,440); 	  
		glVertex2d(480,320); 	
	glEnd(); 

	glBegin(GL_POLYGON); 
		//Mountains back + 70
		glColor3f(0.64,0.16,0.16); 	  
		glVertex2d(400,320); 	  
		glVertex2d(470,420); 	  
		glVertex2d(550,320); 	
	glEnd();

	glBegin(GL_POLYGON);
		//Mountains front
		glColor3f(0.64,0.16,0.16); 	  
		glVertex2d(480,320); 	  
		glVertex2d(560,390); 	  
		glVertex2d(640,320); 	
	glEnd(); 

	glBegin(GL_POLYGON);
		//Mountains back + 70
		glColor3f(0.64,0.16,0.16); 	  
		glVertex2d(550,320); 	  
		glVertex2d(630,430); 	  
		glVertex2d(730,320); 	
	glEnd(); 


	glBegin(GL_POLYGON); 
		
		// boat
		glColor3f(0.3,0.35,0.4); 	  
		glVertex2d(50,160); 	  
		glVertex2d(150,160); 	  
		glVertex2d(185,200); 	  
		glVertex2d(17,200); 	
	glEnd();  	

	glColor3f(0.3,0.35,0.4); 	
	glRectd(160,200,155,257); 	 	
	glBegin(GL_POLYGON); 
		//flag
		glColor3f(0.3,0.5,0.0); 	  
		glVertex2d(153,254); 	  
		glVertex2d(121,254); 
		glVertex2d(121,230); 	  
		glVertex2d(153,230); 	
	glEnd();

	glBegin(GL_LINES); 	
		//flag holder up
		glLineWidth(1.0); 	 
		glColor3f(0.3,0.0,0.0); 	  
		glVertex2d(153,253); 	  
		glVertex2d(155,253); 	  
		glVertex2d(153,231); 	  
		glVertex2d(155,231); 	
	glEnd();

	glColor3f(1,1,1); 
	//flag white part
	glRectd(152.6,254,143.6,230);  	
	glFlush();
} 
void initGL() { 	
glMatrixMode(GL_MODELVIEW); 	
glLoadIdentity(); 	
gluOrtho2D(0,+640,0,+480); 
} 

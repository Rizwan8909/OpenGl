#include <windows.h> // for MS Windows
#include <GL/glut.h> 
 


/* Initialize OpenGL Graphics */
void initGL() {
   glClearColor(1.0, 1.0, 1.0, 1.0); 
   glClearDepth(1.0f);                   
   glEnable(GL_DEPTH_TEST);   
   glDepthFunc(GL_LEQUAL);    
   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  
}
 
void display() {
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
   glMatrixMode(GL_MODELVIEW);     
 
  
   glLoadIdentity();                 // Reset the model-view matrix
   glTranslatef(-1.5f, 0.0f, -6.0f);  // Move right and into the screen
    
 
   glBegin(GL_QUADS);                
    
  
      // Front face  (z = 1.0f)
      glColor3f(0.08, 0.08, 0.08);     // Red (Front of kaba)
      glVertex3f( 1.0f,  1.0f, 1.0f);
      glVertex3f(-1.0f,  1.0f, 1.0f);
      glVertex3f(-1.0f, -1.0f, 1.0f);
      glVertex3f( 1.0f, -1.0f, 1.0f);
 
	  //Kaba front yellow line
	  glColor3f(1.0f, 1.0f, 0.0f);     //Yellow
      glVertex3f( 1.0f,  0.2f, 1.0f);  //Bottom right
	  glColor3f(1.0f, 1.0f, 0.0f);     //yellow
      glVertex3f(-1.0f,  0.2f, 1.0f);  //Bottom left
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f(-1.0f, 0.4f, 1.0f);   //Up line right
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f( 1.0f, 0.4f, 1.0f);   //Up line left



	 
	  //Kaba front First small line
	  glColor3f(1.0f, 1.0f, 0.0f);     // yellow
      glVertex3f( -0.5f,  -0.03f, 1.0f);  //Bottom right
	  glColor3f(1.0f, 1.0f, 0.0f);     //yellow
      glVertex3f(-0.95f,  -0.03f, 1.0f);  //Bottom left
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f(-0.95f, 0.1f, 1.0f);   //Up line right
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f( -0.5f, 0.1f, 1.0f);   //Up line left
	 
	    //Kaba front second small line
	  glColor3f(1.0f, 1.0f, 0.0f);     // yellow
      glVertex3f( 0.4f,  -0.03f, 1.0f);  //Bottom right
	  glColor3f(1.0f, 1.0f, 0.0f);     // yellow
      glVertex3f(-0.4f,  -0.03f, 1.0f);  //Bottom left
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f(-0.4f, 0.1f, 1.0f);   //Up line left
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f( 0.4f, 0.1f, 1.0f);   //Up line right
	 
	    //Kaba front third small line
	  glColor3f(1.0f, 1.0f, 0.0f);     // yellow
      glVertex3f(0.95f,  -0.03f, 1.0f);  //Up right
	  glColor3f(1.0f, 1.0f, 0.0f);     // yellow
      glVertex3f(0.5f,  -0.03f, 1.0f);  //Bottom left
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f(0.5f, 0.1f, 1.0f);   //Up line left
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f(0.95f, 0.1f, 1.0f);   //Bottom line right

	  
	  //Kaba Door
	  glColor3f(1.0f, 1.0f, 0.0f);     // yellow
      glVertex3f(0.95f,  -0.9f, 1.0f);  //Up right
	  glColor3f(1.0f, 1.0f, 0.0f);     // yellow
      glVertex3f(0.5f,  -0.9f, 1.0f);  //Bottom left
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f(0.5f, -0.2f, 1.0f);   //Up line left
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f(0.95f, -0.2f, 1.0f);   //Bottom line right

	


 
      // Side of Kaba
      glColor3f(0.2f, 0.2f, 0.2f);     //Side
      glVertex3f(1.0f,  1.0f, -1.0f);
      glVertex3f(1.0f,  1.0f,  1.0f);
      glVertex3f(1.0f, -1.0f,  1.0f);
      glVertex3f(1.0f, -1.0f, -1.0f);




	  //Side of Kaba yellow line
	  glColor3f(1.0f, 1.0f, 0.0f);     // yellow
      glVertex3f(1.0f,  0.05f, -1.0f); // Right top
	  glColor3f(1.0f, 1.0f, 0.0f);     // yellow
      glVertex3f(1.0f,  0.2f,  1.0f); //Left top
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f(1.0f, 0.4f,  1.0f); //Left bottom
	  glColor3f(1.0f, 0.5f, 0.0f);		//orange
      glVertex3f(1.0f, 0.3f, -1.0f);




   glEnd();  // End of drawing color-cube
 
 
 
 
   glutSwapBuffers();  
}

void reshape(GLsizei width, GLsizei height) {  
   if (height == 0) height = 1;
   GLfloat aspect = (GLfloat)width / (GLfloat)height;
 
   // Set the viewport to cover the new window
   glViewport(0, 0, width, height);

   glMatrixMode(GL_PROJECTION); 
   glLoadIdentity();          
   gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);            
   glutInitDisplayMode(GLUT_DOUBLE);
   glutInitWindowSize(640, 480); 
   glutInitWindowPosition(50, 50); 
   glutCreateWindow("Khana Kaba");  
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);      
   initGL();         
   glutMainLoop(); 
   return 0;
}
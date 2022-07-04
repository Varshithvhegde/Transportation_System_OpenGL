#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <string.h>

int car1;
int car2;
float c1;
float c2;
GLfloat a=0,b=0,c=0;
float f1;
int flight1;
int n=0;
float b1;
int boat1;
int screen=0;
void megh();
int id1,id2,id3,id4;
int i=0;
char *str;
int flag=0;
void *currentfont;
void circle();
void setFont(void *font)
{
    currentfont=font;
}

void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
	glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx*10),y+(sin(angle)* ry*10));
    }
    glEnd();
}

void drawstring(float x,float y,float z,char *string)
{
    char *c;
    int len = (int) strlen(string);
    int i;
    glRasterPos3f(x,y,z);
   /* for(c=string;*c!='\0';c++)
    {
        glColor3f(0.0,0.0,0.0);
        glutBitmapCharacter(currentfont,*c);
    }*/
    for(i = 0;i<len;i++)
    {
        glColor3f(0.0,0.0,0.0);
        glutBitmapCharacter(currentfont,string[i]);
    }
}


void mydisplay(void)
{
 glClear(GL_COLOR_BUFFER_BIT);
 setFont(GLUT_BITMAP_TIMES_ROMAN_24);
 glColor3f(0,0,1);
 drawstring(360.0,950.0,0.0,"MANGALORE INSTITUTE OF TECHNOLOGY & ENGINEERING\n ");
 glColor3f(0.7,0,1);
 drawstring(365,850,0.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING\n");
 glColor3f(1,0.5,0);
 drawstring(600,750,0.0,"A MINI PROJECT ON\n");
 glColor3f(1,0,0);
 drawstring(590,650,0.0,"TRANSPORTATION SYSTEM\n");
 glColor3f(1,0.5,0);
 drawstring(350,600,0.0,"BY:");
 glColor3f(0.5,0.2,0.2);
 drawstring(200,500,0.0,"VARSHITH V HEGDE(4MT19CS174)");
 glColor3f(0.5,0.2,0.2);
 drawstring(200,400,0.0,"YASHWANTH(4MT19CS181)");
 glColor3f(1,0.5,0);
 drawstring(1000,600,0.0,"GUIDES:\n");
 glColor3f(0.5,0.2,0.2);
 drawstring(920,500,0.0,"MS.AISHWARYA M BHAT");
  glColor3f(0.5,0.2,0.2);
 drawstring(920,400,0.0,"MS.SUNITHA");
 glColor3f(1,0.1,1);
 drawstring(570,300,0.0,"PRESS 'A' or 'a' TO START"); 
 glutSwapBuffers();
 glFlush();
  //glutSwapBuffers();
}
//display 1

void car(float x)
{
glPushMatrix(); //making color for outer line
glTranslated(x,260.0,0.0);
glScaled(20.0,20.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(2.5,2.5);
glVertex2f(3.0,3.5);
glVertex2f(3.5,3.75);
glVertex2f(4.0,4.0);
glVertex2f(4.5,4.0);
glVertex2f(5.0,3.75);
glVertex2f(5.5,3.5);
glVertex2f(5.75,3.0);
glVertex2f(6.0,2.5);
glVertex2f(16.5,2.5);
glVertex2f(16.75,3.0);
glVertex2f(17.0,3.5);
glVertex2f(17.5,3.75);
glVertex2f(18.0,4.0);
glVertex2f(18.5,4.0);
glVertex2f(19.0,3.75);
glVertex2f(19.5,3.5);
glVertex2f(19.75,3.0);
glVertex2f(20.0,2.5);
glVertex2f(21.0,2.5);
glVertex2f(21.0,4.0);
glVertex2f(21.5,4.0);
glVertex2f(21.0,4.5);
glVertex2f(20.0,5.0);
glVertex2f(15.0,5.0);
glVertex2f(14.0,5.5);
glVertex2f(13.0,6.0);
glVertex2f(12.0,6.5);
glVertex2f(11.0,7.0);
glVertex2f(6.0,7.0);
glVertex2f(5.0,6.5);
glVertex2f(4.5,6.25);
glVertex2f(4.25,6.0);
glVertex2f(4.0,5.75);
glVertex2f(3.5,5.5);
glVertex2f(3.0,5.5);
glVertex2f(1.9,5.45);
glVertex2f(1.8,5.4);
glVertex2f(1.7,5.35);
glVertex2f(1.6,5.3);
glVertex2f(1.5,5.25);
glVertex2f(1.4,5.15);
glVertex2f(1.3,5.0);
glVertex2f(1.2,4.85);
glVertex2f(1.1,4.7);
glVertex2f(1.0,4.3);
glVertex2f(1.0,3.2);
glVertex2f(1.1,3.05);
glVertex2f(1.2,2.9);
glVertex2f(1.3,2.9);
glVertex2f(1.4,2.75);
glVertex2f(1.5,2.65);
glVertex2f(1.6,2.6);
glVertex2f(1.7,2.55);
glVertex2f(1.8,2.5);
glVertex2f(1.9,2.45);
glVertex2f(2.0,2.5);
glEnd();

glColor3f(1.0,1.0,1.0); //color for outer window
glBegin(GL_POLYGON);
glVertex2f(5.0,5.0);
glVertex2f(14.0,5.0);
glVertex2f(11.5,6.5);
glVertex2f(10.5,6.75);
glVertex2f(7.0,6.75);
glEnd();

glColor3f(1.0,1.0,1.0); //making outer line for car
glBegin(GL_LINE_LOOP);
glVertex2f(2.5,2.5);
glVertex2f(3.0,3.5);
glVertex2f(3.5,3.75);
glVertex2f(4.0,4.0);
glVertex2f(4.5,4.0);
glVertex2f(5.0,3.75);
glVertex2f(5.5,3.5);
glVertex2f(5.75,3.0);
glVertex2f(6.0,2.5);
glVertex2f(16.5,2.5);
glVertex2f(16.75,3.0);
glVertex2f(17.0,3.5);
glVertex2f(17.5,3.75);
glVertex2f(18.0,4.0);
glVertex2f(18.5,4.0);
glVertex2f(19.0,3.75);
glVertex2f(19.5,3.5);
glVertex2f(19.75,3.0);
glVertex2f(20.0,2.5);
glVertex2f(21.0,2.5);
glVertex2f(21.0,4.0);
glVertex2f(21.5,4.0);
glVertex2f(21.0,4.5);
glVertex2f(20.0,5.0);
glVertex2f(15.0,5.0);
glVertex2f(14.0,5.5);
glVertex2f(13.0,6.0);
glVertex2f(12.0,6.5);
glVertex2f(11.0,7.0);
glVertex2f(6.0,7.0);
glVertex2f(5.0,6.5);
glVertex2f(4.5,6.25);
glVertex2f(4.25,6.0);
glVertex2f(4.0,5.75);
glVertex2f(3.5,5.5);
glVertex2f(3.0,5.5);
glVertex2f(1.9,5.45);
glVertex2f(1.8,5.4);
glVertex2f(1.7,5.35);
glVertex2f(1.6,5.3);
glVertex2f(1.5,5.25);
glVertex2f(1.4,5.15);
glVertex2f(1.3,5.0);
glVertex2f(1.2,4.85);
glVertex2f(1.1,4.7);
glVertex2f(1.0,4.3);
glVertex2f(1.0,3.2);
glVertex2f(1.1,3.05);
glVertex2f(1.2,2.9);
glVertex2f(1.3,2.9);
glVertex2f(1.4,2.75);
glVertex2f(1.5,2.65);
glVertex2f(1.6,2.6);
glVertex2f(1.7,2.55);
glVertex2f(1.8,2.5);
glVertex2f(1.9,2.45);
glVertex2f(2.0,2.5);
glEnd();

glBegin(GL_LINES); //connecting outer line
glVertex2d(7.0,5.0);
glVertex2d(15.0,5.0);
glEnd();

glColor3f(0.0,0.0,0.0); //connecting outer line
glBegin(GL_LINES);
glVertex2d(15.0,4.0);
glVertex2d(17.0,4.0);
glEnd();

glColor3f(0.0,0.0,0.0); //connecting outer line
glBegin(GL_LINES);
glVertex2d(15.0,3.5);
glVertex2d(16.5,3.5);
glEnd();

glColor3f(0.0,0.0,0.0); //connecting outer line
glBegin(GL_LINES);
glVertex2d(15.0,5.0);
glVertex2d(14.0,3.0);
glEnd();

glColor3f(1.0,1.0,1.0); //connecting outer line
glBegin(GL_LINES);
glVertex2d(12.0,5.0);
glVertex2d(12.0,6.2);
glEnd();

glColor3f(1.0,1.0,1.0); //connecting outer line
glBegin(GL_LINES);
glVertex2d(7.0,5.0);
glVertex2d(7.0,6.7);
glEnd();

glBegin(GL_POLYGON); //drawing a back tyre
glVertex2f(3.0,2.5);
glVertex2f(3.0,2.6);
glVertex2f(3.15,3.1);
glVertex2f(3.2,3.2);
glVertex2f(3.3,3.35);
glVertex2f(3.4,3.4);
glVertex2f(3.5,3.45);
glVertex2f(3.6,3.55);
glVertex2f(3.7,3.6);
glVertex2f(3.8,3.63);
glVertex2f(4.0,3.65);
glVertex2f(4.2,3.7);
glVertex2f(4.4,3.7);
glVertex2f(4.6,3.65);
glVertex2f(4.8,3.55);
glVertex2f(5.0,3.45);
glVertex2f(5.1,3.4);
glVertex2f(5.2,3.25);
glVertex2f(5.3,3.2);
glVertex2f(5.4,3.0);
glVertex2f(5.5,2.5);

glVertex2f(5.45,2.15);
glVertex2f(5.4,1.9);
glVertex2f(5.35,1.8);
glVertex2f(5.2,1.6);
glVertex2f(5.0,1.5);
glVertex2f(4.9,1.4);
glVertex2f(4.7,1.3);
glVertex2f(4.6,1.27);
glVertex2f(4.4,1.25);
glVertex2f(4.0,1.25);
glVertex2f(3.9,1.3);
glVertex2f(3.75,1.35);
glVertex2f(3.6,1.4);
glVertex2f(3.45,1.55);
glVertex2f(3.3,1.7);
glVertex2f(3.2,1.8);
glVertex2f(3.1,2.2);
glEnd();


glBegin(GL_POLYGON); //drawing front tyre
glVertex2f(17.0,2.5);
glVertex2f(17.0,2.6);
glVertex2f(17.15,3.1);
glVertex2f(17.2,3.2);
glVertex2f(17.3,3.35);
glVertex2f(17.4,3.4);
glVertex2f(17.5,3.45);
glVertex2f(17.6,3.55);
glVertex2f(17.7,3.6);
glVertex2f(17.8,3.63);
glVertex2f(18.0,3.65);
glVertex2f(18.2,3.7);
glVertex2f(18.4,3.7);
glVertex2f(18.6,3.65);
glVertex2f(18.8,3.55);
glVertex2f(19.0,3.45);
glVertex2f(19.1,3.4);
glVertex2f(19.2,3.25);
glVertex2f(19.3,3.2);
glVertex2f(19.4,3.0);

glVertex2f(19.5,2.5);
glVertex2f(19.45,2.15);
glVertex2f(19.4,1.9);
glVertex2f(19.35,1.8);
glVertex2f(19.2,1.6);
glVertex2f(19.0,1.5);
glVertex2f(18.9,1.4);
glVertex2f(18.7,1.3);
glVertex2f(18.6,1.27);
glVertex2f(18.4,1.25);
glVertex2f(18.0,1.25);
glVertex2f(17.9,1.3);
glVertex2f(17.75,1.35);
glVertex2f(17.6,1.4);
glVertex2f(17.45,1.55);
glVertex2f(17.3,1.7);
glVertex2f(17.2,1.8);
glVertex2f(17.1,2.2);
glEnd();
glPopMatrix();
}
void road()
{
glPushMatrix();
glScaled(40.0,40.0,0.0);
glColor3f(0.1,0.1,0.1);
glBegin(GL_POLYGON);
//straight road
glVertex2f(0,5);
glVertex2f(40,5);
glVertex2f(40,10);
glVertex2f(0,10);
glEnd();
//green edge
glBegin(GL_POLYGON);
glColor3f(0.1,0.2,0.1);
glVertex2f(0,5);
glVertex2f(40,5);
glVertex2f(40,4);
glVertex2f(0,4);
glEnd();
//cross road
glColor3f(0.1,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(0,10);
glVertex2f(15,10);


glEnd();
glPopMatrix();
}


//display 2
void scene()
{
glPushMatrix();
glTranslatef(0.0,100.0,0.0);

glBegin(GL_POLYGON); //Sky  
glColor3f(0.4, 0.5, 1.0);
glVertex2i(0, 1200);
glVertex2i(1200, 1200);
glColor3f(0.7, 0.7, 1.0);
glVertex2i(1200, 0);
glVertex2i(0, 0);
glEnd();

glBegin(GL_POLYGON); //Middle ground
glColor3f(0.0, 0.7, 0.0);
glTranslatef(0.0,500,0.0);
glVertex2i(0, 100);
glVertex2i(0, 280);
glVertex2i(200, 330);
glVertex2i(400, 350);
glVertex2i(600, 330);
glVertex2i(800, 320);
glVertex2i(1000, 300);
glVertex2i(1200, 270);
glVertex2i(1200, 100);

glEnd();


glBegin(GL_POLYGON); // River
glColor3f(0.0, 0.0, 1.0);
glVertex2i(0, 150);
glVertex2i(200, 150);
glVertex2i(400, 150);
glVertex2i(600, 150);
//glColor3f(0.2, 0.3, 1.1);
glVertex2i(800, 150);
glVertex2i(1000, 150);
glVertex2i(1200, 150);
glVertex2i(1200, 0);
glVertex2i(0, 0);
glEnd();

//tree();


glBegin(GL_POLYGON); //House
glColor3f(0.9, 0.7, 0.1);
glVertex2i(350, 344);
glVertex2i(350, 460);
glVertex2i(430, 460);
glVertex2i(430, 344);
glEnd();


glBegin(GL_POLYGON); //House
glColor3f(0.9, 0.0, 0.0);
glVertex2i(340, 460);
glVertex2i(390, 500);
glVertex2i(440, 460);
glEnd();

glBegin(GL_POLYGON); //Door
glColor3f(1.0, 1.0, 0.0);
glVertex2i(370, 344);
glVertex2i(370, 430);
glVertex2i(410, 430);
glVertex2i(410, 344);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(390, 344);
glVertex2i(390, 430);
glEnd();
glPopMatrix();
}


void boat(float x)
{ 
    glPushMatrix();
	glTranslatef(x,-400,0);
    glColor3f(0.1,0.6,0.2);
    glBegin(GL_POLYGON);
    glVertex2f(50+n,500);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(30+n,565);
    glVertex2f(300+n,565);
    glVertex2f(280+n,500);
    glEnd();

    glColor3f(0.5,0.2,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(70+n,565);
    glVertex2f(70+n,600);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(150+n,600);
    glVertex2f(150+n,565);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d(70+n,600);
    glVertex2d(110+n,630);
    glVertex2d(150+n,600);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d(260+n,565);
    glVertex2d(260+n,640);
    glVertex2d(265+n,640);
    glVertex2d(265+n,565);
    glEnd();

    glColor3f(1.3,0.3,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(260+n,640);
    glVertex2d(300+n,600);
    glVertex2d(260+n,565);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(90+n,575);
    glColor3f(1,1,0.15);
    glVertex2d(90+n,595);
    glColor3f(1.0,1.0,0.14);
    glVertex2d(130+n,595);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(130+n,575);
    glEnd();
    glPopMatrix();
}

//display 3
void flight(float x)
{
	glTranslated(x,500.0,0.0);
	glScaled(2.0,2.0,0.0);
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);//rectangular body
	glVertex2f(0.0,30.0);
	glVertex2f(0.0,55.0);
	glVertex2f(135.0,55.0);
	glVertex2f(135.0,30.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);//upper triangle construction plane
	glVertex2f(135.0,55.0);
	glVertex2f(150.0,50.0);
	glVertex2f(155.0,45.0);
	glVertex2f(160.0,40.0);
	glVertex2f(135.0,40.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();

	glBegin(GL_LINE_LOOP);//outline of upper triangle plane
	glVertex2f(135.0,55.0);
	glVertex2f(150.0,50.0);
	glVertex2f(155.0,45.0);
	glVertex2f(160.0,40.0);
	glVertex2f(135.0,40.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//lower triangle
	glVertex2f(135.0,40.0);
	glVertex2f(160.0,40.0);
	glVertex2f(160.0,37.0);
	glVertex2f(145.0,30.0);
	glVertex2f(135.0,30.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//back wing 
	glVertex2f(0.0,55.0);
	glVertex2f(0.0,80.0);
	glVertex2f(10.0,80.0);
	glVertex2f(40.0,55.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//left side wing
	glVertex2f(65.0,55.0);
	glVertex2f(50.0,70.0);
	glVertex2f(75.0,70.0);
	glVertex2f(90.0,55.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);//rightside wing
	glVertex2f(70.0,40.0);
	glVertex2f(100.0,40.0);
	glVertex2f(80.0,15.0);
	glVertex2f(50.0,15.0);
	glEnd();
	glPopMatrix();
}

  
void display4()
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//cloud
	circle(3,4,200,100);
    circle(3,4,240,100);
    circle(3,4,200,150);
    circle(3,4,160,100);
    //cloud
    circle(3,4,200,800);
    circle(3,4,240,800);
    circle(3,4,200,850);
    circle(3,4,160,800);
    //cloud
    circle(3,4,700,600);
    circle(3,4,740,600);
    circle(3,4,700,650);
    circle(3,4,660,600);
    //cloud
     circle(3,4,900,850);
    circle(3,4,940,850);
    circle(3,4,900,900);
    circle(3,4,860,850);
    	char stra[]="Air Ways";
//	char str8[]="PRESS 'C or c' TO CONTINUE";
	glColor3f(1,1,1);
        glRasterPos2f(450,80);
    for(i=0;i<strlen(stra);i++)
	{
	             glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,stra[i]);
        }      
	 flight(f1);
    	if(flight1==0)
    	{ 
		    if(f1<1500)
          	{
	         	f1+=0.5;
    		    glutPostRedisplay();
		    }
	       else
	       {
	
	            f1=f1-2000;
                glutPostRedisplay(); 
	     	}
    	}

   
	

	char str8[]="Jet Airlines";
	glColor3f(0,0,1);
        glRasterPos2f(20,35);
    for(i=0;i<strlen(str8);i++)
	{
	             glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }      
	
	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();


}

void key4(unsigned char key,int x,int y)
{
	if(key=='C'||key=='c')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id3);
		glutInitWindowSize(1500,750);
		id4=glutCreateWindow("Transportation System");
		glutDisplayFunc(display4);
	}
}

void display3()
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

     
     
      scene();
      //cloud
     circle(3,4,900,850);
    circle(3,4,940,850);
    circle(3,4,900,900);
    circle(3,4,860,850);
   //cloud
   circle(3,4,400,950);
    circle(3,4,440,950);
    circle(3,4,400,1000);
    circle(3,4,360,950);
     boat(b1);
    	
    	if(boat1==0)
    	{ 
		    if(b1<1500)
          	{
	         	b1+=0.5;
    		    glutPostRedisplay();
		    }
	       else
	       {
	
	            b1=b1-2000;
                glutPostRedisplay(); 
	     	}
    	}
	
	
	
		char stra[]="Water Ways";
	char str8[]="PRESS 'C or c' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str8);i++)
	{
	             glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
        glRasterPos2f(450,80);
    for(i=0;i<strlen(stra);i++)
	{
	             glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,stra[i]);
        }      
          glFlush();
        glutKeyboardFunc(key4);
        glutPostRedisplay();
	glutSwapBuffers();

}

void house(){ //car house1
glBegin(GL_POLYGON); //House
glColor3f(0.1, 0.7, 0.1);
glVertex2i(350, 444);
glVertex2i(350, 560);
glVertex2i(430, 560);
glVertex2i(430, 444);
glEnd();


glBegin(GL_POLYGON); //House
glColor3f(0.9, 0.0, 0.0);
glVertex2i(340, 560);
glVertex2i(390, 600);
glVertex2i(440, 560);
glEnd();

glBegin(GL_POLYGON); //Door
glColor3f(1.0, 1.0, 0.0);
glVertex2i(370, 444);
glVertex2i(370, 530);
glVertex2i(410, 530);
glVertex2i(410, 444);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(390, 444);
glVertex2i(390, 530);
glEnd();
}
void home()
{

    glColor3f(0.3, 0.5, 0.8);
    glBegin(GL_POLYGON);
    glVertex2i(200, 900);
    glVertex2i(600, 900);
    glVertex2i(700, 750);
    glVertex2i(300, 750);
    glEnd();
    // Top of Front Wall
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 900);
    glVertex2i(100, 750);
    glVertex2i(300, 750);
    glEnd();
    // Front Wall
    glColor3f(0.7, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(100, 750);
    glVertex2i(300, 750);
    glVertex2i(300, 500);
    glVertex2i(100, 500);
    glEnd();
    // Front Door
    glColor3f(0.7, 0.2, 0.9);
    glBegin(GL_POLYGON);
    glVertex2i(150, 550);
    glVertex2i(250, 550);
    glVertex2i(250, 500);
    glVertex2i(150, 500);
    glEnd();

    // Front Door Lock
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(15);
    glBegin(GL_POINTS);
    glVertex2i(170, 570);
    glEnd();

    //side Wall
    glColor3f(0.1, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(300, 750);
    glVertex2i(700, 750);
    glVertex2i(700, 500);
    glVertex2i(300, 500);
    glEnd();
    // window one
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(330, 720);
    glVertex2i(450, 720);
    glVertex2i(450, 630);
    glVertex2i(330, 630);
    glEnd();
    // line of window one
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(390, 720);
    glVertex2i(390, 630);
    glVertex2i(330, 673);
    glVertex2i(450, 673);
    glEnd();
    // window two
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(530, 720);
    glVertex2i(650, 720);
    glVertex2i(650, 630);
    glVertex2i(530, 630);
    glEnd();
    // lines of window two
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(590, 720);
    glVertex2i(590, 630);
    glVertex2i(530, 673);
    glVertex2i(650, 673);
    glEnd();

    // Entrance Path
    glColor3f(0.3, 0.5, 0.7);
    glLineWidth(3);
    glBegin(GL_POLYGON);
    glVertex2i(150, 500);
    glVertex2i(250, 500);
    glVertex2i(210, 400);
    glVertex2i(40, 400);
    glEnd();
    // Process all OpenGL routine s as quickly as possible
  
}

void house2(){//car house2
glBegin(GL_POLYGON); //House
glColor3f(0.1, 0.7, 0.1);
glVertex2i(850, 744);
glVertex2i(850, 860);
glVertex2i(930, 860);
glVertex2i(930, 744);
glEnd();


glBegin(GL_POLYGON); //House
glColor3f(0.9, 0.0, 0.0);
glVertex2i(840, 860);
glVertex2i(890, 900);
glVertex2i(940, 860);
glEnd();

glBegin(GL_POLYGON); //Door
glColor3f(1.0, 1.0, 0.0);
glVertex2i(870, 744);
glVertex2i(870, 830);
glVertex2i(910, 830);
glVertex2i(910, 744);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(890, 744);
glVertex2i(890, 830);
glEnd();
}


//cloud





void key3(unsigned char key,int x,int y)
{
	if(key=='B'||key=='b')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id2);
		glutInitWindowSize(1500,750);
		id3=glutCreateWindow("Transportation System");
		glutDisplayFunc(display3);
	}
}
void display2()
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	 road();
      car(c1);
      //house();
     house2();
      home();
		   
	if(car1==0)
	{ 
	    if(c1<1500)
      	{
      		
         	c1+=0.45;
         
		    glutPostRedisplay();
	    }
       else
       {

            c1=c1-2000;
     
            glutPostRedisplay(); 
     	}
	}
     
     
     

	char stra[]="Road Ways";
  	char str8[]="PRESS 'B or b' TO CONTINUE";
	glColor3f(1,1,1);
	glRasterPos2f(390,30); 
	for(i=0;i<strlen(str8);i++)                
	{
	 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }
glRasterPos2f(450,80);
    for(i=0;i<strlen(stra);i++)
	{
	             glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,stra[i]);
        }               
        
        glFlush();
        glutKeyboardFunc(key3);
	glutPostRedisplay();
	glutSwapBuffers();
                  

                  
}
void key2(unsigned char key,int x,int y)
{
	if(key=='A'||key=='a')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id1);
		glutInitWindowSize(1500,750);
		id2=glutCreateWindow("Transportation System");
			glutDisplayFunc(display2);
	}
}

//

void init()
{
   	glClearColor(0.0,0.0,0.0,1.0);
   	glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0,1500.0,0.0,1000,0,10);
   	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay(); 
}
int main(int argc,char *argv[])
{
    glutInit(&argc,argv); //initialization
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB| GLUT_DEPTH); //to select buffer and coloring mode
    glutInitWindowSize(1500,1080); //to set the display window size
    glutInitWindowPosition(0,0);
    id1=glutCreateWindow("Transportation System");
    glutKeyboardFunc(key2);
    glutDisplayFunc(mydisplay);
    glEnable(GLUT_DEPTH);
    glutSwapBuffers();
    init();
    glutMainLoop();
    
}

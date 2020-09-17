#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#define PI acos(-1.0)
int ambul=200;
int am=0;
float xax=0,yax=0,zax=0;

GLfloat f=50,g=45,h=15 ;
int day=1;

static GLfloat spin = 0,v=0,b=0;

GLvoid drawCircle(GLdouble rad)
{
	GLint points = 50;
	GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
	GLdouble theta = 0.0;
    GLint i=0;
	glBegin(GL_POLYGON);
	{
		for(i = 0; i <=50; i++, theta += delTheta )
		{
			glVertex2f(rad * cos(theta),rad * sin(theta));
		}
	}
	glEnd();
}


void sky()
{

	glColor3f (0.2, 0.6, 0.8);



	glBegin(GL_POLYGON);
      glVertex3f (600, -200, 0);
      glVertex3f (600, 350, 0);
      glVertex3f (-900, 350, 0);
      glVertex3f (-900, -200, 0);


	glEnd();
}
void night_sky()
{

	glColor3f (0, 0, 0.3);



	  glBegin(GL_POLYGON);
      glVertex3f (600, -200, 0);
      glVertex3f (600, 350, 0);
      glVertex3f (-900, 350, 0);
      glVertex3f (-900, -200, 0);


	glEnd();
}





void ground()
{

	glColor3f (0.4, 0.4, 0.2);



	glBegin(GL_POLYGON); //ground
      glVertex3f (600,-900, 0);
      glVertex3f (600, -130, 0);
      glVertex3f (-900, -130, 0);
      glVertex3f (-900, -900, 0);


	glEnd();



}
void night_ground()
{

	glColor3f (0, 0, 0);



	glBegin(GL_POLYGON); //ground
      glVertex3f (600,-900, 0);
      glVertex3f (600, -130, 0);
      glVertex3f (-900, -130, 0);
      glVertex3f (-900, -900, 0);


	glEnd();


glColor3f (1,1,1);

    glBegin(GL_POLYGON);

        glVertex3f (5, 190, 0);
        glVertex3f (-5, 190, 0);
        glVertex3f (0, 205, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (5, 200, 0);
        glVertex3f (-5,200, 0);
        glVertex3f (0, 185, 0);
     glEnd();


     //2nd

     glBegin(GL_POLYGON);

        glVertex3f (185, 290, 0);
        glVertex3f (175, 290, 0);
        glVertex3f (180, 305, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (185, 300, 0);
        glVertex3f (175,300, 0);
        glVertex3f (180, 285, 0);
     glEnd();


     //3rd

    glBegin(GL_POLYGON);

        glVertex3f (-100, 250, 0);
        glVertex3f (-110, 250, 0);
        glVertex3f (-105, 265, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-100, 260, 0);
        glVertex3f (-110,260, 0);
        glVertex3f (-105, 245, 0);
     glEnd();

     //4th

    glBegin(GL_POLYGON);

        glVertex3f (-700, 250, 0);
        glVertex3f (-710, 250, 0);
        glVertex3f (-705, 265, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-700, 260, 0);
        glVertex3f (-710,260, 0);
        glVertex3f (-705, 245, 0);
     glEnd();


     //5th

    glBegin(GL_POLYGON);

        glVertex3f (-800, 290, 0);
        glVertex3f (-810, 290, 0);
        glVertex3f (-805, 305, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-800, 300, 0);
        glVertex3f (-810,300, 0);
        glVertex3f (-805, 285, 0);
     glEnd();


     //6th

    glBegin(GL_POLYGON);

        glVertex3f (-875, 190, 0);
        glVertex3f (-885, 190, 0);
        glVertex3f (-880, 205, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-875, 200, 0);
        glVertex3f (-885,200, 0);
        glVertex3f (-880, 185, 0);
     glEnd();


     //7th

    glBegin(GL_POLYGON);

        glVertex3f (-750, 50, 0);
        glVertex3f (-760, 50, 0);
        glVertex3f (-755, 65, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-750, 60, 0);
        glVertex3f (-760,60, 0);
        glVertex3f (-755, 45, 0);
     glEnd();


     //8th

    glBegin(GL_POLYGON);

        glVertex3f (-650, 0, 0);
        glVertex3f (-660, 0, 0);
        glVertex3f (-655, 15, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-650, 10, 0);
        glVertex3f (-660,10, 0);
        glVertex3f (-655, -5, 0);
     glEnd();


     //9th

    glBegin(GL_POLYGON);

        glVertex3f (-600, 200, 0);
        glVertex3f (-610, 200, 0);
        glVertex3f (-605, 215, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-600, 210, 0);
        glVertex3f (-610,210, 0);
        glVertex3f (-605, 195, 0);
     glEnd();


     //10th

    glBegin(GL_POLYGON);

        glVertex3f (-450, 120, 0);
        glVertex3f (-460, 120, 0);
        glVertex3f (-455, 135, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-450, 130, 0);
        glVertex3f (-460,130, 0);
        glVertex3f (-455, 115, 0);
     glEnd();


     //11th

     glBegin(GL_POLYGON);

        glVertex3f (-530, 270, 0);
        glVertex3f (-540, 270, 0);
        glVertex3f (-535, 285, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-530, 280, 0);
        glVertex3f (-540,280, 0);
        glVertex3f (-535, 265, 0);
     glEnd();


     //12th

     glBegin(GL_POLYGON);

        glVertex3f (-380, 230, 0);
        glVertex3f (-390, 230, 0);
        glVertex3f (-385, 245, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-380, 240, 0);
        glVertex3f (-390,240, 0);
        glVertex3f (-385, 225, 0);
     glEnd();



     //13th


     glBegin(GL_POLYGON);

        glVertex3f (255, 190, 0);
        glVertex3f (245, 190, 0);
        glVertex3f (250, 205, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (255, 200, 0);
        glVertex3f (245,200, 0);
        glVertex3f (250, 185, 0);
     glEnd();


     //14th


     glBegin(GL_POLYGON);

        glVertex3f (155, 140, 0);
        glVertex3f (145, 140, 0);
        glVertex3f (150, 155, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (155, 150, 0);
        glVertex3f (145,150, 0);
        glVertex3f (150, 135, 0);
     glEnd();


     //15th

     glBegin(GL_POLYGON);

        glVertex3f (-250, 130, 0);
        glVertex3f (-260, 130, 0);
        glVertex3f (-255, 145, 0);
	 glEnd();


     glBegin(GL_POLYGON);

        glVertex3f (-250, 140, 0);
        glVertex3f (-260,140, 0);
        glVertex3f (-255, 125, 0);
     glEnd();


}






void sun()
{

glColor3f(1, .8, 0.0);

	glPushMatrix();



drawCircle(3.5);

	glPopMatrix();



}

void moon()
{

glColor3f(.81, .51, .18);

	glPushMatrix();



drawCircle(3.5);

	glPopMatrix();



}


//1st cloud code start

void cloud1()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}


void cloud2()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}


void cloud3()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}

void cloud4()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}



void cloud5()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}




//1st cloud code end


//2nd cloud code start

void cloud6()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}


void cloud7()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}


void cloud8()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}

void cloud9()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}



void cloud10()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}




//2nd cloud code end


//3rd cloud code start

void cloud11()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}


void cloud12()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}


void cloud13()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}

void cloud14()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}



void cloud15()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}




//3rd cloud code end



//4th cloud code start

void cloud16()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}


void cloud17()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}


void cloud18()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}

void cloud19()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}



void cloud20()
{

glColor3f(1, 1, 1);

	glPushMatrix();



drawCircle(2);

	glPopMatrix();




}




//4th cloud code end


//Tree 1 code start

void tree1()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}

//Tree1 code end


//Tree 4 code start

void tree4()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}

//Tree4 code end



//Tree 5 code start

void tree5()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}

//Tree5 code end


//Tree 6 code start

void tree6()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}

//Tree6 code end


//Tree 7 code start

void tree7()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}

//Tree7 code end


//Tree 8 code start

void tree8()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}

//Tree8 code end


//Tree9 code start

void tree9()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}

//Tree9 code end



//Tree10 code start

void tree10()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}

//Tree10 code end

//Tree11 code start

void tree11()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}

//Tree11 code end



//Tree12 code start

void tree12()
{



glColor3f (0.19, 0.41, 0.02);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -11, 0);
      glVertex3f (12.5, -23, 0);
      glVertex3f (17.5, -23, 0);
	 glEnd();


	 glBegin(GL_POLYGON);

      glVertex3f (15, -13, 0);
      glVertex3f (12, -28, 0);
      glVertex3f (18, -28, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -19, 0);
      glVertex3f (11, -34, 0);
      glVertex3f (19, -34, 0);
	 glEnd();

	 glBegin(GL_POLYGON);

      glVertex3f (15, -26, 0);
      glVertex3f (10, -40, 0);
      glVertex3f (20, -40, 0);
	 glEnd();


	 glColor3f(0.23 , 0.21 , 0.12);
	  glBegin(GL_POLYGON);
      glVertex3f (16.5, -40, 0);
      glVertex3f (13.5, -40, 0);
      glVertex3f (13.5, -45, 0);
      glVertex3f (16.5, -45, 0);
	 glEnd();





}


void drawDisk(double radius)
{
	int d;
	glBegin(GL_POLYGON);
	for (d = 0; d < 32; d++) {
		double angle = 2*PI/32 * d;
		glVertex2d( radius*cos(angle), radius*sin(angle));
	}
	glEnd();
}

static GLfloat x = 0;
static GLfloat a = 99999;

void ambu()
{
    glTranslatef(am/7, 0, 0);
    int i;
    glPushMatrix();

	glScalef(3.0,2.5f,0);
	glColor3f(0,0,0);
	drawDisk(1);
	glColor3f(0.75f, 0.75f, 0.75f);
    drawDisk(0.8);
	glColor3f(0,0,0);
	drawDisk(0.2);
	glRotatef(x,0,0,1);
	glBegin(GL_LINES);
	for (i = 0; i < 15; i++)
    {
		glVertex2f(0,0);
		glVertex2d(cos(i*2*PI/15), sin(i*2*PI/15));
	}
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-10.0f, -9.9f, 0);
	glScalef(3.0f,2.5f,1);
	glColor3f(0,0,0);
    drawDisk(1);
	glColor3f(0.75f, 0.75f, 0.75f);
	drawDisk(0.8);
	glColor3f(0,0,0);
	drawDisk(0.2);
	glRotatef(x,0,0,1);
	glBegin(GL_LINES);
	for (i = 0; i < 15; i++) {
		glVertex2f(0,0);
		glVertex2d(cos(i*2*PI/15), sin(i*2*PI/15));
	}
	glEnd();
	glPopMatrix();
glColor3ub(255,0,0);
glBegin(GL_POLYGON);
glVertex2f(-10-50,7-600);//left & up
glVertex2f(-13-50,5-600);//left & down
glVertex2f(15-50,5-600);//right & down
glVertex2f(14-50,7-600);//right & up
glEnd();
glColor3ub(255,255,255);
glBegin(GL_POLYGON);
glVertex2f(-13,5);//left & up
glVertex2f(-15,0);//left & down
glVertex2f(20,0);//right & down
glVertex2f(15,5);//right & up
glEnd();

glColor3ub(255,255,255);
glBegin(GL_POLYGON);
glVertex2f(-15,0);//left & up
glVertex2f(-20,-5);//left & down
glVertex2f(20,-5);//right & down
glVertex2f(20,0);//right & up
glEnd();
glColor3ub(255,255,255);
glBegin(GL_POLYGON);
glVertex2f(-20,-5);//left & up
glVertex2f(-20,-10);//left & down
glVertex2f(20,-10);//right & down
glVertex2f(20,-5);//right & up
glEnd();

glColor3ub(255,0,0);
glBegin(GL_POLYGON);
glVertex2f(-19,-4);//left & up
glVertex2f(-20,-5);//left & down
glVertex2f(-20,-6);//right & down
glVertex2f(20,-6);//right & up
glVertex2f(20,-4);//right & up
glEnd();

glColor3ub(192,192,192);
glBegin(GL_POLYGON);
glVertex2f(-6,3);
glVertex2f(-6,-2);
glVertex2f(-2,-2);
glVertex2f(-2,3);
glEnd();

glColor3ub(192,192,192);
glBegin(GL_POLYGON);
glVertex2f(-6,3);
glVertex2f(-6,-2);
glVertex2f(-2,-2);
glVertex2f(-2,3);
glEnd();

glColor3ub(192,192,192);
glBegin(GL_POLYGON);
glVertex2f(-12,3);
glVertex2f(-13,-2);
glVertex2f(-8,-2);
glVertex2f(-8,3);
glEnd();

glColor3ub(255,0,0);
glBegin(GL_POLYGON);
glVertex2f(7,1);
glVertex2f(7,-1);
glVertex2f(13,-1);
glVertex2f(13,1);
glEnd();

glColor3ub(255,0,0);
glBegin(GL_POLYGON);
glVertex2f(9,3);
glVertex2f(9,-3);
glVertex2f(11,-3);
glVertex2f(11,3);
glEnd();

glColor3ub(0,0,255);
glBegin(GL_POLYGON);
glVertex2f(-8,8);
glVertex2f(-8,7);
glVertex2f(-7,7);
glVertex2f(-7,8);
glEnd();
glFlush();
}
//Tree12 code end



// Road Start


void road()
{



glColor3f (0, 0, 0);



	  glBegin(GL_POLYGON);
      glVertex3f (60, 23, 0);
      glVertex3f (10, 23, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (60, -20, 0);
	 glEnd();




	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (15, 0, 0);
      glVertex3f (23, 0, 0);
      glVertex3f (23, 5, 0);
      glVertex3f (15, 5, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (30, 0, 0);
      glVertex3f (38, 0, 0);
      glVertex3f (38, 5, 0);
      glVertex3f (30, 5, 0);
	 glEnd();


	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (45, 0, 0);
      glVertex3f (53, 0, 0);
      glVertex3f (53, 5, 0);
      glVertex3f (45, 5, 0);
	 glEnd();



	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (60, 21, 0);
      glVertex3f (10, 21, 0);
      glVertex3f (10, 16, 0);
      glVertex3f (60, 16, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (60, -12, 0);
      glVertex3f (10, -12, 0);
      glVertex3f (10, -17, 0);
      glVertex3f (60, -17, 0);
	 glEnd();









}



//  Road End


// h v c s


void drawheli()
{
	glPushMatrix();
	glTranslatef(v/7,b/10,0);
		glPushMatrix();
		glTranslated(150,80,0);
		glColor3f(1.0,0.0,0.0);	//FRONT BODY
		glBegin(GL_POLYGON);
			glVertex3f(55,40,0);
			glVertex3f(70,0+20,0);
			glVertex3f(140,0+20,0);
			glVertex3f(160,40,0);
			glVertex3f(160,70+20,0);
			glVertex3f(140,100+20,0);
			glVertex3f(70,100+20,0);
			glVertex3f(55,78,0);
		glEnd();
		glColor3f(1.0,0.0,0.0); //LEGS
		glBegin(GL_POLYGON);
			glVertex3f(82,20,0);
			glVertex3f(82,12,0);
			glVertex3f(87,12,0);
			glVertex3f(87,20,0);
		glEnd();
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POLYGON);
			glVertex3f(128,20,0);
			glVertex3f(128,12,0);
			glVertex3f(123,12,0);
			glVertex3f(123,20,0);
		glEnd();
		glColor3f(0.7,0.0,0.0);
		glBegin(GL_POLYGON);
			glVertex3f(70,12,0);
			glVertex3f(140,12,0);
			glVertex3f(140,9,0);
			glVertex3f(70,9,0);
		glEnd();
		glColor3f(0.7,0.0,0.0);
		glBegin(GL_POLYGON);
			glVertex3f(140,12,0);
			glVertex3f(143,14,0);
			glVertex3f(140,9,0);
		glEnd();
		glColor3f(0.7,0.0,0.0);
		glBegin(GL_POLYGON);
			glVertex3f(70,12,0);
			glVertex3f(67,14,0);
			glVertex3f(70,9,0);
		glEnd();
glColor3f(0.8,0.8,0.8);			//FRONT GLASS
glBegin(GL_POLYGON);
	glVertex3f(70,100+20,0);
	glVertex3f(55,78,0);
	glVertex3f(55,40,0);
	glVertex3f(65,50,0);
glEnd();
glColor3f(0.8,0.8,0.8);			//SIDE GLASS
glBegin(GL_POLYGON);
	glVertex3f(74,112-5,0);
	glVertex3f(70,60-5,0);
	glVertex3f(97,60-5,0);
	glVertex3f(97,112-5,0);
glEnd();
glColor3f(0.7,0.0,0.0);			//DOOR
glBegin(GL_POLYGON);
	glVertex3f(100+5,112,0);
	glVertex3f(130+5,112,0);
	glVertex3f(145+5,90,0);
	glVertex3f(145+5,70,0);
	glVertex3f(125+5,30-2,0);
	glVertex3f(100+5,30-2,0);
glEnd();
glColor3f(1.0,0.0,0.0);			//TAIL
glBegin(GL_POLYGON);
	glVertex3f(160,40,0);
	glVertex3f(260,80,0);
	glVertex3f(260,120,0);
	glVertex3f(255,120,0);
	glVertex3f(250,90,0);
	glVertex3f(160,90,0);
glEnd();
glColor3f(1.0,0.0,0.0);			//BOX
glBegin(GL_POLYGON);
	glVertex3f(108,100+20,0);
	glVertex3f(108,130,0);
	glVertex3f(102,130,0);
	glVertex3f(102,100+20,0);
glEnd();
glPopMatrix();
glPushMatrix();					//MAIN SPINING FAN
glTranslatef(255,210,-100);
	spin=spin+2;
	glColor3f(0.8, 0.0, 0.0);
	glRotatef(spin,0,1,0);
	glScalef(1.1,0.07,0);
	glutWireSphere(100, 100, 10);
	glutPostRedisplay();
glPopMatrix();
glPushMatrix();
glTranslatef(398,181,-100);		//TAIL FAN
	glColor3f(1.0, 1.0, 1.0);
	glutSolidSphere(17, 50, 20);
	glutPostRedisplay();
glPopMatrix();
glPushMatrix();
glTranslatef(398,181,-100);		//TAIL FAN
	glColor3f(1.0, 0.0, 0.0);
	glutWireSphere(18, 20, 20);
	glutPostRedisplay();
glPopMatrix();
glPushMatrix();
glTranslatef(398,181,-100);		//TAIL FAN
	spin=spin+2;
	glColor3f(0.8, 0.0, 0.0);
	glRotatef(spin,0,0,1);
	glScalef(1.1,0.2,0);
	glutWireSphere(16, 50, 20);
	glutPostRedisplay();
glPopMatrix();
     glPopMatrix();
glFlush();
}




//h v c e




void house()
{



glColor3f (0.56, 0.05, 0.24);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (20, -20, 0);
	 glEnd();

	glBegin(GL_POLYGON);
      glVertex3f (15, 30, 0);
      glVertex3f ( 10, 30, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (15, -20, 0);
	glEnd();




	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 22, 0);
      glVertex3f (16, 22, 0);
      glVertex3f (16, 17, 0);
      glVertex3f (19, 17, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 22, 0);
      glVertex3f (11, 22, 0);
      glVertex3f (11, 17, 0);
      glVertex3f (14, 17, 0);
	 glEnd();


	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 13, 0);
      glVertex3f (16, 13, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 13, 0);
      glVertex3f (11, 13, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 4, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (14, -1, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 4, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (19, -1, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -10, 0);
      glVertex3f (14, -10, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -10, 0);
      glVertex3f (19, -10, 0);
	 glEnd();








}

void house1()
{



glColor3f (0.98, 0.97, 0.51);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (20, -20, 0);
	 glEnd();

	glBegin(GL_POLYGON);
      glVertex3f (15, 30, 0);
      glVertex3f ( 10, 30, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (15, -20, 0);
	glEnd();




	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 22, 0);
      glVertex3f (16, 22, 0);
      glVertex3f (16, 17, 0);
      glVertex3f (19, 17, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 22, 0);
      glVertex3f (11, 22, 0);
      glVertex3f (11, 17, 0);
      glVertex3f (14, 17, 0);
	 glEnd();


	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 13, 0);
      glVertex3f (16, 13, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 13, 0);
      glVertex3f (11, 13, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 4, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (14, -1, 0);
	 glEnd();

	 	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 4, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (19, -1, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -10, 0);
      glVertex3f (14, -10, 0);
	 glEnd();

	 	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -10, 0);
      glVertex3f (19, -10, 0);
	 glEnd();








}








void house2()
{



glColor3f (	0.37, 0.10, 0.57);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (20, -20, 0);
	 glEnd();

	glBegin(GL_POLYGON);
      glVertex3f (15, 30, 0);
      glVertex3f ( 10, 30, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (15, -20, 0);
	glEnd();




	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 22, 0);
      glVertex3f (16, 22, 0);
      glVertex3f (16, 17, 0);
      glVertex3f (19, 17, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 22, 0);
      glVertex3f (11, 22, 0);
      glVertex3f (11, 17, 0);
      glVertex3f (14, 17, 0);
	 glEnd();


	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 13, 0);
      glVertex3f (16, 13, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 13, 0);
      glVertex3f (11, 13, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 4, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (14, -1, 0);
	 glEnd();

	 	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 4, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (19, -1, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -10, 0);
      glVertex3f (14, -10, 0);
	 glEnd();

	 	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -10, 0);
      glVertex3f (19, -10, 0);
	 glEnd();








}



void house3()
{



glColor3f (0.56, 0.05, 0.24);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (20, -20, 0);
	 glEnd();

	glBegin(GL_POLYGON);
      glVertex3f (15, 20, 0);
      glVertex3f ( 10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (15, -20, 0);
	glEnd();




	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 22, 0);
      glVertex3f (16, 22, 0);
      glVertex3f (16, 17, 0);
      glVertex3f (19, 17, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 22, 0);
      glVertex3f (11, 22, 0);
      glVertex3f (11, 17, 0);
      glVertex3f (14, 17, 0);
	 glEnd();


	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 13, 0);
      glVertex3f (16, 13, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 13, 0);
      glVertex3f (11, 13, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 4, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (14, -1, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 4, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (19, -1, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -10, 0);
      glVertex3f (14, -10, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -10, 0);
      glVertex3f (19, -10, 0);
	 glEnd();








}





void house4()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	 glEnd();



	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 23, 0);
      glVertex3f (16, 23, 0);
      glVertex3f (16, 20, 0);
      glVertex3f (19, 20, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 23, 0);
      glVertex3f (11, 23, 0);
      glVertex3f (11, 20, 0);
      glVertex3f (14, 20, 0);
	 glEnd();


	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 19, 0);
      glVertex3f (16, 19, 0);
      glVertex3f (16, 16, 0);
      glVertex3f (19, 16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 19, 0);
      glVertex3f (11, 19, 0);
      glVertex3f (11, 16, 0);
      glVertex3f (14, 16, 0);
	 glEnd();

	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 15, 0);
      glVertex3f (11, 15, 0);
      glVertex3f (11, 12, 0);
      glVertex3f (14, 12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 15, 0);
      glVertex3f (16, 15, 0);
      glVertex3f (16, 12, 0);
      glVertex3f (19, 12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 11, 0);
      glVertex3f (11, 11, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 11, 0);
      glVertex3f (16, 11, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();


    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 7, 0);
      glVertex3f (11, 7, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (14, 4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 7, 0);
      glVertex3f (16, 7, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (19, 4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 3, 0);
      glVertex3f (11, 3, 0);
      glVertex3f (11, 0, 0);
      glVertex3f (14, 0, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 3, 0);
      glVertex3f (16, 3, 0);
      glVertex3f (16, 0, 0);
      glVertex3f (19, 0, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -1, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (11, -4, 0);
      glVertex3f (14, -4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -1, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (16, -4, 0);
      glVertex3f (19, -4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -8, 0);
      glVertex3f (14, -8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -8, 0);
      glVertex3f (19, -8, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -9, 0);
      glVertex3f (11, -9, 0);
      glVertex3f (11, -12, 0);
      glVertex3f (14, -12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -9, 0);
      glVertex3f (16, -9, 0);
      glVertex3f (16, -12, 0);
      glVertex3f (19, -12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -13, 0);
      glVertex3f (11, -13, 0);
      glVertex3f (11, -16, 0);
      glVertex3f (14, -16, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -13, 0);
      glVertex3f (16, -13, 0);
      glVertex3f (16, -16, 0);
      glVertex3f (19, -16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -17, 0);
      glVertex3f (11, -17, 0);
      glVertex3f (11, -20, 0);
      glVertex3f (14, -20, 0);
	 glEnd();

     glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -17, 0);
      glVertex3f (16, -17, 0);
      glVertex3f (16, -20, 0);
      glVertex3f (19, -20, 0);
	 glEnd();





}



void house5()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	 glEnd();



	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 23, 0);
      glVertex3f (16, 23, 0);
      glVertex3f (16, 20, 0);
      glVertex3f (19, 20, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 23, 0);
      glVertex3f (11, 23, 0);
      glVertex3f (11, 20, 0);
      glVertex3f (14, 20, 0);
	 glEnd();


	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 19, 0);
      glVertex3f (16, 19, 0);
      glVertex3f (16, 16, 0);
      glVertex3f (19, 16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 19, 0);
      glVertex3f (11, 19, 0);
      glVertex3f (11, 16, 0);
      glVertex3f (14, 16, 0);
	 glEnd();

	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 15, 0);
      glVertex3f (11, 15, 0);
      glVertex3f (11, 12, 0);
      glVertex3f (14, 12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 15, 0);
      glVertex3f (16, 15, 0);
      glVertex3f (16, 12, 0);
      glVertex3f (19, 12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 11, 0);
      glVertex3f (11, 11, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 11, 0);
      glVertex3f (16, 11, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();


    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 7, 0);
      glVertex3f (11, 7, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (14, 4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 7, 0);
      glVertex3f (16, 7, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (19, 4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 3, 0);
      glVertex3f (11, 3, 0);
      glVertex3f (11, 0, 0);
      glVertex3f (14, 0, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 3, 0);
      glVertex3f (16, 3, 0);
      glVertex3f (16, 0, 0);
      glVertex3f (19, 0, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -1, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (11, -4, 0);
      glVertex3f (14, -4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -1, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (16, -4, 0);
      glVertex3f (19, -4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -8, 0);
      glVertex3f (14, -8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -8, 0);
      glVertex3f (19, -8, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -9, 0);
      glVertex3f (11, -9, 0);
      glVertex3f (11, -12, 0);
      glVertex3f (14, -12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -9, 0);
      glVertex3f (16, -9, 0);
      glVertex3f (16, -12, 0);
      glVertex3f (19, -12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -13, 0);
      glVertex3f (11, -13, 0);
      glVertex3f (11, -16, 0);
      glVertex3f (14, -16, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -13, 0);
      glVertex3f (16, -13, 0);
      glVertex3f (16, -16, 0);
      glVertex3f (19, -16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -17, 0);
      glVertex3f (11, -17, 0);
      glVertex3f (11, -20, 0);
      glVertex3f (14, -20, 0);
	 glEnd();

     glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -17, 0);
      glVertex3f (16, -17, 0);
      glVertex3f (16, -20, 0);
      glVertex3f (19, -20, 0);
	 glEnd();





}


void house6()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	 glEnd();



	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 23, 0);
      glVertex3f (16, 23, 0);
      glVertex3f (16, 20, 0);
      glVertex3f (19, 20, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 23, 0);
      glVertex3f (11, 23, 0);
      glVertex3f (11, 20, 0);
      glVertex3f (14, 20, 0);
	 glEnd();


	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 19, 0);
      glVertex3f (16, 19, 0);
      glVertex3f (16, 16, 0);
      glVertex3f (19, 16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 19, 0);
      glVertex3f (11, 19, 0);
      glVertex3f (11, 16, 0);
      glVertex3f (14, 16, 0);
	 glEnd();

	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 15, 0);
      glVertex3f (11, 15, 0);
      glVertex3f (11, 12, 0);
      glVertex3f (14, 12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 15, 0);
      glVertex3f (16, 15, 0);
      glVertex3f (16, 12, 0);
      glVertex3f (19, 12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 11, 0);
      glVertex3f (11, 11, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 11, 0);
      glVertex3f (16, 11, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();


    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 7, 0);
      glVertex3f (11, 7, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (14, 4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 7, 0);
      glVertex3f (16, 7, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (19, 4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 3, 0);
      glVertex3f (11, 3, 0);
      glVertex3f (11, 0, 0);
      glVertex3f (14, 0, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 3, 0);
      glVertex3f (16, 3, 0);
      glVertex3f (16, 0, 0);
      glVertex3f (19, 0, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -1, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (11, -4, 0);
      glVertex3f (14, -4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -1, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (16, -4, 0);
      glVertex3f (19, -4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -8, 0);
      glVertex3f (14, -8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -8, 0);
      glVertex3f (19, -8, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -9, 0);
      glVertex3f (11, -9, 0);
      glVertex3f (11, -12, 0);
      glVertex3f (14, -12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -9, 0);
      glVertex3f (16, -9, 0);
      glVertex3f (16, -12, 0);
      glVertex3f (19, -12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -13, 0);
      glVertex3f (11, -13, 0);
      glVertex3f (11, -16, 0);
      glVertex3f (14, -16, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -13, 0);
      glVertex3f (16, -13, 0);
      glVertex3f (16, -16, 0);
      glVertex3f (19, -16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -17, 0);
      glVertex3f (11, -17, 0);
      glVertex3f (11, -20, 0);
      glVertex3f (14, -20, 0);
	 glEnd();

     glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -17, 0);
      glVertex3f (16, -17, 0);
      glVertex3f (16, -20, 0);
      glVertex3f (19, -20, 0);
	 glEnd();





}


void house7()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	 glEnd();



	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 23, 0);
      glVertex3f (16, 23, 0);
      glVertex3f (16, 20, 0);
      glVertex3f (19, 20, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 23, 0);
      glVertex3f (11, 23, 0);
      glVertex3f (11, 20, 0);
      glVertex3f (14, 20, 0);
	 glEnd();


	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 19, 0);
      glVertex3f (16, 19, 0);
      glVertex3f (16, 16, 0);
      glVertex3f (19, 16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 19, 0);
      glVertex3f (11, 19, 0);
      glVertex3f (11, 16, 0);
      glVertex3f (14, 16, 0);
	 glEnd();

	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 15, 0);
      glVertex3f (11, 15, 0);
      glVertex3f (11, 12, 0);
      glVertex3f (14, 12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 15, 0);
      glVertex3f (16, 15, 0);
      glVertex3f (16, 12, 0);
      glVertex3f (19, 12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 11, 0);
      glVertex3f (11, 11, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 11, 0);
      glVertex3f (16, 11, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();


    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 7, 0);
      glVertex3f (11, 7, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (14, 4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 7, 0);
      glVertex3f (16, 7, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (19, 4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 3, 0);
      glVertex3f (11, 3, 0);
      glVertex3f (11, 0, 0);
      glVertex3f (14, 0, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 3, 0);
      glVertex3f (16, 3, 0);
      glVertex3f (16, 0, 0);
      glVertex3f (19, 0, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -1, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (11, -4, 0);
      glVertex3f (14, -4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -1, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (16, -4, 0);
      glVertex3f (19, -4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -8, 0);
      glVertex3f (14, -8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -8, 0);
      glVertex3f (19, -8, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -9, 0);
      glVertex3f (11, -9, 0);
      glVertex3f (11, -12, 0);
      glVertex3f (14, -12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -9, 0);
      glVertex3f (16, -9, 0);
      glVertex3f (16, -12, 0);
      glVertex3f (19, -12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -13, 0);
      glVertex3f (11, -13, 0);
      glVertex3f (11, -16, 0);
      glVertex3f (14, -16, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -13, 0);
      glVertex3f (16, -13, 0);
      glVertex3f (16, -16, 0);
      glVertex3f (19, -16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -17, 0);
      glVertex3f (11, -17, 0);
      glVertex3f (11, -20, 0);
      glVertex3f (14, -20, 0);
	 glEnd();

     glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -17, 0);
      glVertex3f (16, -17, 0);
      glVertex3f (16, -20, 0);
      glVertex3f (19, -20, 0);
	 glEnd();





}


void house8()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	 glEnd();



	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 23, 0);
      glVertex3f (16, 23, 0);
      glVertex3f (16, 20, 0);
      glVertex3f (19, 20, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 23, 0);
      glVertex3f (11, 23, 0);
      glVertex3f (11, 20, 0);
      glVertex3f (14, 20, 0);
	 glEnd();


	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 19, 0);
      glVertex3f (16, 19, 0);
      glVertex3f (16, 16, 0);
      glVertex3f (19, 16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 19, 0);
      glVertex3f (11, 19, 0);
      glVertex3f (11, 16, 0);
      glVertex3f (14, 16, 0);
	 glEnd();

	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 15, 0);
      glVertex3f (11, 15, 0);
      glVertex3f (11, 12, 0);
      glVertex3f (14, 12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 15, 0);
      glVertex3f (16, 15, 0);
      glVertex3f (16, 12, 0);
      glVertex3f (19, 12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 11, 0);
      glVertex3f (11, 11, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 11, 0);
      glVertex3f (16, 11, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();


    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 7, 0);
      glVertex3f (11, 7, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (14, 4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 7, 0);
      glVertex3f (16, 7, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (19, 4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 3, 0);
      glVertex3f (11, 3, 0);
      glVertex3f (11, 0, 0);
      glVertex3f (14, 0, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 3, 0);
      glVertex3f (16, 3, 0);
      glVertex3f (16, 0, 0);
      glVertex3f (19, 0, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -1, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (11, -4, 0);
      glVertex3f (14, -4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -1, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (16, -4, 0);
      glVertex3f (19, -4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -8, 0);
      glVertex3f (14, -8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -8, 0);
      glVertex3f (19, -8, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -9, 0);
      glVertex3f (11, -9, 0);
      glVertex3f (11, -12, 0);
      glVertex3f (14, -12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -9, 0);
      glVertex3f (16, -9, 0);
      glVertex3f (16, -12, 0);
      glVertex3f (19, -12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -13, 0);
      glVertex3f (11, -13, 0);
      glVertex3f (11, -16, 0);
      glVertex3f (14, -16, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -13, 0);
      glVertex3f (16, -13, 0);
      glVertex3f (16, -16, 0);
      glVertex3f (19, -16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -17, 0);
      glVertex3f (11, -17, 0);
      glVertex3f (11, -20, 0);
      glVertex3f (14, -20, 0);
	 glEnd();

     glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -17, 0);
      glVertex3f (16, -17, 0);
      glVertex3f (16, -20, 0);
      glVertex3f (19, -20, 0);
	 glEnd();





}


void house9()
{



glColor3f (0.56, 0.05, 0.24);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (20, -20, 0);
	 glEnd();

	glBegin(GL_POLYGON);
      glVertex3f (15, 30, 0);
      glVertex3f ( 10, 30, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (15, -20, 0);
	glEnd();




	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 22, 0);
      glVertex3f (16, 22, 0);
      glVertex3f (16, 17, 0);
      glVertex3f (19, 17, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 22, 0);
      glVertex3f (11, 22, 0);
      glVertex3f (11, 17, 0);
      glVertex3f (14, 17, 0);
	 glEnd();


	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 13, 0);
      glVertex3f (16, 13, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 13, 0);
      glVertex3f (11, 13, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 4, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (14, -1, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 4, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (19, -1, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -10, 0);
      glVertex3f (14, -10, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -10, 0);
      glVertex3f (19, -10, 0);
	 glEnd();








}


void house10()
{



glColor3f (0.56, 0.05, 0.24);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (20, -20, 0);
	 glEnd();

	glBegin(GL_POLYGON);
      glVertex3f (15, 30, 0);
      glVertex3f ( 10, 30, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (15, -20, 0);
	glEnd();




	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 22, 0);
      glVertex3f (16, 22, 0);
      glVertex3f (16, 17, 0);
      glVertex3f (19, 17, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 22, 0);
      glVertex3f (11, 22, 0);
      glVertex3f (11, 17, 0);
      glVertex3f (14, 17, 0);
	 glEnd();


	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 13, 0);
      glVertex3f (16, 13, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 13, 0);
      glVertex3f (11, 13, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 4, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (14, -1, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 4, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (19, -1, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -10, 0);
      glVertex3f (14, -10, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -10, 0);
      glVertex3f (19, -10, 0);
	 glEnd();








}


void house11()
{



glColor3f (0.56, 0.05, 0.24);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (20, -20, 0);
	 glEnd();

	glBegin(GL_POLYGON);
      glVertex3f (15, 30, 0);
      glVertex3f ( 10, 30, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (15, -20, 0);
	glEnd();




	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 22, 0);
      glVertex3f (16, 22, 0);
      glVertex3f (16, 17, 0);
      glVertex3f (19, 17, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 22, 0);
      glVertex3f (11, 22, 0);
      glVertex3f (11, 17, 0);
      glVertex3f (14, 17, 0);
	 glEnd();


	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 13, 0);
      glVertex3f (16, 13, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 13, 0);
      glVertex3f (11, 13, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 4, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (14, -1, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 4, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (19, -1, 0);
	 glEnd();

	 glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -10, 0);
      glVertex3f (14, -10, 0);
	 glEnd();

	 	glColor3f(1 , 1 , 1);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -10, 0);
      glVertex3f (19, -10, 0);
	 glEnd();








}


void house12()
{



glColor3f (	0.37, 0.10, 0.57);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (20, -20, 0);
	 glEnd();

	glBegin(GL_POLYGON);
      glVertex3f (15, 30, 0);
      glVertex3f ( 10, 30, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (15, -20, 0);
	glEnd();




	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 22, 0);
      glVertex3f (16, 22, 0);
      glVertex3f (16, 17, 0);
      glVertex3f (19, 17, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 22, 0);
      glVertex3f (11, 22, 0);
      glVertex3f (11, 17, 0);
      glVertex3f (14, 17, 0);
	 glEnd();


	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 13, 0);
      glVertex3f (16, 13, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 13, 0);
      glVertex3f (11, 13, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 4, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (14, -1, 0);
	 glEnd();

	 	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 4, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (19, -1, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -10, 0);
      glVertex3f (14, -10, 0);
	 glEnd();

	 	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -10, 0);
      glVertex3f (19, -10, 0);
	 glEnd();








}



void house13()
{



glColor3f (	0.37, 0.10, 0.57);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (20, -20, 0);
	 glEnd();

	glBegin(GL_POLYGON);
      glVertex3f (15, 30, 0);
      glVertex3f ( 10, 30, 0);
      glVertex3f (10, -20, 0);
      glVertex3f (15, -20, 0);
	glEnd();




	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 22, 0);
      glVertex3f (16, 22, 0);
      glVertex3f (16, 17, 0);
      glVertex3f (19, 17, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 22, 0);
      glVertex3f (11, 22, 0);
      glVertex3f (11, 17, 0);
      glVertex3f (14, 17, 0);
	 glEnd();


	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 13, 0);
      glVertex3f (16, 13, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 13, 0);
      glVertex3f (11, 13, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 4, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (14, -1, 0);
	 glEnd();

	 	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 4, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (19, -1, 0);
	 glEnd();

	 glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -10, 0);
      glVertex3f (14, -10, 0);
	 glEnd();

	 	glColor3f(0.6 , 0.5 , 0.4);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -10, 0);
      glVertex3f (19, -10, 0);
	 glEnd();








}


void house14()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	 glEnd();



	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 23, 0);
      glVertex3f (16, 23, 0);
      glVertex3f (16, 20, 0);
      glVertex3f (19, 20, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 23, 0);
      glVertex3f (11, 23, 0);
      glVertex3f (11, 20, 0);
      glVertex3f (14, 20, 0);
	 glEnd();


	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 19, 0);
      glVertex3f (16, 19, 0);
      glVertex3f (16, 16, 0);
      glVertex3f (19, 16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 19, 0);
      glVertex3f (11, 19, 0);
      glVertex3f (11, 16, 0);
      glVertex3f (14, 16, 0);
	 glEnd();

	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 15, 0);
      glVertex3f (11, 15, 0);
      glVertex3f (11, 12, 0);
      glVertex3f (14, 12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 15, 0);
      glVertex3f (16, 15, 0);
      glVertex3f (16, 12, 0);
      glVertex3f (19, 12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 11, 0);
      glVertex3f (11, 11, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 11, 0);
      glVertex3f (16, 11, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();


    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 7, 0);
      glVertex3f (11, 7, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (14, 4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 7, 0);
      glVertex3f (16, 7, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (19, 4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 3, 0);
      glVertex3f (11, 3, 0);
      glVertex3f (11, 0, 0);
      glVertex3f (14, 0, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 3, 0);
      glVertex3f (16, 3, 0);
      glVertex3f (16, 0, 0);
      glVertex3f (19, 0, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -1, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (11, -4, 0);
      glVertex3f (14, -4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -1, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (16, -4, 0);
      glVertex3f (19, -4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -8, 0);
      glVertex3f (14, -8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -8, 0);
      glVertex3f (19, -8, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -9, 0);
      glVertex3f (11, -9, 0);
      glVertex3f (11, -12, 0);
      glVertex3f (14, -12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -9, 0);
      glVertex3f (16, -9, 0);
      glVertex3f (16, -12, 0);
      glVertex3f (19, -12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -13, 0);
      glVertex3f (11, -13, 0);
      glVertex3f (11, -16, 0);
      glVertex3f (14, -16, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -13, 0);
      glVertex3f (16, -13, 0);
      glVertex3f (16, -16, 0);
      glVertex3f (19, -16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -17, 0);
      glVertex3f (11, -17, 0);
      glVertex3f (11, -20, 0);
      glVertex3f (14, -20, 0);
	 glEnd();

     glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -17, 0);
      glVertex3f (16, -17, 0);
      glVertex3f (16, -20, 0);
      glVertex3f (19, -20, 0);
	 glEnd();





}



void house15()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	 glEnd();



	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 23, 0);
      glVertex3f (16, 23, 0);
      glVertex3f (16, 20, 0);
      glVertex3f (19, 20, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 23, 0);
      glVertex3f (11, 23, 0);
      glVertex3f (11, 20, 0);
      glVertex3f (14, 20, 0);
	 glEnd();


	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 19, 0);
      glVertex3f (16, 19, 0);
      glVertex3f (16, 16, 0);
      glVertex3f (19, 16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 19, 0);
      glVertex3f (11, 19, 0);
      glVertex3f (11, 16, 0);
      glVertex3f (14, 16, 0);
	 glEnd();

	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 15, 0);
      glVertex3f (11, 15, 0);
      glVertex3f (11, 12, 0);
      glVertex3f (14, 12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 15, 0);
      glVertex3f (16, 15, 0);
      glVertex3f (16, 12, 0);
      glVertex3f (19, 12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 11, 0);
      glVertex3f (11, 11, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 11, 0);
      glVertex3f (16, 11, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();


    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 7, 0);
      glVertex3f (11, 7, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (14, 4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 7, 0);
      glVertex3f (16, 7, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (19, 4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 3, 0);
      glVertex3f (11, 3, 0);
      glVertex3f (11, 0, 0);
      glVertex3f (14, 0, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 3, 0);
      glVertex3f (16, 3, 0);
      glVertex3f (16, 0, 0);
      glVertex3f (19, 0, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -1, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (11, -4, 0);
      glVertex3f (14, -4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -1, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (16, -4, 0);
      glVertex3f (19, -4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -8, 0);
      glVertex3f (14, -8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -8, 0);
      glVertex3f (19, -8, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -9, 0);
      glVertex3f (11, -9, 0);
      glVertex3f (11, -12, 0);
      glVertex3f (14, -12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -9, 0);
      glVertex3f (16, -9, 0);
      glVertex3f (16, -12, 0);
      glVertex3f (19, -12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -13, 0);
      glVertex3f (11, -13, 0);
      glVertex3f (11, -16, 0);
      glVertex3f (14, -16, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -13, 0);
      glVertex3f (16, -13, 0);
      glVertex3f (16, -16, 0);
      glVertex3f (19, -16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -17, 0);
      glVertex3f (11, -17, 0);
      glVertex3f (11, -20, 0);
      glVertex3f (14, -20, 0);
	 glEnd();

     glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -17, 0);
      glVertex3f (16, -17, 0);
      glVertex3f (16, -20, 0);
      glVertex3f (19, -20, 0);
	 glEnd();





}


/*
void house16()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);
      glVertex3f (20, 25, 0);
      glVertex3f (10, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	 glEnd();



	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 23, 0);
      glVertex3f (16, 23, 0);
      glVertex3f (16, 20, 0);
      glVertex3f (19, 20, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 23, 0);
      glVertex3f (11, 23, 0);
      glVertex3f (11, 20, 0);
      glVertex3f (14, 20, 0);
	 glEnd();


	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 19, 0);
      glVertex3f (16, 19, 0);
      glVertex3f (16, 16, 0);
      glVertex3f (19, 16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 19, 0);
      glVertex3f (11, 19, 0);
      glVertex3f (11, 16, 0);
      glVertex3f (14, 16, 0);
	 glEnd();

	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 15, 0);
      glVertex3f (11, 15, 0);
      glVertex3f (11, 12, 0);
      glVertex3f (14, 12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 15, 0);
      glVertex3f (16, 15, 0);
      glVertex3f (16, 12, 0);
      glVertex3f (19, 12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 11, 0);
      glVertex3f (11, 11, 0);
      glVertex3f (11, 8, 0);
      glVertex3f (14, 8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 11, 0);
      glVertex3f (16, 11, 0);
      glVertex3f (16, 8, 0);
      glVertex3f (19, 8, 0);
	 glEnd();


    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 7, 0);
      glVertex3f (11, 7, 0);
      glVertex3f (11, 4, 0);
      glVertex3f (14, 4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 7, 0);
      glVertex3f (16, 7, 0);
      glVertex3f (16, 4, 0);
      glVertex3f (19, 4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, 3, 0);
      glVertex3f (11, 3, 0);
      glVertex3f (11, 0, 0);
      glVertex3f (14, 0, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, 3, 0);
      glVertex3f (16, 3, 0);
      glVertex3f (16, 0, 0);
      glVertex3f (19, 0, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -1, 0);
      glVertex3f (11, -1, 0);
      glVertex3f (11, -4, 0);
      glVertex3f (14, -4, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -1, 0);
      glVertex3f (16, -1, 0);
      glVertex3f (16, -4, 0);
      glVertex3f (19, -4, 0);
	 glEnd();

    glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -5, 0);
      glVertex3f (11, -5, 0);
      glVertex3f (11, -8, 0);
      glVertex3f (14, -8, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -5, 0);
      glVertex3f (16, -5, 0);
      glVertex3f (16, -8, 0);
      glVertex3f (19, -8, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -9, 0);
      glVertex3f (11, -9, 0);
      glVertex3f (11, -12, 0);
      glVertex3f (14, -12, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -9, 0);
      glVertex3f (16, -9, 0);
      glVertex3f (16, -12, 0);
      glVertex3f (19, -12, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -13, 0);
      glVertex3f (11, -13, 0);
      glVertex3f (11, -16, 0);
      glVertex3f (14, -16, 0);
	 glEnd();

	 	glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -13, 0);
      glVertex3f (16, -13, 0);
      glVertex3f (16, -16, 0);
      glVertex3f (19, -16, 0);
	 glEnd();

	 glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (14, -17, 0);
      glVertex3f (11, -17, 0);
      glVertex3f (11, -20, 0);
      glVertex3f (14, -20, 0);
	 glEnd();

     glColor3f(0 , 0 , 0);
	  glBegin(GL_POLYGON);
      glVertex3f (19, -17, 0);
      glVertex3f (16, -17, 0);
      glVertex3f (16, -20, 0);
      glVertex3f (19, -20, 0);
	 glEnd();


}
*/






//House Head Code Start Here


void househead4()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);

      glVertex3f (15, -40, 0);
      glVertex3f (10, -88, 0);
      glVertex3f (20, -88, 0);
	 glEnd();



}


void househead5()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);

      glVertex3f (15, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	 glEnd();



}

void househead6()
{



glColor3f (1, 1, 1);



	  glBegin(GL_POLYGON);

      glVertex3f (15, 25, 0);
      glVertex3f (10, -23, 0);
      glVertex3f (20, -23, 0);
	  glEnd();



}


//House Head Code End Here


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    if(day==1){
  glPushMatrix();
  sky();
  ground();

  glPopMatrix();
    }
    else
    {
         glPushMatrix();
          night_sky();
          night_ground();

          glPopMatrix();
    }



  glPushMatrix();

glRotatef(30, 1, 0, 90);

  glTranslatef(-15,-14,0);
glScalef(4.9,0.90,0);

  glPopMatrix();

    if(day==1){
   glPushMatrix();
  glTranslatef(-180,320,0);
  glScalef(8,9.5,0);
  sun();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(-180,320,0);
      glScalef(8,9.5,0);
      moon();
      glPopMatrix();
    }



//1st cloud start


if(day==1){
   glPushMatrix();
  glTranslatef(-600,230,0);
  glScalef(42,25,0);
  cloud1();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud1();
      glPopMatrix();
    }




if(day==1){
   glPushMatrix();
  glTranslatef(-580,260,0);
  glScalef(20,20,0);
  cloud2();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud2();
      glPopMatrix();
    }


    if(day==1){
   glPushMatrix();
  glTranslatef(-620,260,0);
  glScalef(20,20,0);
  cloud3();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud3();
      glPopMatrix();
    }


    if(day==1){
   glPushMatrix();
  glTranslatef(-620,210,0);
  glScalef(20,20,0);
  cloud4();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud4();
      glPopMatrix();
    }

if(day==1){
   glPushMatrix();
  glTranslatef(-580,210,0);
  glScalef(20,20,0);
  cloud5();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud5();
      glPopMatrix();
    }

//1st cloud end



//2nd cloud start


if(day==1){
   glPushMatrix();
  glTranslatef(-350,230,0);
  glScalef(42,25,0);
  cloud6();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud6();
      glPopMatrix();
    }



if(day==1){
   glPushMatrix();
  glTranslatef(-330,260,0);
  glScalef(20,20,0);
  cloud7();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud7();
      glPopMatrix();
    }


    if(day==1){
   glPushMatrix();
  glTranslatef(-370,260,0);
  glScalef(20,20,0);
  cloud8();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud8();
      glPopMatrix();
    }


    if(day==1){
   glPushMatrix();
  glTranslatef(-370,210,0);
  glScalef(20,20,0);
  cloud9();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud9();
      glPopMatrix();
    }

if(day==1){
   glPushMatrix();
  glTranslatef(-330,210,0);
  glScalef(20,20,0);
  cloud10();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud10();
      glPopMatrix();
    }

//2nd cloud end


//3rd cloud start


if(day==1){
   glPushMatrix();
  glTranslatef(-50,230,0);
  glScalef(42,25,0);
  cloud11();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud11();
      glPopMatrix();
    }


if(day==1){
   glPushMatrix();
  glTranslatef(-30,260,0);
  glScalef(20,20,0);
  cloud12();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud12();
      glPopMatrix();
    }


    if(day==1){
   glPushMatrix();
  glTranslatef(-70,260,0);
  glScalef(20,20,0);
  cloud13();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud13();
      glPopMatrix();
    }


    if(day==1){
   glPushMatrix();
  glTranslatef(-70,210,0);
  glScalef(20,20,0);
  cloud14();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud14();
      glPopMatrix();
    }

if(day==1){
   glPushMatrix();
  glTranslatef(-30,210,0);
  glScalef(20,20,0);
  cloud15();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud15();
      glPopMatrix();
    }

//3rd cloud end


//3rd cloud start


if(day==1){
   glPushMatrix();
  glTranslatef(200,230,0);
  glScalef(42,25,0);
  cloud16();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud16();
      glPopMatrix();
    }




if(day==1){
   glPushMatrix();
  glTranslatef(220,260,0);
  glScalef(20,20,0);
  cloud17();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud17();
      glPopMatrix();
    }


    if(day==1){
   glPushMatrix();
  glTranslatef(180,260,0);
  glScalef(20,20,0);
  cloud18();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud18();
      glPopMatrix();
    }


    if(day==1){
   glPushMatrix();
  glTranslatef(180,210,0);
  glScalef(20,20,0);
  cloud19();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
        glTranslatef(0,0,0);
        glScalef(0,0,0);
        cloud19();
        glPopMatrix();
    }

if(day==1){
   glPushMatrix();
   glTranslatef(220,210,0);
   glScalef(20,20,0);
   cloud20();
  glPopMatrix();
    }
    else
    {
        glPushMatrix();
      glTranslatef(0,0,0);
      glScalef(0,0,0);
      cloud20();
      glPopMatrix();
    }

//4th cloud end



  glPushMatrix();
    glTranslatef(180,-130,0);
    glScalef(5.0,3.0,0);
    house10();
    glPopMatrix();



//tree

 glPushMatrix();

  glTranslatef(0,0,0);
  glScalef(11.0,6.3,0);
  tree1();
  glPopMatrix();


  glPushMatrix();

  glTranslatef(-100,50,0);
  glScalef(7.0,6.0,0);
  tree6();
  glPopMatrix();


glPushMatrix();

  glTranslatef(-200,0,0);
  glScalef(7.0,4.0,0);
  tree7();
  glPopMatrix();


glPushMatrix();

  glTranslatef(-750,50,0);
  glScalef(7.0,8.0,0);
  tree8();
  glPopMatrix();

  glPushMatrix();

  glTranslatef(-950,-50,0);
  glScalef(7.0,2.0,0);
  tree9();
  glPopMatrix();

  glPushMatrix();

  glTranslatef(-575,-75,0);
  glScalef(7.0,2.0,0);
  tree10();
  glPopMatrix();

  glPushMatrix();

  glTranslatef(200,-100,0);
    glScalef(7.0,2.0,0);
    tree11();
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0,-100,0);
    glScalef(7.0,2.0,0);
    tree12();
  glPopMatrix();



//tree



// Road Display Start

glPushMatrix();

  glTranslatef(-1200,-680,0);
  glScalef(30.0,5.0,0);
  road();
  glPopMatrix();


//Road Display End

    glPushMatrix();
        glTranslatef(-30,-130,0);
        glScalef(5.0,4.0,0);
        house14();
    glPopMatrix();


    glPushMatrix();
        glTranslatef(-430,-150,0);
        glScalef(5.0,3.0,0);
        house15();
    glPopMatrix();


    /*glPushMatrix();
        glTranslatef(300,-130,0);
        glScalef(5.0,6.0,0);
        house16();
    glPopMatrix();
*/



// h d c s


  glPushMatrix();
  glTranslatef(160,70,0);
  glScalef(1.0,1.2,0);
  drawheli();
  glPopMatrix();
 glPushMatrix();
  glTranslatef(160,70,0);
  glScalef(1.0,1.2,0);
  ambu();
  glPopMatrix();


// h d c e



  glPushMatrix();

  glTranslatef(-450,-380,0);
  glScalef(11.0,7.3,0);
  house();
  glPopMatrix();




   /*glPushMatrix();

  glTranslatef(-100,-400,0);
  glScalef(10.0,7.3,0);
  house1();
  glPopMatrix();
*/

   /* glPushMatrix();
    glTranslatef(-700,-200,0);
    glScalef(8.0,13.3,0);
    house4();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(-500,-100,0);
    glScalef(5.0,5.0,0);
    house5();
    glPopMatrix();

*/
    /*glPushMatrix();
    glTranslatef(-900,-100,0);
    glScalef(5.0,13.0,0);
    house6();
    glPopMatrix();
*/

   /* glPushMatrix();
    glTranslatef(450,-200,0);
    glScalef(5.0,13.0,0);
    house7();
    glPopMatrix();
    */


   /* glPushMatrix();
    glTranslatef(-770,-150,0);
    glScalef(5.0,6.0,0);
    house8();
    glPopMatrix();
*/

    glPushMatrix();
    glTranslatef(-840,-100,0);
    glScalef(5.0,3.0,0);
    house9();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(60,-350,0);
    glScalef(8.0,6.0,0);
    house11();
    glPopMatrix();


    glPushMatrix();

        glTranslatef(-600,0,0);
        glScalef(13.0,9.3,0);
        tree4();
    glPopMatrix();


    glPushMatrix();

  glTranslatef(-200,-360,0);
  glScalef(9.0,5.0,0);
  house12();
  glPopMatrix();


    glPushMatrix();

  glTranslatef(220,-360,0);
  glScalef(10.0,6.0,0);
  house13();
  glPopMatrix();


  glPushMatrix();

  glTranslatef(-655,-400,0);
  glScalef(10,7.3,0);
  house2();
  glPopMatrix();



  glPushMatrix();

  glTranslatef(-340,-380,0);
  glScalef(11.0,7.3,0);
  house3();
  glPopMatrix();


  glPushMatrix();

  glTranslatef(-950,20,0);
  glScalef(13.0,12.3,0);
  tree5();
  glPopMatrix();


//House Head start



    glPushMatrix();
        glTranslatef(-745,150,0);
        glScalef(11.0,1.0,0);
        househead4();
    glPopMatrix();



    glPushMatrix();
        glTranslatef(-930,240,0);
        glScalef(7.0,1.0,0);
        househead5();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(420,140,0);
        glScalef(7.0,1.0,0);
        househead6();
    glPopMatrix();

//House head End

	 glPushMatrix();
  glTranslatef(20,30,0);
glScalef(.4,.5,0);

  glPopMatrix();


 glPushMatrix();

  glTranslatef(-22,1,0);
glScalef(8.5,2.8,0);


  glPopMatrix();

glutSwapBuffers();

	glFlush();

   glPushMatrix();
	glTranslatef(a, .75, 0);
	glScalef(0.04,0.06,0);
    ambu();
	glPopMatrix();


}


void spinDisplay(void)
{

f -= 0.0173;

	if(30>= f)
		f = 50.0;

g -= 0.0173;

	if(-5>= g)
		g = 15.0;

	glutPostRedisplay();
}

void spinDisplay1(void)
{

f -= 0.0173;

	if(30>= f)
		f = 50.0;

g -= 0.0173;

	if(-5>= g)
		g = 15.0;
h -= 0.0173;

	if(20>= h)
		h = 43.0;

	glutPostRedisplay();
}




void init(void)
{
        glClearColor (1.0, 1.0, 1.0, 0.0);
 	    glColor3f(1.0,1.0,1.0);
 	    glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(-900.0,600.0,-900.0,350,0.0,250.0);
        glMatrixMode(GL_MODELVIEW);
}

// h c key code s


//MOVE UP
void upper()
{
	b++;
    glutPostRedisplay();
}

//MOVE DOWN
void down()
{
	b--;
    glutPostRedisplay();
}

//MOVE LEFT
void lefter()
{
	v--;
    glutPostRedisplay();
}

//MOVE RIGHT
void restrt()
{
	v=b=0;
	v--;
    glutPostRedisplay();
}

//MOVE RIGHT
void righter()
{
	v++;
    glutPostRedisplay();
}
void amb()
{
	am--;
    glutPostRedisplay();
}

//Keyboard function to move the helicopter
void keys(unsigned char key,int x,int y)
{
    if(key=='h'){

            for (int j=0;j<300;j++){
                ambul--;
                glutIdleFunc(amb);
            }



    }
  if(key=='w')
  {
	glutIdleFunc(upper);
  }
  if(key=='s')
  {
    glutIdleFunc(down);
  }
  if(key=='a')
  {
    glutIdleFunc(lefter);
  }

  if(key=='r')
  {
    glutIdleFunc(restrt);
  }


  switch (key)
	{

            case 't':
			 glutIdleFunc(spinDisplay1);

			break;

            case 'm':
			 day=1;

			break;

			 case 'n':
			 day=0;

			break;


		case 'u':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}


}




// h c key code e









//MAIN FUNCTION

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1396, 768);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Graphic Ever");
    glutDisplayFunc(display);

	glutKeyboardFunc(keys);

    init();

    glutMainLoop();
    return 0;

}


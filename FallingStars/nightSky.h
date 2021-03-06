#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>
using namespace std;

class NightSky{
public:
     float anti_angle = 0.0;
     float x = -3.5;
     float y = 0.5;
     //float cloudx=-2.0;
     //float cloudy = 1.9;
     float cloudx1=-1.5;
     float cloudy1 = 0.5;
	 float cloudx2=6;
     float cloudy2 = -2.5;

	 //float commetx1 =
    void displaySky()
    {
        glPushMatrix(); //Save the transformations performed thus far
            glPointSize(2.0);
            glBegin(GL_POINTS);
            glVertex3f(1.69076, 0.00375378, 0.0);
            glVertex3f(-2.42622, 0.579913, 0.0);
            glVertex3f(1.43962, -1.75503, 0.0);
            glVertex3f(-2.68789, -1.05087, 0.0);
            glVertex3f(2.23981, 2.46852, 0.0);
            glVertex3f(-2.57683, 0.522324, 0.0);
            glVertex3f(1.5406, -2.1315, 0.0);
            glVertex3f(-0.0449538, -0.911985, 0.0);
            glVertex3f(1.09336, 0.274209, 0.0);
            glVertex3f(-0.497696, 0.441939, 0.0);
            glVertex3f(1.33708, -2.96558, 0.0);
            glVertex3f(-0.014008, -0.35725, 0.0);
            glVertex3f(1.13364, 0.0267342, 0.0);
            glVertex3f(-1.71355, 1.59499, 0.0);
            glVertex3f(1.8215, -1.80529, 0.0);
            glEnd();

            glPointSize(2.0);
            glBegin(GL_POINTS);
            glVertex3f(-1.98914, -0.498703, 0.0);
            glVertex3f(1.05637, 1.35237, 0.0);
            glVertex3f(-1.82305, 0.171117, 0.0);
            glVertex3f(2.40782, -2.34996, 0.0);
            glVertex3f(-0.90585, -1.55965, 0.0);
            glVertex3f(2.18003, 2.62792, 0.0);
            glVertex3f(-2.77715, 2.8677, 0.0);
            glVertex3f(0.427015, -1.61806, 0.0);
            glVertex3f(-0.705985, -1.38624, 0.0);
            glVertex3f(0.628803, 2.58672, 0.0);
            glVertex3f(-2.53096, 2.33897, 0.0);
            glVertex3f(2.99908, -2.99039, 0.0);
            glVertex3f(-1.17731, -1.8345, 0.0);
            glVertex3f(0.891842, 0.798639, 0.0);
            glVertex3f(-0.0712302, 2.52043, 0.0);
            glVertex3f(0.277871, -1.1276, 0.0);
            glEnd();

            glPointSize(3.0);
            glBegin(GL_POINTS);
            glVertex3f(-0.168645, -2.03162, 0.0);
            glVertex3f(2.75637, 0.026368, 0.0);
            glVertex3f(-0.81869, 0.827662, 0.0);
            glVertex3f(2.07355, -1.76373, 0.0);
            glVertex3f(-2.17948, -2.51283, 0.0);
            glVertex3f(0.616077, 1.45482, 0.0);
            glVertex3f(-1.40538, 2.23121, 0.0);
            glVertex3f(2.84747, -1.37388, 0.0);
            glVertex3f(-0.324839, -2.23331, 0.0);
            glVertex3f(1.15571, 1.79714, 0.0);
            glVertex3f(-1.8269, 2.20502, 0.0);
            glVertex3f(1.08402, -1.71722, 0.0);
            glVertex3f(-0.675314, -0.454665, 0.0);
            glVertex3f(2.40864, 1.27546, 0.0);
            glVertex3f(-2.96997, 1.55132, 0.0);
            glVertex3f(1.03668, -2.25465, 0.0);
            glVertex3f(-1.97192, -0.506943, 0.0);
            glVertex3f(0.190619, 1.47569, 0.0);
            glVertex3f(-1.51442, 2.09928, 0.0);
            glVertex3f(2.84875, -0.442488, 0.0);
            glVertex3f(-2.71535, -0.424726, 0.0);
            glVertex3f(0.909146, 2.07868, 0.0);
            glVertex3f(-0.211127, 1.27967, 0.0);
            glVertex3f(2.04956, -2.89984, 0.0);
            glVertex3f(-2.63176, -0.4597, 0.0);
            glVertex3f(1.74615, 2.46504, 0.0);
            glVertex3f(-0.533677, 0.574053, 0.0);
            glVertex3f(1.42579, -2.45158, 0.0);
            glVertex3f(-1.51176, -0.466659, 0.0);
            glVertex3f(1.21677, 2.19605, 0.0);
            glVertex3f(-1.70623, 0.83874, 0.0);
            glVertex3f(2.26756, -2.04672, 0.0);
            glVertex3f(-1.42589, -2.16575, 0.0);
            glVertex3f(1.10343, 0.36906, 0.0);
            glVertex3f(-0.105289, 2.50404, 0.0);
            glEnd();

            glPointSize(1.0);
            glBegin(GL_POINTS);
            glVertex3f(1.98895, -1.55104, 0.0);
            glVertex3f(-0.314035, -1.27866, 0.0);
            glVertex3f(2.76415, 2.84802, 0.0);
            glVertex3f(-1.03797, 1.64864, 0.0);
            glVertex3f(1.12494, -1.41517, 0.0);
            glVertex3f(-0.950621, -2.54094, 0.0);
            glVertex3f(0.815668, 1.3683, 0.0);
            glVertex3f(-0.893399, 2.94891, 0.0);
            glVertex3f(1.70183, -2.21757, 0.0);
            glVertex3f(-2.28394, -0.58797, 0.0);
            glVertex3f(1.19297, 2.51833, 0.0);
            glVertex3f(-2.67049, 1.5027, 0.0);
            glVertex3f(2.98389, -0.0824, 0.0);
            glVertex3f(-0.151524, -1.71776, 0.0);

            glEnd();
        glPopMatrix();

        glPushMatrix(); //Save the current state of transformations
            glTranslatef(x, y, 0.0); //Move to the center of the triangle
            glRotatef(anti_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
                //135-206-250
            glColor4ub(254, 252, 215,0);

            glBegin(GL_POLYGON);
            for(int i=0;i<200;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=0.35;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y );
            }
            glEnd();
        glPopMatrix();


        glPushMatrix();
            glColor4ub(46, 139, 87, 0);
            glBegin(GL_QUADS);
            glVertex2f(5.0,-3.0);
            glVertex2f(5.0,-2.75);
            glVertex2f(-3.0,-2.75);
            glVertex2f(-3.0,-3.0);
            glEnd();
        glPopMatrix();

        glPushMatrix(); // tree
            glColor3f(0.000, 0.392, 0.000);
            glBegin(GL_TRIANGLES);
            glVertex2f(-1.80,-2.3);
            glVertex2f(-1.6,-2.5);
            glVertex2f(-2.0,-2.5);
            glVertex2f(-1.80,-2.4);
            glVertex2f(-1.6,-2.6);
            glVertex2f(-2.0,-2.6);
            glEnd();
            glColor4ub(138,51,53,0);
            glBegin(GL_QUADS);
            glVertex2f(-1.82,-2.75);
            glVertex2f(-1.82,-2.6);
            glVertex2f(-1.78,-2.6);
            glVertex2f(-1.78,-2.75);
            glEnd();
        glPopMatrix();


        glPushMatrix(); //tree
            glColor3f(0.000, 0.392, 0.000);
            glBegin(GL_TRIANGLES);
            glVertex2f(1.80,-2.3);
            glVertex2f(1.6,-2.5);
            glVertex2f(2.0,-2.5);
            glVertex2f(1.80,-2.4);
            glVertex2f(1.6,-2.6);
            glVertex2f(2.0,-2.6);
            glEnd();
            glColor4ub(138,51,53,0);
            glBegin(GL_QUADS);
            glVertex2f(1.82,-2.75);
            glVertex2f(1.82,-2.6);
            glVertex2f(1.78,-2.6);
            glVertex2f(1.78,-2.75);
            glEnd();
        glPopMatrix();


        glPushMatrix(); //clouds1
            glTranslatef(cloudx1, cloudy1, 0.0);
            glColor4ub(135, 206, 250,100);
            glPushMatrix(); //Save the current state of transformations

                glTranslatef(-1.8, 1.7, 0.0);
				glBegin(GL_POLYGON);
					glVertex2f(-0.25,0.25);
					glVertex2f(-0.25,0);
					glVertex2f(0.25,0);
					glVertex2f(0.25,0.25);
				glEnd();
			glPopMatrix();

			glPushMatrix();
				glTranslatef(-2.0, 1.9, 0.0); //Move to the center of the triangle
               // glRotatef(anti_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
                //glColor4ub(237, 237, 237,0);

                glBegin(GL_POLYGON);
                for(int i=0;i<200;i++)
                {
                    float pi=3.1416;
                    float A=(i*2*pi)/50;
                    float r=0.20;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y );
                }
                glEnd();
            glPopMatrix();

            glPushMatrix(); //Save the current state of transformations
                glTranslatef(-1.75, 1.96, 0.0); //Move to the center of the triangle
               // glRotatef(anti_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
                //glColor4ub(237, 237, 237,0);
                glBegin(GL_POLYGON);
                for(int i=0;i<200;i++)
                {
                    float pi=3.1416;
                    float A=(i*2*pi)/50;
                    float r=0.25;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y );
                }
                glEnd();
            glPopMatrix();

            glPushMatrix(); //Save the current state of transformations
                glTranslatef(-1.50, 1.9, 0.0); //Move to the center of the triangle
               // glRotatef(anti_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
                //glColor4ub(237, 237, 237,0);
                glBegin(GL_POLYGON);
                for(int i=0;i<200;i++)
                {
                    float pi=3.1416;
                    float A=(i*2*pi)/50;
                    float r=0.20;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y );
                }
                glEnd();
            glPopMatrix();
        glPopMatrix();

		////////////////////////

		glPushMatrix(); //clouds2
            glTranslatef(cloudx2, cloudy2, 0.0);
            glColor4ub(135, 206, 250,100);
            glPushMatrix(); //Save the current state of transformations

                glTranslatef(-1.8, 1.7, 0.0);
				glBegin(GL_POLYGON);
					glVertex2f(-0.25,0.25);
					glVertex2f(-0.25,0);
					glVertex2f(0.25,0);
					glVertex2f(0.25,0.25);
				glEnd();
			glPopMatrix();

			glPushMatrix();
				glTranslatef(-2.0, 1.9, 0.0); //Move to the center of the triangle
               // glRotatef(anti_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
                //glColor4ub(237, 237, 237,0);

                glBegin(GL_POLYGON);
                for(int i=0;i<200;i++)
                {
                    float pi=3.1416;
                    float A=(i*2*pi)/50;
                    float r=0.20;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y );
                }
                glEnd();
            glPopMatrix();

            glPushMatrix(); //Save the current state of transformations
                glTranslatef(-1.75, 1.96, 0.0); //Move to the center of the triangle
               // glRotatef(anti_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
                //glColor4ub(237, 237, 237,0);
                glBegin(GL_POLYGON);
                for(int i=0;i<200;i++)
                {
                    float pi=3.1416;
                    float A=(i*2*pi)/50;
                    float r=0.25;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y );
                }
                glEnd();
            glPopMatrix();

            glPushMatrix(); //Save the current state of transformations
                glTranslatef(-1.50, 1.9, 0.0); //Move to the center of the triangle
               // glRotatef(anti_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
                //glColor4ub(237, 237, 237,0);
                glBegin(GL_POLYGON);
                for(int i=0;i<200;i++)
                {
                    float pi=3.1416;
                    float A=(i*2*pi)/50;
                    float r=0.20;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y );
                }
                glEnd();
            glPopMatrix();
        glPopMatrix();



        }
};





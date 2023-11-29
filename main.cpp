#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI 3.141516
#include<math.h>

int sunStatus=0;
int carLightStatus=0;

//int dayStatus=0;
int nightStatus=0;

GLfloat position = 0.1f;
GLfloat speed = 0.01f;
GLfloat speed1 = 0.005f;


GLfloat position1 = 0.1f;

void update(int value) {

    if(position <-2.0)
       position =+2.0f;
       position -= speed;

glutPostRedisplay();
glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1 <-0.40)
       position1 =+0.0f;
       position1 -= speed1;

glutPostRedisplay();
glutTimerFunc(100, update1, 0);
}
/////////////////////////mamun
void drawLamp(){   //lamb up

     ///L1
     glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-1.0f,-0.050f);
      glVertex2f(-0.90f,-0.050f);
      glVertex2f(-0.90f,0.050f);
      glVertex2f(-1.0f,0.050f);
      glEnd();
       ///L2
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-0.450f,-0.050f);
      glVertex2f(-0.350f,-0.050f);
      glVertex2f(-0.350f,0.050f);
      glVertex2f(-0.450f,0.050f);
      glEnd();
      ///L3
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.10f,-0.050f);
      glVertex2f(0.20f,-0.050f);
      glVertex2f(0.20f,0.050f);
      glVertex2f(0.10f,0.050f);
      glEnd();
      ///L4
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.650f,-0.050f);
      glVertex2f(0.750f,-0.050f);
      glVertex2f(0.750f,0.050f);
      glVertex2f(0.650f,0.050f);
      glEnd();

      //lamp stand
      ///L1
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-0.970f,-0.40f);
      glVertex2f(-0.930f,-0.40f);
      glVertex2f(-0.930f,0.0f);
      glVertex2f(-0.970f,0.0f);
      glEnd();
      ///L2
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(-0.420f,-0.40f);
      glVertex2f(-0.380f,-0.40f);
      glVertex2f(-0.380f,0.0f);
      glVertex2f(-0.420f,0.0f);
      glEnd();
      ///L3
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.130f,-0.40f);
      glVertex2f(0.170f,-0.40f);
      glVertex2f(0.170f,0.0f);
      glVertex2f(0.130f,0.0f);
      glEnd();
      ///L4
      glBegin(GL_QUADS);
      glColor3f(0.90f, 0.60f, 0.0f);
      glVertex2f(0.680f,-0.40f);
      glVertex2f(0.720f,-0.40f);
      glVertex2f(0.720f,0.0f);
      glVertex2f(0.680f,0.0f);
      glEnd();

      //lamp current line
      ///L1
      glLineWidth(2);
      glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-0.950f,0.0f);
      glVertex2f(-0.70f,-0.10f);
      glVertex2f(-0.70f,-0.10f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.10f,-0.10f);
      glVertex2f(-0.10f,-0.10f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.450f,-0.10f);
      glVertex2f(0.450f,-0.10f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(1.0f,-0.10f);
      glEnd();

      //lamp current line2
      ///L2
      glLineWidth(2);
      glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-0.950f,0.0f);
      glVertex2f(-0.70f,-0.050f);
      glVertex2f(-0.70f,-0.050f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.40f,0.0f);
      glVertex2f(-0.10f,-0.050f);
      glVertex2f(-0.10f,-0.050f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.150f,0.0f);
      glVertex2f(0.450f,-0.050f);
      glVertex2f(0.450f,-0.050f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(0.70f,0.0f);
      glVertex2f(1.0f,-0.050f);
      glEnd();

      glFlush();
  }

void drawRoad(){
     ///road black
     glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-1.0f,-0.40f);
      glVertex2f(1.0f,-0.40f);
      glVertex2f(1.0f,-0.150f);
      glVertex2f(-1.0f,-0.150f);
      glEnd();

      ///road block01 L
      glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.90f, -0.30f);
      glVertex2f(-0.600f, -0.30f);
      glVertex2f(-0.650f,  -0.25f);
      glVertex2f(-0.950f,  -0.25f);
      glEnd();

      ///road block02 L
      glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.40f, -0.30f);
      glVertex2f(-0.100f, -0.30f);
      glVertex2f(-0.150f,  -0.25f);
      glVertex2f(-0.450f,-0.25f);
      glEnd();

      ///road block03
      glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(0.10f,-0.30f);
      glVertex2f(0.350f,-0.30f);
      glVertex2f(0.30f,-0.25f);
      glVertex2f(0.050f,-0.25f);
      glEnd();

      ///road block04
      glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(0.60f,-0.30f);
      glVertex2f(0.850f,-0.30f);
      glVertex2f(0.80f,-0.25f);
      glVertex2f(0.550f,-0.25f);
      glEnd();
}

void drawTruck(){
      //truck
      glBegin(GL_POLYGON);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(0.140f,-0.330f);
      glVertex2f(0.590f,-0.330f);
      glVertex2f(0.590f,-0.230f);
      glVertex2f(0.390f,-0.230f);
      glVertex2f(0.390f,-0.170f);
      glVertex2f(0.290f,-0.170f);
      glVertex2f(0.140f,-0.280f);
      glEnd();


      //truck light front
      glBegin(GL_QUADS);
      glColor3f(0.90f, 1.0f, 0.10f);
      glVertex2f(0.140f,-0.30f);
      glVertex2f(0.160f,-0.30f);
      glVertex2f(0.160f,-0.280f);
      glVertex2f(0.14f,-0.280f);
      glEnd();


      //truck light back
      glBegin(GL_QUADS);
      glColor3f(0.90f, 1.0f, 0.10f);
      glVertex2f(0.570f,-0.250f);
      glVertex2f(0.590f,-0.250f);
      glVertex2f(0.590f,-0.270f);
      glVertex2f(0.570f,-0.270f);
      glEnd();


      ///truck wheel white L
      int i;
      GLfloat p1=0.24f; GLfloat q1= -0.330f; GLfloat r1 = 0.050f;
    int tringle2=100;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
    }
    glEnd ();

    ///R
    int i1;
      GLfloat p11=0.49f; GLfloat q11= -0.330f; GLfloat r11 = 0.050f;
    int tringle22=100;

    GLfloat tp22 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p11,q11);
    for(i= 0;i<=tringle22; i++)
    {
        glVertex2f (
                    p11+(r11*cos(i*tp22/tringle22)),
                    q11+(r11*sin(i*tp22/tringle22))
                    );
    }
    glEnd ();

    ///truck wheel black L
    int ib;
      GLfloat p1b=0.24f; GLfloat q1b= -0.330f; GLfloat r1b = 0.030f;
    int tringle2b=100;

    GLfloat tp2b =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 0,0,0);
    glVertex2f (p1b,q1b);
    for(i= 0;i<=tringle2b; i++)
    {
        glVertex2f (
                    p1b+(r1b*cos(i*tp2b/tringle2b)),
                    q1b+(r1b*sin(i*tp2b/tringle2b))
                    );
    }
    glEnd ();
    ///R
    int ib1;
      GLfloat p11b=0.49f; GLfloat q11b= -0.330f; GLfloat r11b = 0.030f;
    int tringle22b=100;

    GLfloat tp22b =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 0,0,0);
    glVertex2f (p11b,q11b);
    for(i= 0;i<=tringle22b; i++)
    {
        glVertex2f (
                    p11b+(r11b*cos(i*tp22b/tringle22b)),
                    q11+(r11b*sin(i*tp22b/tringle22b))
                    );
    }
    glEnd ();
     /// TRUCK GLASS
    glBegin(GL_POLYGON);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(0.240f,-0.230f);
      glVertex2f(0.340f,-0.230f);
      glVertex2f(0.340f,-0.180f);
      glVertex2f(0.290f,-0.180f);
      glEnd();

}

void drawCar(){
      //car
      glBegin(GL_POLYGON);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.880f,-0.350f);
      glVertex2f(-0.430f,-0.350f);
      glVertex2f(-0.430f,-0.275f);
      glVertex2f(-0.530f,-0.275f);
      glVertex2f(-0.630f,-0.20f);
      glVertex2f(-0.730f,-0.20f);
      glVertex2f(-0.78f,-0.250f);
      glVertex2f(-0.88f,-0.30f);
      glEnd();

      //car light front
      glBegin(GL_QUADS);
      glColor3f(0.90f, 1.0f, 0.10f);
      glVertex2f(-0.880f,-0.320f);
      glVertex2f(-0.860f,-0.320f);
      glVertex2f(-0.860f,-0.30f);
      glVertex2f(-0.880f,-0.30f);
      glEnd();


      //car light back
      glBegin(GL_QUADS);
      glColor3f(0.90f, 1.0f, 0.10f);
      glVertex2f(-0.450f,-0.295f);
      glVertex2f(-0.430f,-0.295f);
      glVertex2f(-0.430f,-0.275f);
      glVertex2f(-0.450f,-0.275f);
      glEnd();

      ///car wheel white  L
      int i,i2;
      GLfloat p111=-0.780f; GLfloat q111= -0.330f; GLfloat r111 = 0.050f;
    int tringle222=100;

    GLfloat tp222 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p111,q111);
    for(i= 0;i<=tringle222; i++)
    {
        glVertex2f (
                    p111+(r111*cos(i*tp222/tringle222)),
                    q111+(r111*sin(i*tp222/tringle222))
                    );
    }
    glEnd ();
    ///R
    int i3;
      GLfloat p1111=-0.53f; GLfloat q1111= -0.330f; GLfloat r1111 = 0.050f;
    int tringle2222=100;

    GLfloat tp2222 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1111,q1111);
    for(i= 0;i<=tringle2222; i++)
    {
        glVertex2f (
                    p1111+(r1111*cos(i*tp2222/tringle2222)),
                    q1111+(r1111*sin(i*tp2222/tringle2222))
                    );
    }
    glEnd ();

    ///car wheel black L
      int i2b;
      GLfloat p111b=-0.78f; GLfloat q111b= -0.330f; GLfloat r111b = 0.030f;
    int tringle222b=100;

    GLfloat tp222b =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0,0,0);
    glVertex2f (p111b,q111b);
    for(i= 0;i<=tringle222b; i++)
    {
        glVertex2f (
                    p111b+(r111b*cos(i*tp222b/tringle222b)),
                    q111b+(r111b*sin(i*tp222b/tringle222b))
                    );
    }
    glEnd ();
    ///R
    int i3b;
      GLfloat p1111b=-0.53f; GLfloat q1111b= -0.330f; GLfloat r1111b = 0.0300f;
    int tringle2222b=100;

    GLfloat tp2222b =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 0,0,0);
    glVertex2f (p1111b,q1111b);
    for(i= 0;i<=tringle2222b; i++)
    {
        glVertex2f (
                    p1111b+(r1111b*cos(i*tp2222b/tringle2222b)),
                    q1111b+(r1111b*sin(i*tp2222b/tringle2222b))
                    );
    }
    glEnd ();
     ///CAR GLASS
    glBegin(GL_POLYGON);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(-0.780f,-0.275f);
      glVertex2f(-0.555f,-0.275f);
      glVertex2f(-0.630f,-0.220f);
      glVertex2f(-0.730f,-0.220f);
      glEnd();
      ///GLASS DEVIDER LINE

       glLineWidth(4);
      glBegin(GL_LINES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.655f,-0.2230f);
      glVertex2f(-0.655f,-0.2750f);
      glEnd();
}

void drawCarLight(){

glBegin(GL_TRIANGLES);
   glColor3f(0.90f,1.0f,0.0f);
    glVertex2f(-.980f,-0.380f);
 glVertex2f(-0.880f,-0.38f);
 glVertex2f(-0.880f,-0.320f);
glEnd();
}
void drawTruckLight(){
     // for truck light
glBegin(GL_TRIANGLES);
   glColor3f(0.90f,1.0f,0.0f);
    glVertex2f(0.040f,-0.360f);
 glVertex2f(0.140f,-0.360f);
 glVertex2f(0.140f,-0.280f);
glEnd();
}

      /////moon
void moon(){
     {


    int j;

    GLfloat p2=0.6f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    {


    int j;

    GLfloat p2=0.65f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.3f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
}
///star
void star(){
     glLineWidth(4);
     glBegin(GL_POINTS);
     glColor3f(1.0,1.0,1.0);
     glVertex2f(-0.85,0.85);
     glVertex2f(-0.65,0.65);
     glVertex2f(-0.5,0.75);
     glVertex2f(-0.4,0.65);
     glVertex2f(-0.45,0.45);
     glVertex2f(0.0,0.90);
     glVertex2f(0.20,0.70);
     glVertex2f(0.85,0.85);
     glVertex2f(0.65,0.65);
     glVertex2f(0.45,0.45);

     glEnd();
}
////////////////////////
///////////////////////sakib
void drawBoat(){
     glBegin(GL_QUADS); //Boat
glColor3f(0.1f, 0.0f, 0.0f);
glVertex2f(-0.040f, -0.720f); // x, y
glVertex2f(0.060f, -0.820f); // x, y
glVertex2f(0.660f, -0.820f); // x, y
glVertex2f(0.760f, -0.720f); // x, y
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.060f, -0.720f); // x, y
glVertex2f(0.160f, -0.620f); // x, y

glVertex2f(0.560f, -0.620f); // x, y
glVertex2f(0.660f, -0.720f); // x, y
glEnd();

glBegin(GL_QUADS); // window-boat
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.210f, -0.650f); // x, y
glVertex2f(0.210f, -0.70f); // x, y

glVertex2f(0.310f, -0.70f); // x, y
glVertex2f(0.310f, -0.650f); // x, y
glEnd();

glBegin(GL_QUADS); // window-boat
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.410f, -0.650f); // x, y
glVertex2f(0.410f, -0.70f); // x, y

glVertex2f(0.510f, -0.70f); // x, y
glVertex2f(0.510f, -0.650f); // x, y
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.0f, 1.0f);

glVertex2f(0.360f, -0.520f);
glVertex2f(0.260f, -0.620f);
glVertex2f(0.460f, -0.620f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.360f, -0.520f);
glVertex2f(0.360f, -0.43f);

glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0f, 0.0f, 1.0f);

glVertex2f(0.360f, -0.430f);
glVertex2f(0.44f, -0.46f);
glVertex2f(0.360f, -0.50f);

	glEnd();
}
void waterLine(){
     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.20f, -0.90f);
	glVertex2f(-0.40f, -0.90f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.80f, -0.80f);
	glVertex2f(-1.0f, -0.80f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.40f, -0.90f);
	glVertex2f(0.60f, -0.90f);

	glEnd();

	glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.80f, -0.60f);
glVertex2f(1.0f, -0.60f);

glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.0f, -0.50f);
glVertex2f(-0.20f, -0.50f);

glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.70f, -0.60f);
glVertex2f(-0.90f, -0.60f);

glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.50f, -0.50f);
glVertex2f(0.60f, -0.50f);

glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.20f, -0.70f);
glVertex2f(-0.30f, -0.70f);

glEnd();
}
///waterline night
void waterLineNight(){
     glBegin(GL_LINES);
	glColor3f(0.50f, 0.50f, 0.60f);
	glVertex2f(-0.20f, -0.90f);
	glVertex2f(-0.40f, -0.90f);

	glEnd();

    glBegin(GL_LINES);
	glColor3f(0.50f, 0.50f, 0.60f);
	glVertex2f(-0.80f, -0.80f);
	glVertex2f(-1.0f, -0.80f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.50f, 0.50f, 0.60f);
	glVertex2f(0.40f, -0.90f);
	glVertex2f(0.60f, -0.90f);

	glEnd();

	glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(0.80f, -0.60f);
glVertex2f(1.0f, -0.60f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(0.0f, -0.50f);
glVertex2f(-0.20f, -0.50f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(-0.70f, -0.60f);
glVertex2f(-0.90f, -0.60f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(0.50f, -0.50f);
glVertex2f(0.60f, -0.50f);

glEnd();

glBegin(GL_LINES);
glColor3f(0.50f, 0.50f, 0.60f);
glVertex2f(-0.20f, -0.70f);
glVertex2f(-0.30f, -0.70f);

glEnd();
}

void water(){
      glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2f(1.0f, -0.450f);    // x, y
	glVertex2f(1.0f, -1.0f);    // x, y

	glVertex2f(-1.0f, -1.0f);    // x, y
	glVertex2f(-1.0f, -0.450f);    // x, y
	glEnd();
}

///water night
void waterNight(){
      glBegin(GL_QUADS);
    glColor3f(0.0f, 0.10f, 0.40f);
    glVertex2f(1.0f, -0.450f);    // x, y
	glVertex2f(1.0f, -1.0f);    // x, y

	glVertex2f(-1.0f, -1.0f);    // x, y
	glVertex2f(-1.0f, -0.450f);    // x, y
	glEnd();
}
//////////////////////

/////////////////////mahir
void bird(){
    // 1st Bird
glBegin(GL_POLYGON);



glColor3f(0.0f, 0.0f, 0.0f); //color
// x, y
glVertex2f(-0.8f, 0.8f);// x, y
glVertex2f(-0.75f, 0.8f);
glVertex2f(-0.8f, 0.81f);
glVertex2f(-0.85f, 0.85f);



glEnd();
// 2nd Bird
glBegin(GL_POLYGON);



glColor3f(0.0f, 0.0f, 0.0f); //color
// x, y
glVertex2f(-0.7f, 0.7f);// x, y
glVertex2f(-0.65f, 0.7f);
glVertex2f(-0.7f, 0.71f);
glVertex2f(-0.75f, 0.75f);



glEnd();
// 3rd Bird
glBegin(GL_POLYGON);



glColor3f(0.0f, 0.0f, 0.0f); //color
// x, y
glVertex2f(-0.9f, 0.7f);// x, y
glVertex2f(-0.85f, 0.7f);
glVertex2f(-0.9f, 0.71f);
glVertex2f(-0.95f, 0.75f);



glEnd();


}
void cloud(){
     {
	//1st cloud left part
    int i;

    GLfloat p1=0.09f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    //1st cloud Middle part
    {


    int i;

    GLfloat p1=0.2f; GLfloat q1= 0.9f; GLfloat r1 = 0.1f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
     }
    glEnd ();
    }

    //1st cloud right part
    {


    int i;

    GLfloat p1=0.3f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    }

   }




    {
	//2nd cloud left part
    int j;

    GLfloat p2=-0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );


    }
    glEnd ();

    //2nd cloud Middle part
    {

    int j;

    GLfloat p2=0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.1f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );

    }
    glEnd ();
    }

    //2nd cloud right part
    {


    int j;

    GLfloat p2=0.15f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    }
}

//////nightcloud

void cloudNight(){
     {
	//1st cloud left part
    int i;

    GLfloat p1=0.09f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    //1st cloud Middle part
    {


    int i;

    GLfloat p1=0.2f; GLfloat q1= 0.9f; GLfloat r1 = 0.1f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
     }
    glEnd ();
    }

    //1st cloud right part
    {


    int i;

    GLfloat p1=0.3f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    }

   }




    {
	//2nd cloud left part
    int j;

    GLfloat p2=-0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );


    }
    glEnd ();

    //2nd cloud Middle part
    {

    int j;

    GLfloat p2=0.05f; GLfloat q2= 0.7f; GLfloat r2 = 0.1f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );

    }
    glEnd ();
    }

    //2nd cloud right part
    {


    int j;

    GLfloat p2=0.15f; GLfloat q2= 0.7f; GLfloat r2 = 0.07f;
    int tringle3=40;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7,0.7,0.80);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
    }
}

void sun(){
     //sun
{


    int j;

    GLfloat p2=0.6f; GLfloat q2= 0.8f; GLfloat r2 = 0.08f;
    int tringle3=30;




    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,0);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringle3; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tp3/tringle3)),
                    q2+(r2*sin(j*tp3/tringle3))
                    );



    }
    glEnd ();
    }
}
void sky(){
     // sky
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.3f, 0.9f, 1.0f);
	glVertex2f(-1.0f, 0.4f);   // x, y
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}
void skyNight(){
     // sky
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f ( 0.0f,0.0f,0.3f);
	glVertex2f(-1.0f, 0.4f);   // x, y
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
}
////////////////////

///////////////////faysal
void tree(){


//tree start
//tree1
glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(-0.95f, 0.15f);
	glVertex2f(-0.95f, 0.24f);



	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.995f, 0.24f);    // x, y
	glVertex2f(-0.905f, 0.24f);
	glVertex2f(-.95f,  0.4f);

	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.99f, 0.3f);    // x, y
	glVertex2f(-0.91f, 0.3f);
	glVertex2f(-.95f,  0.40f);

	glEnd();
	//tree2
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(-0.55f, 0.15f);
	glVertex2f(-0.55f, 0.24f);
	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.595f, 0.24f);    // x, y
	glVertex2f(-0.505f, 0.24f);
	glVertex2f(-.55f,  0.4f);

	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.59f, 0.3f);    // x, y
	glVertex2f(-0.51f, 0.3f);
	glVertex2f(-.55f,  0.42f);
	glEnd();
//tree3
glLineWidth(7.0);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(-0.24f, 0.24f);
	glVertex2f(-0.24f, 0.31f);
	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.27f, 0.31f);    // x, y
	glVertex2f(-0.21f, 0.31f);
	glVertex2f(-.24f,  0.41f);

	glEnd();

glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(-0.27f, 0.35f);    // x, y
	glVertex2f(-0.21f, 0.35f);
	glVertex2f(-.24f,  0.42f);
	glEnd();
	//donla
	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(69, 90, 100   );
	glVertex2f(0.60f, 0.15f);
	glVertex2f(0.6f, 0.39f);
	glVertex2f(0.50f, 0.15f);
	glVertex2f(0.5f, 0.39f);
	glVertex2f(0.50f, 0.35f);
	glVertex2f(0.60f, 0.35f);
	glEnd();
	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(69, 90, 100   );
	glVertex2f(0.57f, 0.35f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(0.53f, 0.25f);
	glVertex2f(0.53f, 0.35f);
	glEnd();
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow

	glVertex2f(0.515f, 0.23f);
	glVertex2f(0.53f, 0.25f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(0.585f, 0.23f);

	glEnd();
	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(0.515f, 0.229f);
	glVertex2f(0.585f, 0.229f);

	glEnd();
	//donla
	//tree 5
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(0.67f, 0.15f);
	glVertex2f(0.67f, 0.24f);
	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.72f, 0.24f);    // x, y
	glVertex2f(0.62f, 0.24f);
	glVertex2f(.67f,  0.4f);

	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.715f, 0.3f);    // x, y
	glVertex2f(0.625f, 0.3f);
	glVertex2f(0.67f,  0.40f);
	glEnd();
	//treeright 6
	glLineWidth(6.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(0.97f, 0.25f);
	glVertex2f(0.97f, 0.30f);
	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.94f, 0.30f);    // x, y
	glVertex2f(1.0f, 0.30f);
	glVertex2f(.97f,  0.38f);

	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.945f, 0.34f);    // x, y
	glVertex2f(0.995f, 0.34f);
	glVertex2f(0.97f,  0.40f);
	glEnd();
	//tree 4
	glLineWidth(6.5);
	glBegin(GL_LINES);
	glColor3f(0.5, 0.2, 0.0 );
	glVertex2f(0.05f, 0.15f);
	glVertex2f(0.05f, 0.25f);
	glEnd();
    glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.005f, 0.25f);    // x, y
	glVertex2f(0.095f, 0.25f);
	glVertex2f(.05f,  0.40f);
glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(85, 139, 47  ); // Red

	glVertex2f(0.01f, 0.30f);    // x, y
	glVertex2f(0.09f, 0.30f);
	glVertex2f(0.05f,  0.40f);
	glEnd();

//tree end






}
void field(){
      glLineWidth(7.5);
	//top
	 glBegin(GL_QUADS);              // Each set of field er jonno(green)
	glColor3f(0.3f, 0.7f, 0.0f);
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();
}
///fieldNight
void fieldNight(){
      glLineWidth(7.5);
	//top
	 glBegin(GL_QUADS);              // Each set of field er jonno(green)
	glColor3f(0.0f, 0.3f, 0.20f);
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();
}


void buildingPart(){
glBegin(GL_QUADS);              // Each set of house gulor samer road
	glColor3ub(189, 189, 189 );


	glVertex2f(-1.0f, -0.1f);
	glVertex2f(-1.0f, 0.02f);
	glVertex2f(1.0f, 0.02f);
	glVertex2f(1.0f, -0.1f);

	glEnd();

//home1
 glBegin(GL_QUADS);              // Each set of house body
	glColor3ub(153, 0, 0   ); // Red

	glVertex2f(-0.9f, 0.1f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.6f, 0.3f);
	glVertex2f(-0.6f, 0.1f);

	glEnd();

glBegin(GL_TRIANGLES);              // Each set of house upor er chad
	glColor3ub(153, 0, 0 ); // Red

	glVertex2f(-0.9f, 0.3f);
	   // x, y
	   glVertex2f(-.75f,  0.5f);
	glVertex2f(-0.6f, 0.3f);
	glEnd();

glBegin(GL_QUADS);              // Each set of house left wall
	glColor3ub(153, 255, 0 ); // Red

	glVertex2f(-1.0f, 0.05f);    // x, y
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-0.7f, 0.1f);    // x, y
	glVertex2f(-0.7f, 0.05f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofhouse wall black
	glColor3ub(51, 0, 0 ); // Red

	glVertex2f(-0.7f, 0.05f);    // x, y
	glVertex2f(-0.7f, 0.12f);
	glVertex2f(-0.68f, 0.12f);    // x, y
	glVertex2f(-0.68f, 0.05f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofhouse right wall
	glColor3ub(153, 255, 0 ); // Red

	glVertex2f(-0.6f, 0.05f);    // x, y
	glVertex2f(-0.6f, 0.1f);
	glVertex2f(-0.5f, 0.1f);    // x, y
	glVertex2f(-0.5f, 0.05f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofhouse wall black
	glColor3ub(51, 0, 0 ); // Red

	glVertex2f(-0.62f, 0.05f);    // x, y
	glVertex2f(-0.62f, 0.12f);
	glVertex2f(-0.6f, 0.12f);    // x, y
	glVertex2f(-0.6f, 0.05f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofhouse door road
	glColor3ub(189, 189, 189 );
	// Red

	glVertex2f(-0.68f, 0.02f);    // x, y
	glVertex2f(-0.68f, 0.1f);
	glVertex2f(-0.62f, 0.1f);    // x, y
	glVertex2f(-0.62f, 0.02f);

	glEnd();


	glBegin(GL_QUADS);              // Each set ofdoor form a quad
	glColor3ub(255, 255, 255  );


	glVertex2f(-0.67f, 0.1f);
	glVertex2f(-0.67f, 0.21f);
	glVertex2f(-0.63f, 0.21f);
	glVertex2f(-0.63f, 0.1f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofdoor (window left)
	glColor3ub(51, 153, 255   );


	glVertex2f(-0.665f, 0.110f);
	glVertex2f(-0.665f, 0.19f);
	glVertex2f(-0.655f, 0.19f);
	glVertex2f(-0.655f, 0.110f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofdoor (window right)
	glColor3ub(51, 153, 255   );


	glVertex2f(-0.635f, 0.110f);
	glVertex2f(-0.635f, 0.19f);
	glVertex2f(-0.645f, 0.19f);
	glVertex2f(-0.645f, 0.110f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 1st windows form a quad
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(-0.86f, 0.15f);    // x, y
	glVertex2f(-0.86f, 0.22f);
	glVertex2f(-0.81f, 0.22f);    // x, y
	glVertex2f(-0.81f, 0.15f);

	glEnd();

    glBegin(GL_QUADS);              // Each set ofist window glass form a quad
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.855f, 0.16f);    // x, y
	glVertex2f(-0.855f, 0.21f);
	glVertex2f(-0.840f, 0.21f);    // x, y
	glVertex2f(-0.840f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 1st window glass form a quad
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.83f, 0.16f);    // x, y
	glVertex2f(-0.830f, 0.21f);
	glVertex2f(-0.815f, 0.21f);    // x, y
	glVertex2f(-0.815f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of2nd windows
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(-0.76f, 0.15f);    // x, y
	glVertex2f(-0.76f, 0.22f);
	glVertex2f(-0.71f, 0.22f);    // x, y
	glVertex2f(-0.71f, 0.15f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 2nd window glass
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.73f, 0.16f);    // x, y
	glVertex2f(-0.73f, 0.21f);
	glVertex2f(-0.715f, 0.21f);    // x, y
	glVertex2f(-0.715f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 2nd window glass
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.755f, 0.16f);
	glVertex2f(-0.755f, 0.21f);
	glVertex2f(-0.74f, 0.21f);
	glVertex2f(-0.74f, 0.16f);

	glEnd();
	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 0 );
	glVertex2f(-0.767f, 0.222f);//2nd window chad
	glVertex2f(-0.703f, 0.222f);

	glVertex2f(-0.867f, 0.222f);//1st window chad
	glVertex2f(-0.803f, 0.222f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of top window
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(-0.725f, 0.35f);    // x, y
	glVertex2f(-0.725f, 0.40f);
	glVertex2f(-0.76f, 0.40f);    // x, y
	glVertex2f(-0.76f, 0.35f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of top window glass
	glColor3ub(51, 153, 255   );
	// Red

	glVertex2f(-0.733f, 0.36f);    // x, y
	glVertex2f(-0.733f, 0.39f);
	glVertex2f(-0.752f, 0.39f);    // x, y
	glVertex2f(-0.752f, 0.36f);

	glEnd();

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 0 );
	glVertex2f(-0.904f, 0.315f);//home1 left chad
	glVertex2f(-0.75f, 0.5f);

	glVertex2f(-0.75f, 0.5f);//home1 right chad
	glVertex2f(-0.599f, 0.315f);

	glEnd();
	//home3
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255  );
	glVertex2f(0.71f, 0.53f);//bulding3 chad
	glVertex2f(0.88f, 0.53f);

glVertex2f(0.87f, 0.36f);//bulding3 door side chad
	glVertex2f(0.944f, 0.249f);
	glEnd();
	glBegin(GL_QUADS);              // Each set ofbulding3 form a quad
	glColor3ub(40, 55, 71  );
	// Red

	glVertex2f(0.72f, 0.1f);    // x, y
	glVertex2f(0.72f, 0.52f);
	glVertex2f(0.87f, 0.52f);    // x, y
	glVertex2f(0.87f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form bulding3 door side
	glColor3ub(245, 124, 0 ); // Yellow

	glVertex2f(0.87f, 0.1f);    // x, y
	glVertex2f(0.87f, 0.35f);
	glVertex2f(0.94f, 0.24f);
	glVertex2f(0.94f, 0.1f);
glEnd();
glBegin(GL_QUADS);              // Each set of top 1st barandah nicher side
	glColor3ub(51, 255, 255  );
	// Red

	glVertex2f(0.735f, 0.385f);    // x, y
	glVertex2f(0.735f, 0.42f);
	glVertex2f(0.80f, 0.42f);    // x, y
	glVertex2f(0.80f, 0.385f);

	glEnd();
glBegin(GL_QUADS);              // Each set oftop 1st barandah window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.745f, 0.42f);    // x, y
	glVertex2f(0.745f, 0.48f);
	glVertex2f(0.79f, 0.48f);    // x, y
	glVertex2f(0.79f, 0.42f);

	glEnd();
	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 238, 88   );
	glVertex2f(0.742f, 0.485f);//1st barandah chad
	glVertex2f(0.795f, 0.485f);

	glVertex2f(0.742f, 0.346f);    // 2nd barandah chad
	glVertex2f(0.795f, 0.346f);

	glVertex2f(0.742f, 0.218f);    // 3rd 1st barandah chad
	glVertex2f(0.795f, 0.218f);
	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 1st barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.748f, 0.429f);    // x, y
	glVertex2f(0.748f, 0.473f);
	glVertex2f(0.765f, 0.473f);    // x, y
	glVertex2f(0.765f, 0.429f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 1st barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.77f, 0.429f);    // x, y
	glVertex2f(0.77f, 0.473f);
	glVertex2f(0.787f, 0.473f);    // x, y
	glVertex2f(0.787f, 0.429f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 2nd barandah  window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.745f, 0.28f);    // x, y
	glVertex2f(0.745f, 0.34f);
	glVertex2f(0.79f, 0.34f);    // x, y
	glVertex2f(0.79f, 0.28f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 2nd barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.748f, 0.285f);    // x, y
	glVertex2f(0.748f, 0.335f);
	glVertex2f(0.765f, 0.335f);    // x, y
	glVertex2f(0.765f, 0.285f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 2nd barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.77f, 0.285f);    // x, y
	glVertex2f(0.77f, 0.335f);
	glVertex2f(0.787f, 0.335f);    // x, y
	glVertex2f(0.787f, 0.285f);

	glEnd();
glBegin(GL_QUADS);              // Each set oftop 2nd barandah
	glColor3ub(51, 255, 255  );
	// Red

	glVertex2f(0.735f, 0.245f);    // x, y
	glVertex2f(0.735f, 0.28f);
	glVertex2f(0.80f, 0.28f);    // x, y
	glVertex2f(0.80f, 0.245f);

	glEnd();

	glBegin(GL_QUADS);              // Each set ofbulding form a quad
	glColor3ub(51, 255, 255  );
	// Red

	glVertex2f(0.735f, 0.12f);    // x, y
	glVertex2f(0.735f, 0.155f);
	glVertex2f(0.80f, 0.155f);    // x, y
	glVertex2f(0.80f, 0.12f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 3rd barandah window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.745f, 0.155f);    // x, y
	glVertex2f(0.745f, 0.21f);
	glVertex2f(0.79f, 0.21f);    // x, y
	glVertex2f(0.79f, 0.155f);

	glEnd();
glBegin(GL_QUADS);              // Each set oftop 3rd barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.748f, 0.16f);    // x, y
	glVertex2f(0.748f, 0.205f);
	glVertex2f(0.765f, 0.205f);    // x, y
	glVertex2f(0.765f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 3rd barandah window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.77f, 0.16f);    // x, y
	glVertex2f(0.77f, 0.205f);
	glVertex2f(0.787f, 0.205f);    // x, y
	glVertex2f(0.787f, 0.16f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oftop 3rd barandah
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.825f, 0.16f);    // x, y
	glVertex2f(0.825f, 0.205f);
	glVertex2f(0.85f, 0.205f);    // x, y
	glVertex2f(0.85f, 0.16f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding last 1st window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.83f, 0.165f);    // x, y
	glVertex2f(0.83f, 0.20f);
	glVertex2f(0.845f, 0.20f);    // x, y
	glVertex2f(0.845f, 0.165f);

	glEnd();
	glBegin(GL_QUADS);              // Each set ofbulding last 1st window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.825f, 0.285f);    // x, y
	glVertex2f(0.825f, 0.335f);
	glVertex2f(0.85f, 0.335f);    // x, y
	glVertex2f(0.85f, 0.285f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding last 2nd window glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.83f, 0.290f);    // x, y
	glVertex2f(0.83f, 0.33f);
	glVertex2f(0.845f, 0.33f);    // x, y
	glVertex2f(0.845f, 0.290f);

	glEnd();
	glBegin(GL_QUADS);              // Each set oflast 2nd window
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(0.825f, 0.429f);    // x, y
	glVertex2f(0.825f, 0.473f);
	glVertex2f(0.85f, 0.473f);    // x, y
	glVertex2f(0.85f, 0.429f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding last 3rd window  glass
	glColor3ub(153, 102, 255  );
	// Red

	glVertex2f(0.83f, 0.434f);    // x, y
	glVertex2f(0.83f, 0.468f);
	glVertex2f(0.845f, 0.468f);    // x, y
	glVertex2f(0.845f, 0.434f);

	glEnd();


	glBegin(GL_QUADS);              // Each set ofbulding door
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(0.885f, 0.1f);    // x, y
	glVertex2f(0.885f, 0.22f);
	glVertex2f(0.92f, 0.22f);    // x, y
	glVertex2f(0.92f, 0.1f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofbulding door window glass
	glColor3ub(86, 101, 115  );
	// Red

	glVertex2f(0.89f, 0.115f);    // x, y
	glVertex2f(0.89f, 0.142f);
	glVertex2f(0.90f, 0.142f);    // x, y
	glVertex2f(0.90f, 0.115f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding  door window glass
	glColor3ub(86, 101, 115   );
	// Red

	glVertex2f(0.905f, 0.115f);    // x, y
	glVertex2f(0.905f, 0.142f);
	glVertex2f(0.915f, 0.142f);    // x, y
	glVertex2f(0.915f, 0.115f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofbulding  door window glass
	glColor3ub(86, 101, 115  );
	// Red

	glVertex2f(0.89f, 0.155f);    // x, y
	glVertex2f(0.89f, 0.185f);
	glVertex2f(0.90f, 0.185f);    // x, y
	glVertex2f(0.90f, 0.155f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding  door window glass
	glColor3ub(86, 101, 115   );
	// Red

	glVertex2f(0.905f, 0.155f);    // x, y
	glVertex2f(0.905f, 0.185f);
	glVertex2f(0.915f, 0.185f);    // x, y
	glVertex2f(0.915f, 0.155f);

	glEnd();


glBegin(GL_QUADS);              // Each set ofbulding door road
	glColor3ub(189, 189, 189  );
	// Red

	glVertex2f(0.877f, 0.1f);    // x, y
	glVertex2f(0.877f, 0.02f);
	glVertex2f(0.928f, 0.02f);    // x, y
	glVertex2f(0.928f, 0.1f);

	glEnd();


	//home2
	glLineWidth(7.5);
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.50f, 0.53f);
glVertex2f(-0.33f, 0.53f);



glVertex2f(-0.34f, 0.36f);
glVertex2f(-0.266f, 0.249f);
glEnd();
glBegin(GL_QUADS); // Each set ofbulding2
glColor3ub(41, 128, 185 );
// Red



glVertex2f(-0.49f, 0.1f); // x, y
glVertex2f(-0.49f, 0.52f);
glVertex2f(-0.34f, 0.52f); // x, y
glVertex2f(-0.34f, 0.1f);



glEnd();
glBegin(GL_POLYGON); // These vertices form ofbulding door side
glColor3ub(26, 82, 118); // Yellow



glVertex2f(-0.34f, 0.1f); // x, y
glVertex2f(-0.34f, 0.35f);
glVertex2f(-0.27f, 0.24f);
glVertex2f(-0.27f, 0.1f);
glEnd();
//windowroom?
glBegin(GL_QUADS); // Each set ofbulding top 1st barandah
glColor3ub(51, 255, 255 );
// Red



glVertex2f(-0.475f, 0.385f); // x, y
glVertex2f(-0.475f, 0.42f);
glVertex2f(-0.41f, 0.42f); // x, y
glVertex2f(-0.41f, 0.385f);



glEnd();





glBegin(GL_QUADS); // Each set ofbulding top 1st barandah window
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.465f, 0.42f); // x, y
glVertex2f(-0.465f, 0.48f);
glVertex2f(-0.42f, 0.48f); // x, y
glVertex2f(-0.42f, 0.42f);



glEnd();



glLineWidth(3.5);
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.468f, 0.485f);//top 1st barandah chad
glVertex2f(-0.415f, 0.485f);



glVertex2f(-0.468f, 0.346f); // top 2nd barandah chad
glVertex2f(-0.415f, 0.346f);



glVertex2f(-0.468f, 0.218f); // top 3rd barandah chad
glVertex2f(-0.415f, 0.218f);
glEnd();



glBegin(GL_QUADS); // Each set ofbulding top 1st barandah window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.462f, 0.429f); // x, y
glVertex2f(-0.462f, 0.473f);
glVertex2f(-0.445f, 0.473f); // x, y
glVertex2f(-0.445f, 0.429f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding top 1st barandah window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.44f, 0.429f); // x, y
glVertex2f(-0.44f, 0.473f);
glVertex2f(-0.423f, 0.473f); // x, y
glVertex2f(-0.423f, 0.429f);



glEnd();



glBegin(GL_QUADS); // Each set ofbulding top 2nd barandah
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.465f, 0.28f); // x, y
glVertex2f(-0.465f, 0.34f);
glVertex2f(-0.42f, 0.34f); // x, y
glVertex2f(-0.42f, 0.28f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding top 2nd barandah window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.462f, 0.285f); // x, y
glVertex2f(-0.462f, 0.335f);
glVertex2f(-0.445f, 0.335f); // x, y
glVertex2f(-0.445f, 0.285f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding top 2nd barandah window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.44f, 0.285f); // x, y
glVertex2f(-0.44f, 0.335f);
glVertex2f(-0.423f, 0.335f); // x, y
glVertex2f(-0.423f, 0.285f);



glEnd();



glBegin(GL_QUADS); // Each set ofbulding top 2nd barandah window
glColor3ub(51, 255, 255 );
// Red



glVertex2f(-0.475f, 0.245f); // x, y
glVertex2f(-0.475f, 0.28f);
glVertex2f(-0.41f, 0.28f); // x, y
glVertex2f(-0.41f, 0.245f);



glEnd();



glBegin(GL_QUADS); // Each set ofbulding top 3rd barandah
glColor3ub(51, 255, 255 );
// Red



glVertex2f(-0.475f, 0.12f); // x, y
glVertex2f(-0.475f, 0.155f);
glVertex2f(-0.41f, 0.155f); // x, y
glVertex2f(-0.41f, 0.12f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding top 3rd barandah window
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.465f, 0.155f); // x, y
glVertex2f(-0.465f, 0.21f);
glVertex2f(-0.42f, 0.21f); // x, y
glVertex2f(-0.42f, 0.155f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding top 3rd barandah window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.462f, 0.16f); // x, y
glVertex2f(-0.462f, 0.205f);
glVertex2f(-0.445f, 0.205f); // x, y
glVertex2f(-0.445f, 0.16f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding top 3rd barandah window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.44f, 0.16f); // x, y
glVertex2f(-0.44f, 0.205f);
glVertex2f(-0.423f, 0.205f); // x, y
glVertex2f(-0.423f, 0.16f);



glEnd();



glBegin(GL_QUADS); // Each set ofbulding last 1st window
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.385f, 0.16f); // x, y
glVertex2f(-0.385f, 0.205f);
glVertex2f(-0.36f, 0.205f); // x, y
glVertex2f(-0.36f, 0.16f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 1st window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.38f, 0.165f); // x, y
glVertex2f(-0.38f, 0.20f);
glVertex2f(-0.365f, 0.20f); // x, y
glVertex2f(-0.365f, 0.165f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 2nd window
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.385f, 0.285f); // x, y
glVertex2f(-0.385f, 0.335f);
glVertex2f(-0.36f, 0.335f); // x, y
glVertex2f(-0.36f, 0.285f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 2nd window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.38f, 0.290f); // x, y
glVertex2f(-0.38f, 0.33f);
glVertex2f(-0.365f, 0.33f); // x, y
glVertex2f(-0.365f, 0.290f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 3rd window
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.385f, 0.429f); // x, y
glVertex2f(-0.385f, 0.473f);
glVertex2f(-0.36f, 0.473f); // x, y
glVertex2f(-0.36f, 0.429f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding last 3rd window glass
glColor3ub(153, 102, 255 );
// Red



glVertex2f(-0.38f, 0.434f); // x, y
glVertex2f(-0.38f, 0.468f);
glVertex2f(-0.365f, 0.468f); // x, y
glVertex2f(-0.365f, 0.434f);



glEnd();




glBegin(GL_QUADS); // Each set ofbulding door
glColor3ub(255, 255, 255 );
// Red



glVertex2f(-0.325f, 0.1f); // x, y
glVertex2f(-0.325f, 0.22f);
glVertex2f(-0.29f, 0.22f); // x, y
glVertex2f(-0.29f, 0.1f);



glEnd();



glBegin(GL_QUADS); // Each set ofbulding door glass
glColor3ub(86, 101, 115 );
// Red



glVertex2f(-0.32f, 0.115f); // x, y
glVertex2f(-0.32f, 0.142f);
glVertex2f(-0.31f, 0.142f); // x, y
glVertex2f(-0.31f, 0.115f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding door glass
glColor3ub(86, 101, 115 );
// Red



glVertex2f(-0.305f, 0.115f); // x, y
glVertex2f(-0.305f, 0.142f);
glVertex2f(-0.295f, 0.142f); // x, y
glVertex2f(-0.295f, 0.115f);



glEnd();



glBegin(GL_QUADS); // Each set ofbulding door glass
glColor3ub(86, 101, 115 );
// Red



glVertex2f(-0.32f, 0.155f); // x, y
glVertex2f(-0.32f, 0.185f);
glVertex2f(-0.31f, 0.185f); // x, y
glVertex2f(-0.31f, 0.155f);



glEnd();
glBegin(GL_QUADS); // Each set ofbulding door glass
glColor3ub(86, 101, 115 );
// Red



glVertex2f(-0.305f, 0.155f); // x, y
glVertex2f(-0.305f, 0.185f);
glVertex2f(-0.295f, 0.185f); // x, y
glVertex2f(-0.295f, 0.155f);



glEnd();




glBegin(GL_QUADS); // Each set ofbulding door road
glColor3ub(189, 189, 189 );
// Red



glVertex2f(-0.33f, 0.1f); // x, y
glVertex2f(-0.33f, 0.02f);
glVertex2f(-0.285f, 0.02f); // x, y
glVertex2f(-0.285f, 0.1f);



glEnd();
//car1
//car1
    //road for car // x, y
glBegin(GL_QUADS);              // Each set ofcar fark form a quad
	glColor3ub(189, 189, 189  );
	// Red

	glVertex2f(-0.266f, 0.0f);
	glVertex2f(-0.266f, 0.19f);
	glVertex2f(-0.21f, 0.19f);    // x, y
	glVertex2f(-0.21f, 0.0f);

	glEnd();

glBegin(GL_QUADS);              // Each set ofcar fark form a quad
	glColor3ub(255, 255, 255  );
	// Red

	glVertex2f(-0.265f, 0.12f);   //road for car // x, y
	glVertex2f(-0.255f, 0.15f);
	glVertex2f(-0.228f, 0.15f);    // x, y
	glVertex2f(-0.218f, 0.12f);

	glEnd();
	///////
	glBegin(GL_QUADS);              // Each set ofcar fark form a quad
	glColor3ub(0, 0, 255  );
	// Red

	glVertex2f(-0.255f, 0.15f);   //road for car // x, y
	glVertex2f(-0.228f, 0.15f);    // x, y
	glVertex2f(-0.228f, 0.16f);
	glVertex2f(-0.255f, 0.16f);

	glEnd();
	////

glBegin(GL_QUADS);              // Each set ofcar fark form a quad
	glColor3ub(0, 0, 255  );
	// Red

	glVertex2f(-0.265f, 0.1f);   //road for car // x, y
	glVertex2f(-0.265f, 0.13f);
	glVertex2f(-0.218f, 0.13f);    // x, y
	glVertex2f(-0.218f, 0.1f);
	glEnd();
	glBegin(GL_QUADS);
glColor3ub(255, 238, 88  );
	// Red

	glVertex2f(-0.262f, 0.109f);   //road for car light // x, y
	glVertex2f(-0.262f, 0.125f);
	glVertex2f(-0.253f, 0.125f);    // x, y
	glVertex2f(-0.253f, 0.109f);

	glEnd();
	glBegin(GL_QUADS);
glColor3ub(255, 238, 88  );
	// Red

	glVertex2f(-0.23f, 0.109f);   //road for car light // x, y
	glVertex2f(-0.23f, 0.125f);
	glVertex2f(-0.221f, 0.125f);    // x, y
	glVertex2f(-0.221f, 0.109f);

	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);             // Each set of 4 vertices form a quad
	glColor3ub(0, 0, 0 ); // Red
glVertex2f(-0.261f, 0.095f);    // x, y
glVertex2f(-0.253f, 0.095f);
glVertex2f(-0.233f, 0.095f);    // x, y
glVertex2f(-0.225f, 0.095f);
	glEnd();


//hospital

glBegin(GL_QUADS);              // Each set ofbulding body
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(-0.18f, 0.1f);    // x, y
	glVertex2f(-0.18f, 0.46f);
	glVertex2f(-0.02f, 0.46f);    // x, y
	glVertex2f(-0.02f, 0.1f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding body er upor side
	glColor3ub(255, 255, 255 );
	// Red

	glVertex2f(-0.195f, 0.46f);    // x, y
	glVertex2f(-0.195f, 0.53f);
	glVertex2f(-0.02f, 0.53f);    // x, y
	glVertex2f(-0.02f, 0.46f);

	glEnd();

	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3ub(186, 104, 200  );
	glVertex2f(-0.21f, 0.54f);// bulding chad
	glVertex2f(-0.01f, 0.54f);



	glEnd();
	glBegin(GL_QUADS);              // Each set ofbulding body left glass body
	glColor3ub(79, 195, 247  );
	// Red

	glVertex2f(-0.18f, 0.1f);    // x, y
	glVertex2f(-0.18f, 0.46f);
	glVertex2f(-0.14f, 0.46f);    // x, y
	glVertex2f(-0.14f, 0.1f);

	glEnd();
glBegin(GL_QUADS);              // Each set ofbulding body right glass body
	glColor3ub(79, 195, 247  );
	// Red

	glVertex2f(-0.10f, 0.1f);    // x, y
	glVertex2f(-0.10f, 0.46f);
	glVertex2f(-0.02f, 0.46f);    // x, y
	glVertex2f(-0.02f, 0.1f);

	glEnd();
	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(93, 109, 126     );//left glass body line
	glVertex2f(-0.18f, 0.17f);
	glVertex2f(-0.14f, 0.17f);

glVertex2f(-0.18f, 0.24f);
	glVertex2f(-0.14f, 0.24f);

	glVertex2f(-0.18f, 0.31f);
	glVertex2f(-0.14f, 0.31f);
	glVertex2f(-0.18f, 0.38f);
	glVertex2f(-0.14f, 0.38f);

	glEnd();

	glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255     );//right glass body
	glVertex2f(-0.10f, 0.17f);
	glVertex2f(-0.02f, 0.17f);

glVertex2f(-0.10f, 0.24f);
	glVertex2f(-0.02f, 0.24f);

	glVertex2f(-0.10f, 0.31f);
	glVertex2f(-0.02f, 0.31f);
	glVertex2f(-0.10f, 0.38f);
	glVertex2f(-0.02f, 0.38f);


	glVertex2f(-0.045f, 0.46f);
	glVertex2f(-0.045f, 0.17f);
	glVertex2f(-0.075f, 0.46f);
	glVertex2f(-0.075f, 0.17f);

	glEnd();

	glLineWidth(4.0);//door
	glBegin(GL_LINES);
	glColor3ub(44, 62, 80     );
	glVertex2f(-0.085f, 0.17f);
	glVertex2f(-0.035f, 0.17f);

	glEnd();
	glLineWidth(4.5);
	glBegin(GL_LINES);//door
	glColor3ub(40, 53, 147    );
	glVertex2f(-0.081f, 0.165f);
	glVertex2f(-0.081f, 0.1f);

	glVertex2f(-0.039f, 0.165f);
	glVertex2f(-0.039f, 0.1f);

	glEnd();
glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0    );//door


	glVertex2f(-0.06f, 0.165f);
	glVertex2f(-0.06f, 0.1f);

	glEnd();
	glBegin(GL_QUADS);              // Each set ofbulding form a quad
	glColor3ub(189, 189, 189  );
	// Red

	glVertex2f(-0.095f, 0.1f); //buling doorroad   // x, y
	glVertex2f(-0.095f, 0.02f);
	glVertex2f(-0.02f, 0.02f);    // x, y
	glVertex2f(-0.02f, 0.1f);

	glEnd();



}
void chair(){

     //chiar
     glBegin(GL_POLYGON);              // Each set ofbulding form a quad
	glColor3ub(255, 255, 255   );
	// Red

	glVertex2f(0.1f, 0.15f); //BODY   // x, y
	glVertex2f(0.12f, 0.2f);
	glVertex2f(0.24f, 0.2f);    // x, y
	glVertex2f(0.225f, 0.15f);

	glEnd();

glLineWidth(3.3);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );


	glVertex2f(0.123f, 0.2f);//HATOL
	glVertex2f(0.123f, 0.255f);
glVertex2f(0.237f, 0.255f);
	glVertex2f(0.12f, 0.255f);
	glVertex2f(0.237f, 0.2275f);
	glVertex2f(0.12f, 0.2275f);
glVertex2f(0.237f, 0.2f);
	glVertex2f(0.237f, 0.255f);


	glEnd();
glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255   );


	glVertex2f(0.105f, 0.15f);//PA
	glVertex2f(0.105f, 0.1f);
	glVertex2f(0.22f, 0.15f);//PA
	glVertex2f(0.22f, 0.1f);
glVertex2f(0.235f, 0.2f);//PA
	glVertex2f(0.235f, 0.15f);
	glEnd();
}

void hile(){

//hile

glBegin(GL_TRIANGLES);              // Each set of 4 after hile vertices form a quad
	glColor3f(0.10,0.3,0.3 ); // Red

	glVertex2f(0.15f, 0.54f);
	glVertex2f(0.02f,  0.40f);   // x, y
	glVertex2f(0.28f, 0.40f);


	glEnd();


glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.10,0.3,0.3 ); // Red

	glVertex2f(0.28f, 0.40f);
	glVertex2f(0.42f,  0.40f);   // x, y
	glVertex2f(0.35f, 0.50f);


	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(-0.02f, 0.40f);
	glVertex2f(-0.02f,  0.50f);   // x, y
	glVertex2f(0.1f, 0.40f);


	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(-0.02f, 0.40f);
	glVertex2f(0.08f,  0.54f);   // x, y
	glVertex2f(0.18f, 0.40f);


	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.1f, 0.40f);
	glVertex2f(0.28f,  0.54f);   // x, y
	glVertex2f(0.38f, 0.40f);


	glEnd();
glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.32f, 0.40f);
	glVertex2f(0.42f,  0.54f);   // x, y
	glVertex2f(0.52f, 0.40f);


	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.44f, 0.40f);
	glVertex2f(0.63f,  0.58f);   // x, y
	glVertex2f(0.72f, 0.40f);


	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.63f, 0.40f);
	glVertex2f(0.72f,  0.50f);   // x, y
	glVertex2f(0.72f, 0.40f);


	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.87f, 0.40f);
	glVertex2f(0.94f,  0.53f);   // x, y
	glVertex2f(1.2f, 0.40f);


	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.10,0.5,0.5 ); // Red

	glVertex2f(0.87f, 0.40f);
	glVertex2f(0.87f,  0.50f);   // x, y
	glVertex2f(0.94f, 0.40f);
glEnd();

}

///////////////////




void display() {

           if(nightStatus==0){
                    ///day
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);

//////////////////////sakib vai
   water();
   glPushMatrix();
   glTranslatef(-position,0.0f, 0.0f);
   waterLine();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   drawBoat();
   glPopMatrix();
/////////////////////

////////////////////mahir
   sky();
   glPushMatrix();
   if(sunStatus==0){
   sun();
   }
   else if (sunStatus==1){
        glTranslatef(0.0f,position1,0.0f);
         sun();
   }
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   cloud();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(-position,0.0f,0.0f);
   bird();
   glPopMatrix();
///////////////////

///////////////////faysal vai
     field();
     buildingPart();
     chair();
     tree();
     hile();
///////////////////

/////////////////////////////////////mamun
     drawRoad();
     glPushMatrix();
     glTranslatef(position,0.0f, 0.0f);
     drawTruck();
     drawCar();
     if (carLightStatus==1){
     drawCarLight();
     drawTruckLight();
     }
     glPopMatrix();
     drawLamp();
/////////////////////////////////////////////

glFlush();

}

    else {
           ///night

            glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);

//////////////////////sakib vai
   waterNight();
   glPushMatrix();
   glTranslatef(-position,0.0f, 0.0f);
   waterLineNight();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   drawBoat();
   glPopMatrix();
/////////////////////

////////////////////mahir
   skyNight();
   star();
   glPushMatrix();
   moon();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(position,0.0f,0.0f);
   cloudNight();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(-position,0.0f,0.0f);
   bird();
   glPopMatrix();
///////////////////

///////////////////faysal vai
     fieldNight();
     buildingPart();
     chair();
     tree();
     hile();
///////////////////

/////////////////////////////////////mamun
     drawRoad();
     glPushMatrix();
     glTranslatef(position,0.0f, 0.0f);
     drawTruck();
     drawCar();
     if (carLightStatus==1){
     drawCarLight();
     drawTruckLight();
     }
     glPopMatrix();
     drawLamp();
/////////////////////////////////////////////

glFlush();

         }

}

//////move algo//////////
void keyboard(unsigned char key, int x, int y){


	 if (key == 's' || key == 's'){		//sun start
		sunStatus = 1;
		speed1=0.002;
	}
	 if (key == 'S' || key == 'S'){		//sun stop
		speed1=0;
	}
	if (key == 'l' || key == 'l'){		//carLight start
		carLightStatus = 1;
	}
	 if (key == 'L' || key == 'L'){		//carLight stop
		carLightStatus=0;
	}
	if (key == 'n' || key == 'n'){		//Night
		nightStatus=1;
	}
	if (key == 'N' || key == 'N'){		//Day
		nightStatus=0;
	}



}

void myInit(void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(700, 700);
   glutInitWindowPosition(0, 0);
   glutCreateWindow("Ocean and City's View");
   glutDisplayFunc(display);
   glutKeyboardFunc(keyboard);
   glutTimerFunc(100,update,0);
   glutTimerFunc(100,update1,0);
   myInit();
   glutMainLoop();
   return 0;
}


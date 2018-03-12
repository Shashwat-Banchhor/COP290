# include <GLUT/GLUT.h>
#include <iostream>
#include <vector>
#include "global.h"

using namespace std;


vector<vector<int> > veco ;
void render();
void reshape(int x, int y);

void keyboard(unsigned char c , int x ,int y);
void mouse(int button,int state,int x,int y);

int main(int argc, char ** argv){
    int n;
    int m;
    cin >> m;
    while (m == 1){ 
        vector<int> vec ;
        cin >> n;  
        while (n!= -1){
            vec.push_back(n);
            cin >> n ;
        }
        veco.push_back(vec);
        cin >> m;
    }
    cout << veco.size();
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(512,512);
    glutCreateWindow("Simple Glut");
    
    glutDisplayFunc(render);


        glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);


    glutMainLoop();
    return 0;
}

void render(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    cout << "Hai";
    int size = veco.size();
    cout << size;
    for (int i=0;i<size;i++){

        vector<int> vec = veco.at(i);
        glBegin(GL_LINES);
        glColor3f(1,0,0);
        glVertex2f(vec.at(0),vec.at(1));
        glVertex2f(vec.at(2),vec.at(3));
        glEnd();
    }
        /*glBegin(GL_LINES);
        glColor3f(0,1,0);
        glVertex2f(0.5,0.5);
        glVertex2f(0,0.5);
        glEnd();
        */
        glutSwapBuffers();
    

}

void keyboard(unsigned char c , int x ,int y){

    if (c == 27){
        exit(0);
    }

}
void mouse(int button,int state,int x,int y){
    if (button == GLUT_RIGHT_BUTTON){
        exit(0);
    }
    else {

    }
}

void reshape(int width, int height)
{
    /* tell OpenGL we want to display in a recangle that is the
     same size as the window
     */
    glViewport(0,0,width,height);
    
    /* switch to the projection matrix */
    glMatrixMode(GL_MODELVIEW_MATRIX);
    
    /* clear the projection matrix */
    glLoadIdentity();
    
    /* set the camera view, orthographic projection in 2D */
    gluOrtho2D(0,width,0,height);
    
    /* switch back to the model view matrix */
    glMatrixMode(GL_MODELVIEW);
}
#ifndef MY_GLOBALS_H
#define MY_GLOBALS_H
#include <vector>
#include <cmath>

// This is a declaration of your variable, which tells the linker this value
// is found elsewhere.  Anyone who wishes to use it must include global.h,
// either directly or indirectly.

class VIEW
{
    // Access specifier
    public:
 
    // Data Members
    std::vector<std::vector<int> > vertex;
    std::vector<std::vector<int> > edge;

 
    // Member Functions()
    void rotate(int abx,int aby,int abz)
    {

    }
    void scale()
    {
    }
    void translate()
    {
    }
};

class threed_object{
	public:
	    // Data Members
    std::vector<std::vector<int> > vertex;
    std::vector<std::vector<int> > edge;
    void rotate(double x,double y,double z)
    {
        int temp1;
        int temp2;
        for(int i=0;i<vertex.size();i++){
            temp1=vertex[i][1]*(cos (x))+vertex[i][2]*(sin (x));
            temp2=(vertex[i][1])*(-sin (x))+(vertex[i][2])*(cos (x));
            vertex[i][1]=temp1;
            vertex[i][2]=temp2;
            temp1=vertex[i][0]*(cos (x))+vertex[i][2]*(sin (x));
            temp2=(vertex[i][0])*(-sin (x))+(vertex[i][2])*(cos (x));
            vertex[i][2]=temp1;
            vertex[i][0]=temp2;
            temp1=vertex[i][0]*(cos (x))+vertex[i][1]*(sin (x));
            temp2=(vertex[i][0])*(-sin (x))+(vertex[i][1])*(cos (x));
            vertex[i][0]=temp1;
            vertex[i][1]=temp2;            
        }
        for(int i=0;i<edge.size();i++){
            temp1=edge[i][1]*(cos (x))+edge[i][2]*(sin (x));
            temp2=(edge[i][1])*(-sin (x))+(edge[i][2])*(cos (x));
            edge[i][1]=temp1;
            edge[i][2]=temp2;
            temp1=edge[i][2]*(cos (x))+edge[i][0]*(sin (x));
            temp2=(edge[i][2])*(-sin (x))+(edge[i][0])*(cos (x));
            edge[i][2]=temp1;
            edge[i][0]=temp2;
            temp1=edge[i][0]*(cos (x))+edge[i][1]*(sin (x));
            temp2=(edge[i][0])*(-sin (x))+(edge[i][1])*(cos (x));
            edge[i][0]=temp1;
            edge[i][1]=temp2;
            temp1=edge[i][4]*(cos (x))+edge[i][5]*(sin (x));
            temp2=(edge[i][4])*(-sin (x))+(edge[i][5])*(cos (x));
            edge[i][4]=temp1;
            edge[i][5]=temp2;
            temp1=edge[i][5]*(cos (x))+edge[i][3]*(sin (x));
            temp2=(edge[i][5])*(-sin (x))+(edge[i][3])*(cos (x));
            edge[i][5]=temp1;
            edge[i][3]=temp2;
            temp1=edge[i][3]*(cos (x))+edge[i][4]*(sin (x));
            temp2=(edge[i][3])*(-sin (x))+(edge[i][4])*(cos (x));
            edge[i][3]=temp1;
            edge[i][4]=temp2;
        }
    }
    void scale()
    {
        int maxlimit =100;
        int minx=vertex[0][0];
        int miny=vertex[1][1];
        int minz=vertex[0][2];
        for(int i=0;i<vertex.size();i++){
            if(minx>vertex[i][0]){
                minx=vertex[i][0];
            }
            if(miny>vertex[i][1]){
                miny=vertex[i][1];
            }
            if(miny>vertex[i][2]){
                miny=vertex[i][2];
            }
        }
        int maxx=vertex[0][0];
        int maxy=vertex[1][1];
        int maxz=vertex[0][2];
        for(int i=0;i<vertex.size();i++){
            if(maxx<vertex[i][0]){
                maxx=vertex[i][0];
            }
            if(maxy<vertex[i][1]){
                maxy=vertex[i][1];
            }
            if(maxy<vertex[i][2]){
                maxy=vertex[i][2];
            }
        }
        int rnx=maxx-minx;
        int rnz=maxz-minz;
        int rny=maxy-miny;
        int sc;
        if(rnx<rny&&rnz<rny){
            sc=rny/maxlimit+1;
        }
        if(rny<rnx&&rnz<rnx){
            sc=rnx/maxlimit+1;
        }
        if(rnx<rnz&&rny<rnz){
            sc=rnx/maxlimit+1;
        }
        for(int i=0;i<vertex.size();i++){
            vertex[i][0]=vertex[i][0]/sc;
            vertex[i][1]=vertex[i][1]/sc;
            vertex[i][2]=vertex[i][2]/sc;
        }
        for(int i=0;i<edge.size();i++){
            edge[i][0]=edge[i][0]/sc;
            edge[i][1]=edge[i][1]/sc;
            edge[i][2]=edge[i][2]/sc;
            edge[i][3]=edge[i][3]/sc;
            edge[i][4]=edge[i][4]/sc;
            edge[i][5]=edge[i][5]/sc;
        }
    }
    void scale(int n){
        for(int i=0;i<vertex.size();i++){
            vertex[i][0]=vertex[i][0]/n;
            vertex[i][1]=vertex[i][1]/n;
            vertex[i][2]=vertex[i][2]/n;
        }
        for(int i=0;i<edge.size();i++){
            edge[i][0]=edge[i][0]/n;
            edge[i][1]=edge[i][1]/n;
            edge[i][2]=edge[i][2]/n;
            edge[i][3]=edge[i][3]/n;
            edge[i][4]=edge[i][4]/n;
            edge[i][5]=edge[i][5]/n;
        }
    }
    void translate()
    {
        int minx=vertex[0][0];
        int miny=vertex[1][1];
        int minz=vertex[0][2];
        for(int i=0;i<vertex.size();i++){
            if(minx>vertex[i][0]){
                minx=vertex[i][0];
            }
            if(miny>vertex[i][1]){
                miny=vertex[i][1];
            }
            if(miny>vertex[i][2]){
                miny=vertex[i][2];
            }
        }
        for(int i=0;i<vertex.size();i++){
            vertex[i][0]=vertex[i][0]-minx;
            vertex[i][1]=vertex[i][1]-miny;
            vertex[i][2]=vertex[i][2]-minz;
        }        
        for(int i=0;i<edge.size();i++){
            edge[i][0]=edge[i][0]-minx;
            edge[i][1]=edge[i][1]-miny;
            edge[i][2]=edge[i][2]-minz;
            edge[i][3]=edge[i][3]-minx;
            edge[i][4]=edge[i][4]-miny;
            edge[i][5]=edge[i][5]-minz;
        }
    }
    void translate(int x,int y,int z){
        for(int i=0;i<vertex.size();i++){
            vertex[i][0]=vertex[i][0]-x;
            vertex[i][1]=vertex[i][1]-y;
            vertex[i][2]=vertex[i][2]-z;
        }    
        for(int i=0;i<edge.size();i++){
            edge[i][0]=edge[i][0]-x;
            edge[i][1]=edge[i][1]-y;
            edge[i][2]=edge[i][2]-z;
            edge[i][3]=edge[i][3]-x;
            edge[i][4]=edge[i][4]-y;
            edge[i][5]=edge[i][5]-z;
        }
    }
};

class threedplane{
    public:
    std::vector<std::vector<int> > vertex;
    std::vector<std::vector<int> > edge;
}; 

 threedplane thplane;
  threed_object threed;
  VIEW front;
  VIEW top;
  VIEW side;
#endif
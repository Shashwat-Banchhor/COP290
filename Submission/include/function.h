#include <vector>
#include "global.h"
fts MAKE_VIEW(threed_object threed);
//void MAKE_VIEW(threed_object threed);
void MAKE_COMPLETE_GRAPH();
bool ARE_ALL_3_VIEWS_SAME();
void MAKE_VIEW_GRAPH(int k);
void DISPLAY ();
Combine Combine_func(fts two);
threedplane convert3dplane(threed_object threed);
threed_object rotate(double x,double y,double z,threed_object threed );
//    threed_object scale(threed_object threed);
//        threed_object scale(int n,threed_object threed);
            //threed_object translate(threed_object threed);
std::vector<std::vector<float> > translate(float x,float y,std::vector<std::vector<float> > edges);
std::vector<std::vector<float> > translate_threed(float x,float y,float z,std::vector<std::vector<float> > edges);


float scale_max(std::vector<std::vector<float> >  edges);
float scale_max_threed(std::vector<std::vector<float> >  edges);

std::vector<std::vector<float> > translate_seperately(std::vector<std::vector<float> > edges);
std::vector<std::vector<float> > translate_seperately_threed(std::vector<std::vector<float> > edges);

std::vector<std::vector<float> >  scale(float max_x,std::vector<std::vector<float> >  edges);
std::vector<std::vector<float> >  scale_threed(float max_x,std::vector<std::vector<float> >  edges);

temp_threed_object form_vertex(fts twod);
std::vector<std::vector<float> > removing_edge(temp_threed_object temp_threed,fts twod);
threed_object Combine_threed(threed_object three);




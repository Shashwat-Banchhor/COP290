#include <vector>
#include "global.h"
fts MAKE_VIEW(threed_object threed);
//void MAKE_VIEW(threed_object threed);
void MAKE_COMPLETE_GRAPH();
bool ARE_ALL_3_VIEWS_SAME();
void MAKE_VIEW_GRAPH(int k);
void DISPLAY ();
Combine Combine_func(fts two,threedplane three);
threedplane convert3dplane(threed_object threed);
threed_object rotate(double x,double y,double z,threed_object threed );
//    threed_object scale(threed_object threed);
//        threed_object scale(int n,threed_object threed);
            //threed_object translate(threed_object threed);
std::vector<std::vector<int> > translate(int x,int y,std::vector<std::vector<int> > edges);
int scale_max(std::vector<std::vector<int> >  edges);

std::vector<std::vector<int> > translate_seperately(std::vector<std::vector<int> > edges);

std::vector<std::vector<int> >  scale(int max_x,std::vector<std::vector<int> >  edges);

temp_threed_object form_vertex(fts twod);
std::vector<std::vector<int> > removing_edge(temp_threed_object temp_threed,fts twod);





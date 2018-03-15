#include <vector>
#include "global.h"
fts MAKE_VIEW(threed_object threed);
void MAKE_COMPLETE_GRAPH();
bool ARE_ALL_3_VIEWS_SAME();
void MAKE_VIEW_GRAPH(int k);
void DISPLAY ();
threedplane convert3dplane(threed_object threed);
threed_object rotate(double x,double y,double z,threed_object threed );
    threed_object scale(threed_object threed);
        threed_object scale(int n,threed_object threed);
            threed_object translate(threed_object threed);
                threed_object translate(int x,int y,int z,threed_object threed);



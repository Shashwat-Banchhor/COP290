#ifndef MY_GLOBALS_H
#define MY_GLOBALS_H
#include <vector>
#include <cmath>

// This is a declaration of your variable, which tells the linker this value
// is found elsewhere.  Anyone who wishes to use it must include global.h,
// either directly or indirectly.

// class VIEW
// {
//     // Access specifier
//     public:
 
//     // Data Members
//     std::vector<std::vector<int> > vertex;
//     std::vector<std::vector<int> > edge;

 
//     // Member Functions()
    
// };

class threed_object{
	public:
	    // Data Members
    std::vector<std::vector<int> > vertex;
    std::vector<std::vector<int> > edge;
    
};

class threedplane{
    public:
    std::vector<std::vector<int> > vertex;
    std::vector<std::vector<int> > edge;
}; 
class fts{
    public:
    std::vector<std::vector<int> > fvertex;
    std::vector<std::vector<int> > tvertex;
    std::vector<std::vector<int> > svertex;
    std::vector<std::vector<int> > fedge;
    std::vector<std::vector<int> > tedge;
    std::vector<std::vector<int> > sedge;
};

 // threedplane thplane;
 //  threed_object threed;
 //  VIEW front;
 //  VIEW top;
 //  VIEW side;
#endif
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
//     std::vector<std::vector<float> > vertex;
//     std::vector<std::vector<float> > edge;


//     // Member Functions()

// };

class threed_object{
    public:
        // Data Members
    std::vector<std::vector<float> > vertex;
    std::vector<std::vector<float> > edge;

};

class temp_threed_object{
    public:
        // Data Members
    std::vector<std::vector<float> > vertex;
    std::vector<std::vector<float> > edge;

};



class threedplane{
    public:
    std::vector<std::vector<float> > vertex;
    std::vector<std::vector<float> > edge;
};

class Combine{
    public:
    std::vector<std::vector<float> > edge;
};

class fts{
    public:
    std::vector<std::vector<float> > fvertex;
    std::vector<std::vector<float> > tvertex;
    std::vector<std::vector<float> > svertex;
    std::vector<std::vector<float> > fedge;
    std::vector<std::vector<float> > tedge;
    std::vector<std::vector<float> > sedge;
};

 // threedplane thplane;
 //  threed_object threed;
 //  VIEW front;
 //  VIEW top;
 //  VIEW side;
#endif

#include "object.h"
#include <cstdlib>
#include <iostream>
using namespace std;
namespace datastru {


void* object::operator new (unsigned int  size)  throw()
{
   cout<< "mallo"<<endl;
    return  malloc(size);

}
void  object::operator delete (void* p)
{ free(p);}
object::~object(){};
}

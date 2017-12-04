#include "object.h"
#include <cstdlib>
#include <iostream>
using namespace std;
namespace datastru {


void* object::operator new (unsigned int  size)  throw()
{
   cout<< "mallo  new"<<size<<endl;
    return  malloc(size);

}
void  object::operator delete (void* p)
{ cout<< "delect  new:"<<p<<endl;   free(p);}
object::~object(){};
}

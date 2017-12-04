#include <iostream>

#include "object.h"
using namespace  std;

using namespace datastru;
class  test:public  object
{
public :
    int  a;
    int b;
};
class  child:public  test
{   public:
int k;};

int main()
{
    object* obj1=new test();
    object* obj2=new child();
     cout<< "mallo  new"<<obj1<<endl;
      cout<< "mallo  new"<<obj2<<endl;
    delete obj1;
     delete obj2;
    return  0;}

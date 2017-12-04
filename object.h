#ifndef OBJECT_H
#define OBJECT_H
namespace datastru
{
class object
{
public:
      void* operator new (unsigned int  size)  throw();
      void  operator delete (void* p)   ;
   virtual ~object()=0;
};
}
#endif // OBJECT_H

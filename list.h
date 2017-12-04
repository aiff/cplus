#ifndef LIST_H
#define LIST_H
namespace datastru
{
 template <typename T>
class list:public Object
{
public:
    virtual bool insert(int i,const T&e)=0;





};
 }
#endif // LIST_H

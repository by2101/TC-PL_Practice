
#include "String.h"

namespace My_Str{

String::String()
{
    rep = new Srep(0,"");
}
String::String(const String& x)
{
    //¹²Ïí±íÊ¾
    x.rep->n++;
    rep = x.rep;
}
String::String(const char* p)
{
    rep = new Srep(strlen(p),p);
}
String::~String()
{
    if(--rep->n == 0)
    {
        delete rep;        
    }
}
String& String::operator=(const String& x)
{
    x.rep->n++;
    if(--rep->n == 0)
    {
        delete rep;
    }
    rep = x.rep;
    return *this;
}
String& String::operator=(const char* s)
{
    if (rep->n == 1)
    {
        rep->assign(strlen(s), s);        
    }
    else
    {
        rep->n--;
        rep = new Srep(strlen(s),s);
    }
    return *this;
}

}




 

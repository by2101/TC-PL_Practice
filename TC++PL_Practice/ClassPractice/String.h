#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <iostream>
#endif
#include <cstring>
namespace My_Str{
using std::ostream;

class String
{
// Representation
struct Srep
{
    char* s;
    int sz;
    int n;
 
    Srep(int nsz, const char* p)
    {
        n = 1;
        sz = nsz;
        s = new char[sz+1];
        strcpy(s,p);
    }
    
    ~Srep()
    {
        delete[] s;
    }
    
    Srep* get_own_copy()
    {
        if(n == 1)
        {
            return this;
        }
        n--;
        return new Srep(sz,s);        
    }
    
    void assign(int nsz, const char* p)
    {
        if(sz != nsz)
        {
            delete[] s;
            sz = nsz;
            s = new char[sz+1];
        }
        strcpy(s,p);
    }
private:
    Srep(const Srep&);
    Srep& operator=(const Srep&);
    
};    



    struct Srep;
    Srep *rep;

    void check(int i) const
    {
        if(i<0 || rep->sz <= i)
        {
            throw Range();
        }
    }
    char read(int i) const
    {
        return rep->s[i];
    }
    void write(int i, char c)
    {
        rep = rep->get_own_copy();
        rep->s[i] = c;
    }
public:

//Reference of char
class Cref
{
    friend class String;
    String& s;
    int i;
    Cref(String& ss, int ii) : s(ss),i(ii){}
public:
    operator char() const {return s.read(i);}
    void operator=(char c){s.write(i,c);}  
};

    class Range{};

    String();
    String(const char*);
    String(const String&);
    String& operator=(const char*);
    String& operator=(const String&);
    ~String();

    int size() const
    {
        return rep->sz;
    }
    Cref operator[](int i)
    {
        check(i);
        return Cref(*this,i);
    }
    char operator[](int i) const
    {
        check(i);
        return rep->s[i];
    }
    friend ostream& operator<<(ostream &s, const String& p)
    {
        return s << p.rep->s;
    }

};

}




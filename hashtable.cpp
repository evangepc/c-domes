#include "hashtable.h"

hashtable::hashtable(int in_Size)
{
    Size=in_Size;
    Table=new string [Size];
}

int hashtable::mkascii(string word)
{
    int ascii=0;
    for(int i=0;word[i]!='/0')
}

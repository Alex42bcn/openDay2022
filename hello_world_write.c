// http://codewiki.wikidot.com/c:system-calls:write

#include<unistd.h> 
#include <string.h>
  
int main (void) 
{ 
    char buf1[35] = "Hello World, !Hello OpenDay42\n";
    const char *str = "char const. Hello World, !Hello OpenDay42\n";
   
    write(1, buf1, 35);
    write(1, str, strlen(str));
  
    return 0; 
}

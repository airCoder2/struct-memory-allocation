#include <stdio.h>
#include <string.h>
#include <stdlib.h>





int main(int argc, char *argv[])
{

  struct hello {
    char *hi;
  };

  struct hello Hello;
  Hello.hi = malloc(10);


  struct second {
    char *hi;
  };
   struct second Second;
   Second.hi = malloc(100);
  

  printf("the first struct with a bigger aray %d \n", sizeof(Hello));

  printf("the first struct with a smaller aray %d \n", sizeof(Second));


  return 0;
}

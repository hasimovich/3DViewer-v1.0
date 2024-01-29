#include "s21_3DViewer.h"

int main() {
  // char* s = "ttt";
  // char* path = "ob.obj";
 // vertex ver = {0};
  //initializeVertex(&ver);
  //setFValue(&ver, 22);
  //setFValue(&ver, 19);
  //*(ver.f) = 222;
  //   obj_to_viewer(path, &ver);

  int* a;
  int size=(int)((int)sizeof(a)/sizeof(int));
  a=(int*)malloc((size*sizeof(int)));
  printf("size:%d\n",size);
  //a= (int*)malloc((size)*sizeof(int));
  *a=6;
  *(a+1)=12;
  *(a+3)=44;
  int i=0;
  while ((a+i)!=NULL)
  {
printf("*a=%d -size:%d\n",*(a+i),(int)((int)sizeof(a)/sizeof(int)));
i++;
  }
  
printf("*a=%d -size:%d\n",*a,(int)((int)sizeof(a)/sizeof(int)));

  //printf("%d", *ver.f);
  return 0;
}
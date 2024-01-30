#include "s21_3DViewer.h"

int main() {
  // char* s = "ttt";
char* path = "ob.obj";
 vertex ver = {0};
initializeVertex(&ver);

  //*(ver.f) = 222;
 obj_to_viewer(path, &ver);




//or(int i=0;i<3;i++) {for (int j=0;j<3;j++)printf("%f ", ver.v[i][j]);printf("\n");}
  return 0;
}
#include "s21_3DViewer.h"

int main() {
  // char* s = "ttt";
  // char* path = "ob.obj";
  vertex ver = {0};
  initializeVertex(&ver);
  setFValue(&ver, 22);
  setFValue(&ver, 19);
  //*(ver.f) = 222;
  //   obj_to_viewer(path, &ver);
  printf("%d", *ver.f);
  return 0;
}
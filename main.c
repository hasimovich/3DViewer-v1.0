#include "s21_3DViewer.h"

int main() {
  // char* s = "ttt";
  char* path = "ob.obj";
  vertex ver = {0};
  ver.f[0] = 222;
  obj_to_viewer(path, &ver);
  // printf("%d", *ver->f);
  return 0;
}
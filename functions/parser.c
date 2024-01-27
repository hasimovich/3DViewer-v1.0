#include "../s21_3DViewer.h"

void obj_to_viewer(char* obj, vertex* ver) {
  char* path = obj;
  FILE* file = fopen(path, "r");

  if (file == NULL) {
    printf("file \"%s\", can't open!\n", path);
  } else {
    printf("file \"%s\", ok!\n", path);
    // fclose(file);
  }

  *(ver->f) = 1;
}
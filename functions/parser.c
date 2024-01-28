#include "../s21_3DViewer.h"

void obj_to_viewer(char* obj, vertex* ver) {
  char* path = obj;
  FILE* file = fopen(path, "r");

  if (file == NULL) {
    printf("file \"%s\", can't open!\n", path);
  } else {
    char p[256];
    char* s = fgets(p, sizeof(s), file);
    printf("file \"%s\", ok!\n", s);

    printf("ver \"%d\", ok!\n", ver->f[0]);

    fclose(file);
  }
}

void setFValue(vertex* ver, int value, int poz) {
  // Выделение памяти для int и присвоение значения
  if (poz == 0) {
    ver->f = (int*)malloc(sizeof(int));
    *(ver->f + poz) = value;
  } else {
    ver->f = (int*)realloc(ver->f, sizeof(ver->f) + sizeof(int));
  }
}

void initializeVertex(vertex* ver) {
  // Инициализация массива v
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      ver->v[i][j] = malloc(sizeof(float));
      if (ver->v[i][j] == NULL) {
        // Обработка ошибки выделения памяти
        exit(EXIT_FAILURE);
      }
    }
  }

  // Инициализация массива f
  ver->f = malloc(sizeof(int));
  if (ver->f == NULL) {
    // Обработка ошибки выделения памяти
    exit(EXIT_FAILURE);
  }
}

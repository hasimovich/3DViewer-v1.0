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

void setFValue(vertex* ver, int value) {
  // Проверка указателей на нулевое значение
  if (ver == NULL || ver->f == NULL) {
    return;
  }

  int size = sizeof(*ver->f) / sizeof(int);

  ver->f = (int*)realloc(ver->f, (size + 1) * sizeof(int));
  *(ver->f + size) = value;
}

void initializeVertex(vertex* ver) {
  // Инициализация массива v
  for (int i = 0; i < 2; ++i) {
    *ver->v[i] = malloc(sizeof(float));
    if (ver->v[i] == NULL) {
      // Обработка ошибки выделения памяти
      exit(EXIT_FAILURE);
    }
  }

  // Инициализация массива f
  ver->f = malloc(sizeof(int));
  if (ver->f == NULL) {
    // Обработка ошибки выделения памяти
    exit(EXIT_FAILURE);
  }
}

#include "../s21_3DViewer.h"

void obj_to_viewer(char* obj, vertex* ver) {
  char* path = obj;
  FILE* file = fopen(path, "r");

  if (file == NULL) {
    printf("file \"%s\", can't open!\n", path);
  } else {
    char p[256];
    while (fgets(p, 256, file)!=NULL)
  printf("%s\n", p);
    printf("-- \"%d\"--\n", ver->f[0]);

    fclose(file);
  }
}

void setFValue(vertex* ver, int value, int size) {
  // Проверка указателей на нулевое значение
  if (ver == NULL || ver->f == NULL) {
    return;
  }


  ver->f = (int*)realloc(ver->f, size * sizeof(int));
  ver->f[size-1] = value;


}

void setVValue(vertex* ver, float* value, int size) {
  // Проверка указателей на нулевое значение
  if (ver == NULL || ver->f == NULL) {
    return;
  }

for (int i=0;i<3;i++){
  ver->v[i] = (float*)realloc(ver->v[i], size * sizeof(float));
  ver->v[size-1][i] = value[i];

}
}

void initializeVertex(vertex* ver) {
  // Инициализация массива v
  for (int i = 0; i < 2; ++i) {
    ver->v[i] = (float*)malloc(sizeof(float));
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

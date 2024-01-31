#include "../s21_3DViewer.h"

void obj_to_viewer(char* obj, vertex* ver) {
  char* path = obj;
  FILE* file = fopen(path, "r");

  if (file == NULL) {
    printf("file \"%s\", can't open!\n", path);
  } else {
    char p[256];
    while (fgets(p, 256, file) != NULL) {
      parser_str(ver, p);
    }

    fclose(file);
  }
}

void setFValue(vertex* ver, int value) {
  // Проверка указателей на нулевое значение
  if (ver == NULL || ver->f == NULL) {
    return;
  }
ver->size_f++;
  ver->f = (int*)realloc(ver->f, ver->size_f * sizeof(int));
  ver->f[ver->size_f - 1] = value;
}

void setVValue(vertex* ver, float* value) {
  // Проверка указателей на нулевое значение
  if (ver == NULL || ver->f == NULL) {
    return;
  }
ver->size_v++;
  for (int i = 0; i < 3; i++) {
    ver->v[i] = (float*)realloc(ver->v[i], ver->size_v * sizeof(float));
    ver->v[ver->size_v - 1][i] = value[i];
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
ver->size_v=0;
ver->size_f=0;
}

int parser_str(vertex* ver, char* str) {
  int poz = 0;
  int ex = 0;
  while (str[poz] == ' ' || str[poz] == '\n') poz++;
  if (str[poz] == '#') {
    ex = 1;
  } else if (!((str[poz] == 'v' && str[poz + 1] == ' ') || str[poz] == 'f')) {
    ex = 2;
  } else {
    if (str[poz] == 'v')
    {
   //sscanf("v %f %f %f",);
    }
    
    printf("%s", str);
    *ver->f = 1;
  }
  return ex;
}

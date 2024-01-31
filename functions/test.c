#include "../s21_3DViewer.h"

void string(char* str, char** base) {
  char* s = malloc(sizeof(str));
  *base = strcpy(s, str);
}
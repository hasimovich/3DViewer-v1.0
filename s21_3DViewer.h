#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s21_3DViewer {
  float* v[2];
  int* f;
} vertex;

void string(char* str, char** base);
void obj_to_viewer(char* obj, vertex* ver);
void setFValue(vertex* ver, int value, int size);
void setVValue(vertex* ver, float* value, int size);
void initializeVertex(vertex* ver);
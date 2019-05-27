#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct circles {
    int num;
    char fig[10];
    float x;
    float y;
    float r;
} circle;

typedef struct triangles {
    int num;
    char fig[10];
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
} triangle;

float Dist(int x1, int y1, int x2, int y2);
float Perimetr_Circ(float x, float y, float r);
float Area_Circ(float x, float y, float r);
void CircleIntersects(circle* circles, triangle* triangles, int Circ, int Trig);
void Fileread(FILE* input, circle* circles);
float Perimetr(float x1, float y1, float x2, float y2, float x3, float y3);
float Area(float x1, float y1, float x2, float y2, float x3, float y3, float P);
void TriangleIntersect(circle* circles, triangle* triangles, int Circ,
    int Trig);
void ScanFile(FILE* input, circle* circles, triangle* triangles, char* c,
    char* t);
float Height(float x1, float y1, float x2, float y2, float x3, float y3,
    float P);

#endif
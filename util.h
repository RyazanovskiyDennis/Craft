#ifndef _util_h_
#define _util_h_

#ifndef __APPLE_CC__
    #include <GL/glew.h>
#endif

#include <GLFW/glfw3.h>

#define PI 3.14159265359
#define DEGREES(radians) ((radians) * 180 / PI)
#define RADIANS(degrees) ((degrees) * PI / 180)
#define ABS(x) ((x) < 0 ? (-(x)) : (x))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

typedef struct {
    unsigned int frames;
    double since;
} FPS;

int rand_int(int n);
double rand_double();
void update_fps(FPS *fps, int show);

GLuint gen_buffer(GLenum target, GLsizei size, const void *data);
GLuint make_shader(GLenum type, const char *source);
GLuint load_shader(GLenum type, const char *path);
GLuint make_program(GLuint shader1, GLuint shader2);
GLuint load_program(const char *path1, const char *path2);

void make_plant(
    float *vertex, float *normal, float *texture,
    float x, float y, float z, float n, int w, float rotation);
void make_cube(
    float *vertex, float *normal, float *texture,
    int left, int right, int top, int bottom, int front, int back,
    float x, float y, float z, float n, int w);
void make_rotated_cube(
    float *vertex, float *normal, float *texture,
    float x, float y, float z, float n, int w, float rx, float ry);
void make_player(
    float *vertex, float *normal, float *texture,
    float x, float y, float z, float rx, float ry);
void make_cube_wireframe(float *vertex, float x, float y, float z, float n);

void load_png_texture(const char *file_name);

#endif

#ifndef MYLIB_H_
#define MYLIB_H_
void * emalloc(size_t s);

void * emalloc(size_t s) {
  void *result = malloc(s);
  if (result == NULL) {
    exit(1);
    printf("Memory allocation error.\n");
  }
  return result;
}

#endif

#ifndef __USERPROG__
#define __USERPROG__

typedef struct missile_code {
  int numprocs;
  char really_important_char;
} missile_code;

#define FILENAME_TO_RUN "bin/spawn_me.dlx.obj"

#ifndef NULL
#define NULL (void *)0x0
#endif

#endif

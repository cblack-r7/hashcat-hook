#define _GNU_SOURCE
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dlfcn.h>

mode_t (*__umask)(mode_t)=NULL;

mode_t umask(mode_t cmask) {
        printf("!!! umask(2) hook applied !!!\n");
        if(!__umask)
                __umask = dlsym(RTLD_NEXT, "umask");
        mode_t og =  __umask(0017);
        return og;
}

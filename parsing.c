#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int is_cmd(char *path) {
    struct stat st;
    
    if (!path || stat(path, &st)) {
        return 0;
    }
    
    if (st.st_mode & S_IFREG) {
        return 1;
    }
    
    return 0;
}

#include <syslog.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    openlog("Logs", LOG_PID, LOG_USER);
    syslog(LOG_INFO, "Start logging");
    
    char *dir = argv[1];
    char *text = argv[2];
    char *ptr;
    FILE *fp;
    int  ch = '/';
    
    if ( dir == NULL || text == NULL ) {
        syslog(LOG_ERR, "one or more of the specified parameters was blank");
        exit(1);
    }
    
    syslog(LOG_DEBUG, "Writing %s to %s", dir, text);
    fp = fopen(dir, "w");
    fprintf(fp,"%s\n" ,text);
    fclose(fp);
    closelog();
    return 0;
}
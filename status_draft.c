#include <time.h>

time_t t = time(NULL);
struct tm *tmptr = localtime(&t);
char tbuf[sizeof(stext)];
strftime(tbuf, sizeof tbuf, "%d.%m %R", tmptr);
if (strcmp(tbuf, stext)) {
    strcpy(stext, tbuf);
    XStoreName(dpy, root, stext);
}

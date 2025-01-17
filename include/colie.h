#ifndef COLIE_H
#define COLIE_H

#define COLIE_FG_BLACK "\033[30m"
#define COLIE_FG_RED "\033[31m"
#define COLIE_FG_GREEN "\033[32m"
#define COLIE_FG_YELLOW "\033[33m"
#define COLIE_FG_BLUE "\033[34m"
#define COLIE_FG_MAGENTA "\033[35m"
#define COLIE_FG_CYAN "\033[36m"
#define COLIE_FG_WHITE "\033[37m"

#define COLIE_BG_BLACK "\033[40m"
#define COLIE_BG_RED "\033[41m"
#define COLIE_BG_GREEN "\033[42m"
#define COLIE_BG_YELLOW "\033[43m"
#define COLIE_BG_BLUE "\033[44m"
#define COLIE_BG_MAGENTA "\033[45m"
#define COLIE_BG_CYAN "\033[46m"
#define COLIE_BG_WHITE "\033[47m"

#define COLIE_RESET "\033[0m"
#define COLIE_BOLD "\033[1m"
#define COLIE_DIM "\033[2m"
#define COLIE_ITALIC "\033[3m"
#define COLIE_UNDERLINE "\033[4m"
#define COLIE_BLINK "\033[5m"
#define COLIE_INVERT "\033[7m"
#define COLIE_HIDDEN "\033[8m"
#define COLIE_STRIKE "\033[9m"

int cprintf(const char * format, ...);

#endif

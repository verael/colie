#include <colie.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int cprintf(const char *format, ...) {
    char buffer[1024];
    size_t length = 0;
    const char *pointer = format;
    va_list args;
    va_start(args, format);

    while (*pointer && length < sizeof(buffer) - 1) {
        if (*pointer == '%' && (*(pointer + 1) == 'F' || *(pointer + 1) == 'B' || *(pointer + 1) == 'A')) {
            char type = *(pointer + 1);
            pointer += 2;

            if (type == 'F' || type == 'B' || type == 'A') {
                char specifier = *pointer++;
                const char *color_code = NULL;

                if (type == 'F') {
                    switch (specifier) {
                        case 'b': color_code = COLIE_FG_BLACK; break;
                        case 'r': color_code = COLIE_FG_RED; break;
                        case 'g': color_code = COLIE_FG_GREEN; break;
                        case 'y': color_code = COLIE_FG_YELLOW; break;
                        case 'l': color_code = COLIE_FG_BLUE; break;
                        case 'm': color_code = COLIE_FG_MAGENTA; break;
                        case 'c': color_code = COLIE_FG_CYAN; break;
                        case 'w': color_code = COLIE_FG_WHITE; break;
                        default: pointer--; break; // Invalid specifier
                    }
                } else if (type == 'B') {
                    switch (specifier) {
                        case 'b': color_code = COLIE_BG_BLACK; break;
                        case 'r': color_code = COLIE_BG_RED; break;
                        case 'g': color_code = COLIE_BG_GREEN; break;
                        case 'y': color_code = COLIE_BG_YELLOW; break;
                        case 'l': color_code = COLIE_BG_BLUE; break;
                        case 'm': color_code = COLIE_BG_MAGENTA; break;
                        case 'c': color_code = COLIE_BG_CYAN; break;
                        case 'w': color_code = COLIE_BG_WHITE; break;
                        default: pointer--; break; // Invalid specifier
                    }
                } else if (type == 'A') {
                    switch (specifier) {
                        case 'r': color_code = COLIE_RESET; break;
                        case 'b': color_code = COLIE_BOLD; break;
                        case 'd': color_code = COLIE_DIM; break;
                        case 'i': color_code = COLIE_ITALIC; break;
                        case 'u': color_code = COLIE_UNDERLINE; break;
                        case 'k': color_code = COLIE_BLINK; break;
                        case 'v': color_code = COLIE_INVERT; break;
                        case 'h': color_code = COLIE_HIDDEN; break;
                        case 's': color_code = COLIE_STRIKE; break;
                        default: pointer--; break; // Invalid specifier
                    }
                }

                if (color_code) {
                    size_t written = snprintf(buffer + length, sizeof(buffer) - length, "%s", color_code);
                    if (written >= sizeof(buffer) - length) {
                        buffer[sizeof(buffer) - 1] = '\0'; // Ensure null-termination
                        break;
                    }
                    length += written;
                }
            }
        } else {
            if (length < sizeof(buffer) - 1) {
                buffer[length++] = *pointer++;
            } else {
                break;
            }
        }
    }

    buffer[length] = '\0'; // Null-terminate the string

    int result = vprintf(buffer, args);
    va_end(args);

    return result;
}

# COLIE Library: Colour Formatting in C

## About

**Colie** is a lightweight, header-only C library for terminal text styling and colour formatting. It uses ANSI escape codes to customise text appearance, supporting foreground and background colours, text styles, and resets.

## Features

- Foreground and background colour control  
- Text styling (bold, italic, underline, and more)  
- Easy to integrate and use  
- No dependencies, works with any terminal supporting ANSI escape codes  

## Foreground Colours

- **Black:** `COLIE_FG_BLACK`  
- **Red:** `COLIE_FG_RED`  
- **Green:** `COLIE_FG_GREEN`  
- **Yellow:** `COLIE_FG_YELLOW`  
- **Blue:** `COLIE_FG_BLUE`  
- **Magenta:** `COLIE_FG_MAGENTA`  
- **Cyan:** `COLIE_FG_CYAN`  
- **White:** `COLIE_FG_WHITE`  

## Background Colours

- **Black:** `COLIE_BG_BLACK`  
- **Red:** `COLIE_BG_RED`  
- **Green:** `COLIE_BG_GREEN`  
- **Yellow:** `COLIE_BG_YELLOW`  
- **Blue:** `COLIE_BG_BLUE`  
- **Magenta:** `COLIE_BG_MAGENTA`  
- **Cyan:** `COLIE_BG_CYAN`  
- **White:** `COLIE_BG_WHITE`  

## Text Styles

- **Bold:** `COLIE_BOLD`  
- **Dim:** `COLIE_DIM`  
- **Italic:** `COLIE_ITALIC`  
- **Underline:** `COLIE_UNDERLINE`  
- **Blink:** `COLIE_BLINK`  
- **Inverted:** `COLIE_INVERT`  
- **Hidden:** `COLIE_HIDDEN`  
- **Strikethrough:** `COLIE_STRIKE`  

## Reset

To reset all text formatting, use `COLIE_RESET`.

## Example Usage

```c
#include <stdio.h>
#include "colie.h"

int main() {
    printf(COLIE_FG_RED COLIE_BOLD "Error:" COLIE_RESET " Something went wrong.\n");
    printf(COLIE_FG_GREEN "Success!" COLIE_RESET "\n");
    printf(COLIE_FG_YELLOW COLIE_BG_BLUE "Warning:" COLIE_RESET " Check your input.\n");
    return 0;
}
```

### Output:
- **Error:** appears bold and red.  
- **Success!** appears green.  
- **Warning:** appears yellow on a blue background.

## Installation

1. Add `colie.h` to your project's include directory.
2. Include it in your code:

```c
#include "colie.h"
```

## Compatibility

- Works with any terminal supporting ANSI escape codes.
- Compatible with all C compilers.

## Licence

This project is released under the MIT Licence. See the [LICENCE](LICENCE) file for details.

## Contributions

Contributions are welcome! Submit a pull request or open an issue on the repository.

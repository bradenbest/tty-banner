typedef struct sym {
    char ch;
    char *map;
    struct sym *next;
} sym;

typedef enum {
    mode_first,
    mode_normal,
    mode_get_name,
    mode_get_src,
} mode;

void destroy_font(sym *font);
sym *get_sym(sym *font, char ch);
sym *new_font(char *font_src);

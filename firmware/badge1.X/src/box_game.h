//Prototypes
void BOX_inc_random(void);
unsigned char BOX_get_score(void);
void BOX_draw(unsigned char X, unsigned char Y, unsigned int color);
void BOX_erase(unsigned char X, unsigned char Y);
void BOX_pregame(void);
void BOX_start_game(void);
unsigned char BOX_end_game(void);
void BOX_update_score(void);
void BOX_print_string(const char * buf, unsigned int x_pixel, unsigned char y_pixel, unsigned int fgcolor, unsigned int bgcolor);
unsigned char BOX_loc_return_bit(unsigned char X, unsigned char Y);
void BOX_loc_set_bit(unsigned char X, unsigned char Y);
void BOX_loc_clear_bit(unsigned char X, unsigned char Y);
void BOX_store_loc(void);
void BOX_clear_loc(void);
void BOX_load_reference(unsigned char piece, unsigned char rotation);
void BOX_rotate(unsigned char direction);
void BOX_write_piece(void);
void BOX_clear_piece(void);
void BOX_rewrite_display(unsigned int fgcolor, unsigned int bgcolor);
void BOX_update_screen(void);
void BOX_spawn(void);
unsigned char BOX_check(signed char X_offset, signed char Y_offset);
void BOX_line_check(void);
void BOX_up(void);
void BOX_dn(void);
void BOX_lt(void);
void BOX_rt(void);
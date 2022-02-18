/*
** EPITECH PROJECT, 2021
** boostrap myRunner
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #define BACK "img/background.png"
    #define MOUNT "img/mountain.png"
    #define TREE "img/tree.png"
    #define GROUND "img/ground.png"
    #define SCREEN "img/menu.png"
    #define SCORE "img/score.png"
    #define FLOW "img/character.png"
    #define QUIT "img/quit.png"
    #define CHILL1 "audio/chill_1.ogg"
    #define CHILL2 "audio/chill_2.ogg"
    #define JUMP "audio/jump_sound.wav"
    #define SPIKE "img/spike.png"
    #define BLOCK "img/block.png"
    #define FONT "font/asman.TTF"
    #define VAN "img/van.png"
    #define MAX_SPEED 6
    #define MAX_Y 535
    #include <stdio.h>
    #define PLANE "img/plane.png"
    #define END "img/game_over.png"
    #define END_SOUND "audio/game_over.ogg"

typedef struct init_window {
    sfRenderWindow *window;
    sfVideoMode video;
}init_wind;

init_wind i_window(void);

typedef struct init_background {
    sfTexture *background;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
    sfIntRect rect;
}init_back;

init_back i_background(void);

typedef struct init_end_screen {
    sfTexture *background;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
}init_endsc;

init_endsc i_end_screen(void);

typedef struct init_mountain {
    sfTexture *background;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
    sfIntRect rect;
}init_mount;

init_mount i_mountain(void);

typedef struct init_tree {
    sfTexture *background;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
    sfIntRect rect;
}init_tre_e;

init_tre_e i_tree(void);

typedef struct init_ground {
    sfTexture *background;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
    sfIntRect rect;
}init_grnd;

init_grnd i_ground(void);

typedef struct init_flow {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfVector2f taille;
    int jumping;
    float speed;
}init_f;

init_f i_flow(void);

typedef struct init_menu {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
}init_men;

init_men i_menu(void);

typedef struct init_rect_score {
    sfTexture *btn_texture;
    sfSprite *btn_sprite;
    sfVector2f btn_taille;
    sfVector2f btn_position;
    sfIntRect btn_rect;
}init_rct_scr;

init_rct_scr i_rectscore(void);

typedef struct init_quit {
    sfTexture *quit_texture;
    sfSprite *quit_sprite;
    sfVector2f quit_taille;
    sfVector2f quit_position;
    sfIntRect quit_rect;
}init_qt;

init_qt i_quit(void);

typedef struct init_spike {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
}init_spk;

init_spk i_spike(void);

typedef struct init_block {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
}init_blk;

init_blk *i_block(int x, int y);

typedef struct init_score {
    sfText *text;
    sfVector2f taille;
    sfVector2f position;
    sfFont *font;
    sfText *sc_text;
    sfVector2f sc_taille;
    sfVector2f sc_position;
    sfFont *sc_font;
}init_scr;

init_blk **create_block(char **map);

typedef struct init_van {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
}init_vn;

init_vn i_van(void);

typedef struct init_plane {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f taille;
    sfVector2f position;
}init_plne;

init_plne i_plane(void);

typedef struct init_variable {
    int line;
    int ch;
    FILE *fd;
    char *character;
    char **map;
}i_var;

i_var variable(char const *filepath);

typedef struct all_struct {
    init_rct_scr r_score;
    init_back background;
    init_endsc end_screen;
    init_mount mountain;
    init_tre_e tree;
    init_grnd ground;
    init_wind window;
    init_spk spike;
    init_scr *score;
    init_blk *block;
    init_blk **create_block;
    init_vn van;
    init_plne plane;
    i_var var;
    sfEvent event;
    init_f flow;
    sfClock *clock;
    sfTime time;
    float second;
    sfMusic *music;
    sfMusic *end_music;
    int end_game;
    sfSound *jump;
    sfSoundBuffer *buffer;
    int score2;
}str_all;

str_all *init_struct(void);

init_scr *i_score(str_all *strc);

#endif

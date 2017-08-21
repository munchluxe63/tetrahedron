#include <SDL2/SDL.h>
extern void game_init();
extern void game_done();
extern void game_do();
extern SDL_Texture *block_gettex(int);
extern SDL_Rect *block_getrect(int);
extern unsigned int block_getcolour(int,int);
extern int game_getnumblocks();
extern GAME_STATE game_state;
extern int gameblock_mask[];
extern void spawnblock();
extern void game_moveblock(int,int,int);
extern void block_getxy(int,float*,float*);
extern void game_updateblockposition();
extern void block_swapcolours(int,int,int);
extern void block_delete(int);
extern void releaseblock();
extern int score;

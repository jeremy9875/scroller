/*
** scene1.c for scroller in /home/arthur/delivery/scroller/src/scene/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Sat Apr  1 17:21:11 2017 Arthur Philippe
** Last update Sun Apr  2 10:53:59 2017 Arthur Philippe
*/

#include "scroller.h"

void		launch_1(sfRenderWindow *w)
{
  t_sprt_list	sprites[5];
  sfTexture	*tex;

  tex = sfTexture_createFromFile("title.png", NULL);
  if (!tex)
    return ;
  sprites[0].bck = sfBlack;
  sprites[0].s = sfSprite_create();
  sfSprite_setTexture(sprites[0].s, tex, sfTrue);
  sprites[0].line_dir.start = (sfVector2i) {10, 10};
  sprites[0].line_dir.end = (sfVector2i) {700, 10};
  sprites[0].line_dir.coef_fat = 2;
  sprites[0].rot = 0;
  sprites[0].time_limit = 1000;
  sprites[1].s = sfSprite_create();
  sfSprite_setTexture(sprites[1].s, tex, sfTrue);
  sprites[1].line_dir.start = (sfVector2i) {1300, 300};
  sprites[1].line_dir.end = (sfVector2i) {10, 300};
  sprites[1].line_dir.coef_fat = 3;
  sprites[1].rot = 12;
  sprites[2].s = NULL;
  scene_manager(sprites, w);
}

void		set_2(t_sprt_list *sprites)
{
  sfTexture	*tex;

  tex = sfTexture_createFromFile(".data/picture/montagnes.png", NULL);
  if (!tex)
    return ;
  sprites[3].s = sfSprite_create();
  sfSprite_setTexture(sprites[3].s, tex, sfTrue);
  sprites[3].line_dir.start = (sfVector2i) {0, 405};
  sprites[3].line_dir.end = (sfVector2i) {300, 405};
  sprites[3].rot = 0;
  sprites[3].line_dir.coef_fat = 1;
  sprites[4].s = NULL;
  sprites[4].s = sfSprite_create();
  sfSprite_setTexture(sprites[4].s, tex, sfTrue);
  sprites[4].line_dir.start = (sfVector2i) {-600, 405};
  sprites[4].line_dir.end = (sfVector2i) {-300, 405};
  sprites[4].rot = 0;
  sprites[4].line_dir.coef_fat = 1;
  sprites[5].s = NULL;
}

void		launch_2(sfRenderWindow *w)
{
  t_sprt_list	sprites[10];
  sfTexture	*tex;

  tex = sfTexture_createFromFile(".data/picture/herbe2.png", NULL);
  if (!tex)
    return ;
  sprites[0].bck = sfCyan;
  sprites[0].s = sfSprite_create();
  sfSprite_setTexture(sprites[0].s, tex, sfTrue);
  sprites[0].line_dir.start = (sfVector2i) {100, 695};
  sprites[0].line_dir.end = (sfVector2i) {1300, 695};
  sprites[0].line_dir.coef_fat = 1;
  sprites[0].rot = 0;
  sprites[0].time_limit = 3000;
  sprites[1].s = sfSprite_create();
  sfSprite_setTexture(sprites[1].s, tex, sfTrue);
  sprites[1].line_dir.start = (sfVector2i) {-1100, 695};
  sprites[1].line_dir.end = (sfVector2i) {100, 695};
  sprites[1].rot = 0;
  sprites[1].line_dir.coef_fat = 1;
  sprites[2].s = sfSprite_create();
  sfSprite_setTexture(sprites[2].s, tex, sfTrue);
  sprites[2].line_dir.start = (sfVector2i) {-2600, 695};
  sprites[2].rot = 0;
  sprites[2].line_dir.end = (sfVector2i) {-1100, 695};
  sprites[2].line_dir.coef_fat = 1;
  set_2(sprites);
  scene_manager(sprites, w);
}

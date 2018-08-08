/*
** scene_manager.c for scroller in /home/arthur/delivery/scroller/src/scene/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Sat Apr  1 14:53:48 2017 Arthur Philippe
** Last update Sun Apr  2 10:52:25 2017 Arthur Philippe
*/

#include "scroller.h"
#include <unistd.h>

void		position_sprite(t_sprt_list sprite, int time_wraper)
{
  sfVector2f	pos;

  pos = get_point_conduct(sprite.line_dir.start,
			  sprite.line_dir.end,
			  sprite.line_dir.coef_fat * time_wraper);
  sfSprite_setPosition(sprite.s, pos);
  if (sprite.rot)
    sfSprite_setRotation(sprite.s, sprite.rot);
}

void		refresh_window(t_sprt_list *sprites, sfRenderWindow *w)
{
  int		i;

  i = 0;
  sfRenderWindow_clear(w, sprites[0].bck);
  while (sprites[i].s)
    {
      sfRenderWindow_drawSprite(w, sprites[i].s, NULL);
      i += 1;
    }
  sfRenderWindow_display(w);
}

void		scene_manager(t_sprt_list *sprites, sfRenderWindow *w)
{
  int		i;
  int		time_wraper;

  i = 0;
  time_wraper = 0;
  while (time_wraper < sprites[0].time_limit
	 && window_loop(w))
    {
      while (sprites[i].s)
	{
	  position_sprite(sprites[i], time_wraper);
	  i += 1;
	}
      if (!sfRenderWindow_isOpen(w))
	  return ;
      refresh_window(sprites, w);
      usleep(10000);
      time_wraper += 1;
      i = 0;
    }
}

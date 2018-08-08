/*
** openwindow.c for scroller in /home/arthur/delivery/scroller/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Sat Apr  1 09:27:14 2017 Arthur Philippe
** Last update Sat Apr  1 17:46:00 2017 jeremy elkaim
*/

#include "scroller.h"
#include <SFML/Graphics.h>

sfRenderWindow		*create_window(char *name, int width, int height)
{
  sfRenderWindow	*window;
  sfVideoMode		mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
  return (window);
}

int		open_window(t_env *env, char *window_name)
{
  if (!env)
    return (1);
  env->sc_size.x = SC_W;
  env->sc_size.y = SC_H;
  env->w = create_window(window_name, SC_W, SC_H);
  if (!env->w)
    return (1);
  sfRenderWindow_clear(env->w, sfBlack);
  sfRenderWindow_display(env->w);
  return (0);
}

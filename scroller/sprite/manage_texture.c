/*
** manage_texture.c for manage_texture in /home/VSridhar78/rush_scroller1/src
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Sun Apr  2 10:58:16 2017 Sridhar Vengadesan
** Last update Sun Apr  2 10:59:34 2017 Sridhar Vengadesan
*/

#include "my.h"

t_calc		destroy_sprite(t_calc s)
{
  free(s.texture);
  sfSprite_destroy(s.sprite);
  sfSprite_destroy(s.sprite2);
  sfSprite_destroy(s.sprite3);
  sfSprite_destroy(s.sprite4);
  s.sprite = sfSprite_create();
  s.sprite2 = sfSprite_create();
  s.sprite3 = sfSprite_create();
  s.sprite4 = sfSprite_create();
  return (s);
}

t_calc		set_texture(t_calc s)
{
  sfSprite_setTexture(s.sprite, s.texture, sfTrue);
  sfSprite_setPosition(s.sprite, s.position);
  sfSprite_setTexture(s.sprite2, s.sol, sfTrue);
  sfSprite_setPosition(s.sprite2, s.position2);
  sfSprite_setTexture(s.sprite3, s.montagnes, sfTrue);
  sfSprite_setPosition(s.sprite3, s.position3);
  sfSprite_setTexture(s.sprite4, s.nuages, sfTrue);
  sfSprite_setPosition(s.sprite4, s.position4);
  return (s);
}

t_calc		draw_sprite(t_calc s)
{
  sfRenderWindow_drawSprite(s.window, s.sprite4, NULL);
  sfRenderWindow_drawSprite(s.window, s.sprite2, NULL);
  sfRenderWindow_drawSprite(s.window, s.sprite3, NULL);
  sfRenderWindow_drawSprite(s.window, s.sprite, NULL);
  return (s);
}

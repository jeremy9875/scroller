/*
** main.c for scroller in /home/arthur/delivery/scroller/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Sat Apr  1 10:01:52 2017 Arthur Philippe
** Last update Sun Apr  2 10:56:16 2017 Arthur Philippe
*/

#include <stdio.h>
#include <unistd.h>
#include "scroller.h"

int	main(void)
{
  t_env	env;
  char	**musics;

  musics = get_music_files("music_conf");
  open_window(&env, W_NAME);
  play_next_track(musics);
  launch_1(env.w);
  play_next_track(musics);
  launch_2(env.w);
  while (window_loop(env.w) && sfRenderWindow_isOpen(env.w));
  play_next_track(musics);
  chdir("./sprite");
  execlp("./rush_scroller", "scroller", NULL);
  return (0);
}

/*
** track_manager.c for scroller in /home/arthur/delivery/scroller/src/music/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Sat Apr  1 13:33:39 2017 Arthur Philippe
** Last update Sat Apr  1 14:44:30 2017 Arthur Philippe
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "scroller.h"

void			play_next_track(char **tracks)
{
  static int		i = 0;
  static sfMusic	*music = NULL;

  if (i && music)
    sfMusic_destroy(music);
  if (tracks[i] == NULL)
    return ;
  if (!(music = sfMusic_createFromFile(tracks[i])))
    dprintf(2, "track_manager: failled to open %s\n", tracks[i]);
  else
    sfMusic_play(music);
  i += 1;
}

char	**get_music_files(char *conf_file)
{
  int	fd;
  int	i;
  char	**musics;
  char	*tmp;

   i = 0;
  if ((fd = open(conf_file, O_RDONLY)) == -1)
    {
      dprintf(2, "music tracker: %s no sush file or directory\n", conf_file);
      return (NULL);
    }
  if (!(musics = malloc(sizeof(char *) * NB_MUSIC_LIMIT)))
    return (NULL);
  tmp = get_next_line(fd);
  musics[i] = tmp;
  i += 1;
  while (i < NB_MUSIC_LIMIT && tmp != NULL)
    {
      tmp = get_next_line(fd);
      musics[i++] = tmp;
    }
  return (musics);
}

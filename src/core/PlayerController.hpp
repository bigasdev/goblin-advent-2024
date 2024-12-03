#pragma once 

#ifndef PLAYER_CONTROLLER_HPP
#define PLAYER_CONTROLLER_HPP

class PlayerController {
public:
  PlayerController();
  ~PlayerController();

  void init();
  void update(double dt);

  int x, y;
};

#endif

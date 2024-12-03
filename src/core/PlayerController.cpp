#include "PlayerController.hpp"
#include "global.hpp"
#include "InputManager.hpp"

PlayerController::PlayerController() {
}

PlayerController::~PlayerController() {
}

void PlayerController::init() {
}

void PlayerController::update(double dt) {
  x = g_input_manager->get_raw_axis().x;
  y = g_input_manager->get_raw_axis().y;
}

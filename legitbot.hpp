#pragma once
#include <vector>
#include <array>
#include <memory>

#include "globals.hpp"
#include "engine_prediction.hpp"
#include "animations.hpp"
#include "lagcomp.hpp"
#include "movement.hpp"
#include "game_movement.hpp"
#include "entlistener.hpp"
#include "exploits.hpp"
#include "event_logs.hpp"
#include "chams.hpp"
#include "anti_aim.hpp"
#include "penetration.hpp"
#include "ragebot.hpp"

class c_legit_bot
{
private:
	std::vector< int > get_hitboxes();
	int get_fov();
	bool is_target_in_fov(const vec2_t& center, const vec2_t& screen);
	int get_min_damage(c_cs_player* player);
	bool is_visible(c_cs_player* player, const vec3_t& pos);
	void do_aimbot();

public:
	void on_predict_start();
	void on_directx();
};
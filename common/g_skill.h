// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id: 
//
// Copyright (C) 1993-1996 by id Software, Inc.
// Copyright (C) 2006-2020 by The Odamex Team.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//   Skill data for defining new skills.
// 
//-----------------------------------------------------------------------------

#ifndef __G_SKILL__
#define __G_SKILL__


#define MAX_SKILLS 8

struct SkillInfo
{
	std::string name;

	float ammo_factor;
	float double_ammo_factor;
	float drop_ammo_factor;		// not implemented
	float damage_factor;		// not implemented
	float armor_factor;			// not implemented
	float health_factor;		// not implemented
	float kickback_factor;		// not implemented

	bool fast_monsters;			// not implemented
	bool slow_monsters;			// not implemented
	bool disable_cheats;		// not implemented
	bool auto_use_health;		// not implemented

	bool easy_boss_brain;		// not implemented
	bool easy_key;				// not implemented
	bool no_menu;				// not implemented
	int respawn_counter;		// not implemented
	int respawn_limit;			// not implemented
	float aggressiveness;		// not implemented
	int spawn_filter;			// not implemented
	bool spawn_multi;			// not implemented
	bool instant_reaction;		// not implemented
	int ACS_return;				// not implemented
	std::string menu_name;		// not implemented
	std::string pic_name;		// not implemented
	//SkillMenuNames menu_names_for_player_class;	// not implemented
	bool must_confirm;					// not implemented
	std::string must_confirm_text;      // not implemented
	char shortcut;						// not implemented
	std::string text_color;             // not implemented
	//SkillActorReplacement replace;	// not implemented
	//SkillActorReplacement replaced;	// not implemented
	float monster_health;	// not implemented
	float friendly_health;	// not implemented
	bool no_pain;			// not implemented
	int infighting;			// not implemented
	bool player_respawn;	// not implemented

	SkillInfo()
		: ammo_factor(1.f)
		, double_ammo_factor(2.f)
		, drop_ammo_factor(-1.f)
		, damage_factor(1.f)
		, armor_factor(1.f)
		, health_factor(1.f)
		, kickback_factor(1.f)

		, fast_monsters(false)
		, slow_monsters(false)
		, disable_cheats(false)
		, auto_use_health(false)

		, easy_boss_brain(false)
		, easy_key(false)
		, respawn_counter(0)
		, respawn_limit(0)
		, aggressiveness(1.f)
		, spawn_filter(0)
		, spawn_multi(false)
		, instant_reaction(false)
		, ACS_return(0)
		, menu_name()
		, pic_name()
		//, menu_names_for_player_class(???)
		, must_confirm(false)
		, must_confirm_text("Are you sure?")
		, shortcut(0)
		, text_color("")
		//, replace(???)
		//, replaced(???)
		, monster_health(1.)
		, friendly_health(1.)
		, no_pain(false)
		, infighting(0)
		, player_respawn(false)
	{}
};

extern SkillInfo SkillInfos[MAX_SKILLS];
extern byte skillnum;
extern byte defaultskillmenu;

#endif

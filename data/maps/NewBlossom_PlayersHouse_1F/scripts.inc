NewBlossom_PlayersHouse_1F_MapScripts::
# 2 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewBlossom_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NewBlossom_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PLAYER_HOUSE_1F, 0, MomGivesPlayerRunningShoes
	.2byte 0


Mom::
	return


MomGivesPlayerRunningShoes::
# 11 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	lock
# 12 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 13 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	applymovement 1, Mom_Surprised
# 14 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	waitmovement
# 15 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	applymovement 1, Mom_MeetPlayer
# 16 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	waitmovement
# 17 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	msgbox MomGivesPlayerRunningShoes_Text_0
# 18 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	waitmessage
# 19 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 20 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_BICYCLE
# 21 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	waitmessage
# 22 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	msgbox MomGivesPlayerRunningShoes_Text_1
# 23 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	waitmessage
# 24 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	applymovement 1, Mom_LeavePlayer
# 25 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	waitmovement
# 26 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	release
# 27 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PLAYER_HOUSE_1F, 1
	return


# 30 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
Mom_Surprised:
# 31 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 34 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
Mom_MeetPlayer:
# 35 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	walk_fast_up
# 35 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	walk_fast_up
# 36 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	walk_fast_right
	step_end

# 39 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
Mom_LeavePlayer:
# 40 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	walk_fast_left
# 41 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	walk_fast_down
# 41 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	walk_fast_down
# 42 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	face_left
	step_end

MomGivesPlayerRunningShoes_Text_0:
# 17 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER}, you're awake!\l"
	.string "You should hurry to Professor Oak's\n"
	.string "lab.\p"
	.string "You were supposed to go there\n"
	.string "yesterday to collect your first\l"
	.string "pokémon!\p"
	.string "I can't believe you ended up playing\n"
	.string "those silly videogames all afternoon\l"
	.string "instead.\l"
	.string "Well it can't be helped.\p"
	.string "Here you'll need this if you want to\n"
	.string "get there quickly.\p"
	.string "Hopefully there are still some\n"
	.string "pokémon left.$"

MomGivesPlayerRunningShoes_Text_1:
# 22 "data/maps/NewBlossom_PlayersHouse_1F/scripts.pory"
	.string "Now get going!\p"
	.string "I can't wait to see which pokémon you\n"
	.string "end up with!\p"
	.string "Good luck sweetie!$"

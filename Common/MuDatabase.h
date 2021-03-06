/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MUDATABASE_H
#define _MUDATABASE_H

enum MuDatabaseStatements
{
	QUERY_MUDATABASE_ACCOUNT_DATA_CREATE,
	QUERY_MUDATABASE_ACCOUNT_DATA_UPDATE,
	QUERY_MUDATABASE_ACCOUNT_DATA_CHARACTER_UPDATE,
	QUERY_MUDATABASE_ACCOUNT_DATA_CHARACTER_SELECT,
	
	ACCOUNT_WAREHOUSE_DATA_SELECT,
	ACCOUNT_WAREHOUSE_DATA_REPLACE,

	QUERY_MUDATABASE_CHARACTER_SELECT_GUID_BY_NAME,
	QUERY_MUDATABASE_CHARACTER_CREATE,

	QUERY_MUDATABASE_ACCOUNT_DELETE_BUFF,
	QUERY_MUDATABASE_ACCOUNT_SELECT_BUFF,
	QUERY_MUDATABASE_ACCOUNT_INSERT_BUFF,

	CHARACTER_SELECT_QUERY,

	CHARACTER_DELETE_INFO,
	CHARACTER_DELETE_SKILL,
	CHARACTER_DELETE_QUEST_EVOLUTION,
	CHARACTER_DELETE_MAIL,
	CHARACTER_DELETE_INVENTORY,
	CHARACTER_DELETE_GENS,
	CHARACTER_DELETE_GENS_KILL,
	CHARACTER_DELETE_GAMEOPTION,
	CHARACTER_DELETE_FRIEND,
	CHARACTER_DELETE_HELPER,
	CHARACTER_DELETE_RESTRICTION,
	CHARACTER_DELETE_STATISTICS,
	CHARACTER_DELETE_BUFF,
	CHARACTER_DELETE_ITEM_DELAY,
	CHARACTER_DELETE_CHAT_BLOCK,

	CHARACTER_SELECT_INFO,
	CHARACTER_SELECT_SKILL,
	CHARACTER_SELECT_GAME_OPTION,
	CHARACTER_SELECT_QUEST_EVOLUTION,
	CHARACTER_SELECT_FRIEND,
	CHARACTER_SELECT_MAIL,
	CHARACTER_SELECT_GUILD,
	CHARACTER_SELECT_GEN,
	CHARACTER_SELECT_GEN_KILL,
	CHARACTER_SELECT_HELPER,
	CHARACTER_SELECT_BUFF,
	CHARACTER_SELECT_RESTRICTION,
	CHARACTER_SELECT_STATISTICS,
	CHARACTER_SELECT_ITEM_DELAY,
	CHARACTER_SELECT_CHAT_BLOCK,

	CHARACTER_UPDATE_INFO,

	CHARACTER_INSERT_SKILL,
	CHARACTER_INSERT_GAME_OPTION,
	CHARACTER_INSERT_QUEST_EVOLUTION,
	CHARACTER_INSERT_FRIEND,
	CHARACTER_INSERT_MAIL,
	CHARACTER_INSERT_GUILD,
	CHARACTER_INSERT_GEN,
	CHARACTER_INSERT_GEN_KILL,
	CHARACTER_INSERT_HELPER,
	CHARACTER_INSERT_BUFF,
	CHARACTER_INSERT_RESTRICTION,
	QUERY_CHARACTER_STATISTICS_REMOVE,
	QUERY_CHARACTER_STATISTICS_INSERT,
	CHARACTER_INSERT_ITEM_DELAY,
	CHARACTER_INSERT_CHAT_BLOCK,

	CHARACTER_MAIL_NEW_UPDATE,
	CHARACTER_MAIL_UPDATE,
	CHARACTER_MAIL_DELETE_SINGLE,

	CHARACTER_UPDATE_ONLINE,

	QUERY_PARTY_DELETE,
	QUERY_PARTY_INSERT,

	QUERY_PARTY_DELETE_MEMBER,
	QUERY_PARTY_INSERT_MEMBER,

	QUERY_GUILD_DELETE,
	QUERY_GUILD_INSERT,
	QUERY_GUILD_DELETE_MEMBER,
	QUERY_GUILD_INSERT_MEMBER,
	QUERY_GUILD_UPDATE_NOTICE,
	QUERY_GUILD_UPDATE_MEMBER_RANKING,
	QUERY_GUILD_DELETE_MEMBER_ID,
	QUERY_GUILD_UPDATE_ALLIANCE,
	QUERY_GUILD_UPDATE_HOSTIL,
	QUERY_GUILD_SELECT_REGISTERED,
	QUERY_GUILD_UPDATE_SCORE,

	CHARACTER_FRIEND_ADD_REQUEST,
	CHARACTER_MAIL_ADD_REQUEST,

	QUERY_CASH_SHOP_COIN_REQUEST,
	QUERY_CASH_SHOP_COIN_CLEAR,
	QUERY_CASH_SHOP_COIN_ADD,
	
	QUERY_CASH_SHOP_ITEM_DELETE,
	QUERY_CASH_SHOP_ITEM_INSERT,
	QUERY_CASH_SHOP_ITEM_REQUEST,
	QUERY_CASH_SHOP_ITEM_GIFT_REQUEST,
	QUERY_CASH_SHOP_ITEM_GIFT_REMOVE,
	QUERY_CASH_SHOP_ITEM_GIFT_INSERT,

	QUERY_CASH_SHOP_CHARACTER_GIFT,

	QUERY_ITEM_DATA_SELECT,
	QUERY_ITEM_DATA_DELETE,
	QUERY_ITEM_DATA_DELETE_BY_SERIAL,
	QUERY_ITEM_DATA_INSERT,

	QUERY_CHARACTER_EXIST,

	QUERY_MUDATABASE_ACCOUNT_AUTOLOGIN,
	QUERY_MUDATABASE_ACCOUNT_AUTOLOGIN_DISCONNECT,

	QUERY_MUDATABASE_CASTLE_SIEGE_LOAD_DATA,
	QUERY_MUDATABASE_CASTLE_SIEGE_CREATE_DATA,
	QUERY_MUDATABASE_CASTLE_SIEGE_LOAD_NPC,
	QUERY_MUDATABASE_CASTLE_SIEGE_CLEAR_NPC,
	QUERY_MUDATABASE_CASTLE_SIEGE_INSERT_NPC,
	QUERY_MUDATABASE_CASTLE_SIEGE_CLEAR_GUILD,
	QUERY_MUDATABASE_CASTLE_SIEGE_CLEAR_REGISTERED_GUILD,
	QUERY_MUDATABASE_CASTLE_SIEGE_UPDATE_DATA,
	QUERY_MUDATABASE_CASTLE_SIEGE_UPDATE_DATA_MONEY,
	QUERY_MUDATABASE_CASTLE_SIEGE_RESET_DATA_MONEY,
	QUERY_MUDATABASE_CASTLE_SIEGE_UPDATE_DATA_TAX,
	QUERY_MUDATABASE_CASTLE_SIEGE_UPDATE_DATA_DATE,

	QUERY_MUDATABASE_CASTLE_SIEGE_INSERT_GUILD,
	QUERY_MUDATABASE_CASTLE_SIEGE_INSERT_REGISTERED_GUILD,
	QUERY_MUDATABASE_CASTLE_SIEGE_DELETE_REGISTERED_GUILD,
	QUERY_MUDATABASE_CASTLE_SIEGE_UPDATE_REGISTERED_GUILD,
	QUERY_MUDATABASE_CASTLE_SIEGE_SELECT_REGISTERED_GUILD_ALL,
	QUERY_MUDATABASE_CASTLE_SIEGE_SELECT_REGISTERED_GUILD,
	QUERY_MUDATABASE_CASTLE_SIEGE_SELECT_REGISTERED_GUILD_ID,

	QUERY_MUDATABASE_CHARACTER_LIST_ACCOUNT_DATA,
	QUERY_MUDATABASE_CHARACTER_LIST_CHARACTER,
	QUERY_MUDATABASE_CHARACTER_LIST_CHARACTER_ITEM,

	QUERY_MUDATABASE_GUILD_SELECT,
	QUERY_MUDATABASE_GUILD_MEMBER_SELECT,

	QUERY_MUDATABASE_PENALIZATION_CHARACTER_SELECT,
	QUERY_MUDATABASE_PENALIZATION_CHARACTER_KICK,
	QUERY_MUDATABASE_PENALIZATION_CHARACTER_MUTE,
	QUERY_MUDATABASE_PENALIZATION_CHARACTER_RESTRICTION,
	QUERY_MUDATABASE_PENALIZATION_CHARACTER_BAN,

	QUERY_MUDATABASE_CHARACTER_SELECT_LOCATION,

	QUERY_MUDATABASE_CHARACTER_UPDATE_ON_SERVER_START,

		/* SERVER SIGNAL */
	QUERY_MUDATABASE_SIGNAL_SELECT,
	QUERY_MUDATABASE_SIGNAL_DELETE,

	QUERY_MUDATABASE_CRYWOLF_SELECT,
	QUERY_MUDATABASE_CRYWOLF_CREATE,
	QUERY_MUDATABASE_CRYWOLF_UPDATE,


	QUERY_MUDATABASE_PARTY_SELECT,
	QUERY_MUDATABASE_PARTY_MEMBER_SELECT,

	QUERY_MUDATABASE_CHARACTER_KICK_SELECT,
	QUERY_MUDATABASE_CHARACTER_KICK_DELETE,
	QUERY_MUDATABASE_CHARACTER_KICK_VERIFY,
	QUERY_MUDATABASE_CHARACTER_KICK_ADD,
	QUERY_MUDATABASE_CHARACTER_KICK_REMOVE,

	QUERY_MUDATABASE_ITEM_PENTAGRAM_DELETE,
	QUERY_MUDATABASE_ITEM_PENTAGRAM_INSERT,
	QUERY_MUDATABASE_ITEM_PENTAGRAM_SELECT,

	QUERY_MUDATABASE_GUILD_MATCHING_SELECT,
	QUERY_MUDATABASE_GUILD_MATCHING_INSERT,
	QUERY_MUDATABASE_GUILD_MATCHING_DELETE,

	QUERY_MUDATABASE_ARKA_WAR_SELECT,
	QUERY_MUDATABASE_ARKA_WAR_DELETE,
	QUERY_MUDATABASE_ARKA_WAR_INSERT,

	QUERY_MUDATABASE_SERIAL_CHECK_INSERT,
	QUERY_MUDATABASE_SCORE,
	QUERY_MUDATABASE_DELETE_SCORE,

	QUERY_MUDATABASE_EVENT_RANKING,
	QUERY_MUDATABASE_EVENT_RANKING_DELETE,

	QUERY_MUDATABASE_ITEM_RECOVERY_SELECT,
	QUERY_MUDATABASE_ITEM_RECOVERY_DELETE,
	QUERY_MUDATABASE_ITEM_RECOVERY_INSERT,

	QUERY_MUDATABASE_CHARACTER_HUNTING_RECORD_SELECT,
	QUERY_MUDATABASE_CHARACTER_HUNTING_RECORD_DELETE,
	QUERY_MUDATABASE_CHARACTER_HUNTING_RECORD_INSERT,

	QUERY_MUDATABASE_MONSTER_RESPAWN_SELECT,
	QUERY_MUDATABASE_MONSTER_RESPAWN_DELETE,
	QUERY_MUDATABASE_MONSTER_RESPAWN_INSERT,

	QUERY_MUDATABASE_CHARACTER_LABYRINTH_SELECT,
	QUERY_MUDATABASE_CHARACTER_LABYRINTH_DELETE,
	QUERY_MUDATABASE_CHARACTER_LABYRINTH_INSERT,

	QUERY_MUDATABASE_CHARACTER_LABYRINTH_ZONE_SELECT,
	QUERY_MUDATABASE_CHARACTER_LABYRINTH_ZONE_DELETE,
	QUERY_MUDATABASE_CHARACTER_LABYRINTH_ZONE_INSERT,

	QUERY_MUDATABASE_CHARACTER_LABYRINTH_LEVEL_SELECT,
	QUERY_MUDATABASE_CHARACTER_LABYRINTH_LEVEL_DELETE,
	QUERY_MUDATABASE_CHARACTER_LABYRINTH_LEVEL_INSERT,

	QUERY_MUDATABASE_EVENT_RANKING_LABYRINTH_INSERT,

	QUERY_MUDATABASE_CHARACTER_EVENT_COUNT_SELECT,
	QUERY_MUDATABASE_CHARACTER_EVENT_COUNT_DELETE,
	QUERY_MUDATABASE_CHARACTER_EVENT_COUNT_INSERT,

	QUERY_MUDATABASE_CHARACTER_MINI_BOMB_SELECT,
	QUERY_MUDATABASE_CHARACTER_MINI_BOMB_DELETE,
	QUERY_MUDATABASE_CHARACTER_MINI_BOMB_INSERT,

	QUERY_MUDATABASE_CHARACTER_MINI_BOMB_GRID_SELECT,
	QUERY_MUDATABASE_CHARACTER_MINI_BOMB_GRID_DELETE,
	QUERY_MUDATABASE_CHARACTER_MINI_BOMB_GRID_INSERT,

	QUERY_MUDATABASE_EVENT_RANKING_MINI_BOMB,

	QUERY_MUDATABASE_CHARACTER_MU_ROOMY_SELECT,
	QUERY_MUDATABASE_CHARACTER_MU_ROOMY_DELETE,
	QUERY_MUDATABASE_CHARACTER_MU_ROOMY_INSERT,

	QUERY_MUDATABASE_CHARACTER_MU_ROOMY_DECK_SELECT,
	QUERY_MUDATABASE_CHARACTER_MU_ROOMY_DECK_DELETE,
	QUERY_MUDATABASE_CHARACTER_MU_ROOMY_DECK_INSERT,

	QUERY_MUDATABASE_EVENT_RANKING_MU_ROOMY,

	QUERY_MUDATABASE_CHARACTER_WARP_FAVORITE_LIST_SELECT,
	QUERY_MUDATABASE_CHARACTER_WARP_FAVORITE_LIST_DELETE,
	QUERY_MUDATABASE_CHARACTER_WARP_FAVORITE_LIST_INSERT,

	QUERY_MUDATABASE_CHARACTER_QUEST_GUIDED_SELECT,
	QUERY_MUDATABASE_CHARACTER_QUEST_GUIDED_DELETE,
	QUERY_MUDATABASE_CHARACTER_QUEST_GUIDED_INSERT,

	QUERY_MUDATABASE_CHARACTER_JEWEL_BINGO_SELECT,
	QUERY_MUDATABASE_CHARACTER_JEWEL_BINGO_DELETE,
	QUERY_MUDATABASE_CHARACTER_JEWEL_BINGO_INSERT,

	QUERY_MUDATABASE_CHARACTER_JEWEL_BINGO_GRID_SELECT,
	QUERY_MUDATABASE_CHARACTER_JEWEL_BINGO_GRID_DELETE,
	QUERY_MUDATABASE_CHARACTER_JEWEL_BINGO_GRID_INSERT,

	QUERY_MUDATABASE_EVENT_RANKING_JEWEL_BINGO,

	QUERY_MUDATABASE_EVENT_RANKING_SCRAMBLE,
	QUERY_MUDATABASE_EVENT_RANKING_RACE,

	QUERY_MUDATABASE_GUILD_SCORE_UPDATE,
	QUERY_MUDATABASE_GUILD_SCORE_DELETE,

	QUERY_MUDATABASE_EVENT_RANKING_CASTLE_SIEGE,
	QUERY_MUDATABASE_EVENT_RANKING_ARKA_WAR,

	QUERY_MUDATABASE_CHARACTER_DELETE_INSERT,

	QUERY_MUDATABASE_CHARACTER_DATE_SELECT,
	QUERY_MUDATABASE_CHARACTER_DATE_DELETE,
	QUERY_MUDATABASE_CHARACTER_DATE_INSERT,

	QUERY_MUDATABASE_CHARACTER_MAJESTIC_TREE_SELECT,
	QUERY_MUDATABASE_CHARACTER_MAJESTIC_TREE_DELETE,
	QUERY_MUDATABASE_CHARACTER_MAJESTIC_TREE_INSERT,

	QUERY_MUDATABASE_CHARACTER_MAJESTIC_STATS_SELECT,
	QUERY_MUDATABASE_CHARACTER_MAJESTIC_STATS_DELETE,
	QUERY_MUDATABASE_CHARACTER_MAJESTIC_STATS_INSERT,

	QUERY_MUDATABASE_EVENT_CASTLE_SIEGE_KILL,
	QUERY_MUDATABASE_EVENT_ARKA_WAR_KILL,

	QUERY_MUDATABASE_EVENT_CASTLE_SIEGE_TIME,

	QUERY_MUDATABASE_CHARACTER_NUMERIC_BASEBALL_SELECT,
	QUERY_MUDATABASE_CHARACTER_NUMERIC_BASEBALL_DELETE,
	QUERY_MUDATABASE_CHARACTER_NUMERIC_BASEBALL_INSERT,

	QUERY_MUDATABASE_EVENT_RANKING_NUMERIC_BASEBALL,

	QUERY_MUDATABASE_EVENT_LABYRINTH_SCHEDULE_SELECT,
	QUERY_MUDATABASE_EVENT_LABYRINTH_SCHEDULE_UPDATE,

	QUERY_MUDATABASE_EVENT_LABYRINTH_LEAGUE_SELECT,
	QUERY_MUDATABASE_EVENT_LABYRINTH_LEAGUE_UPDATE,
	QUERY_MUDATABASE_EVENT_LABYRINTH_LEAGUE_CATEGORY_UPDATE,
	QUERY_MUDATABASE_EVENT_LABYRINTH_LEAGUE_DELETE,

	QUERY_MUDATABASE_DUNGEON_INSTANCE_SELECT,
	QUERY_MUDATABASE_DUNGEON_INSTANCE_UPDATE,
	QUERY_MUDATABASE_DUNGEON_INSTANCE_DELETE,

	QUERY_MUDATABASE_QUEST_MU_SELECT,
	QUERY_MUDATABASE_QUEST_MU_DELETE,
	QUERY_MUDATABASE_QUEST_MU_INSERT,

	QUERY_MUDATABASE_MONSTER_SOUL_SELECT,
	QUERY_MUDATABASE_MONSTER_SOUL_DELETE,
	QUERY_MUDATABASE_MONSTER_SOUL_INSERT,

	QUERY_BATTLE_CORE_CHAOS_CASTLE_SURVIVAL_RANKING_INSERT,
	QUERY_BATTLE_CORE_CHAOS_CASTLE_SURVIVAL_RANKING_SELECT,
	QUERY_BATTLE_CORE_CHAOS_CASTLE_SURVIVAL_RANKING_DELETE,
	QUERY_BATTLE_CORE_CHAOS_CASTLE_SURVIVAL_RANKING_REMOVE,

	QUERY_BATTLE_CORE_CHAOS_CASTLE_SURVIVAL_RANKING_INIT,
	QUERY_BATTLE_CORE_CHAOS_CASTLE_SURVIVAL_HALL_OF_FAME_INSERT,

	QUERY_BATTLE_CORE_TORMENTED_SQUARE_SURVIVAL_RANKING_DELETE,
	QUERY_BATTLE_CORE_TORMENTED_SQUARE_SURVIVAL_RANKING_INSERT,
	QUERY_BATTLE_CORE_TORMENTED_SQUARE_SURVIVAL_TEAM_SELECT,
	QUERY_BATTLE_CORE_TORMENTED_SQUARE_SURVIVAL_TEAM_INSERT,
	QUERY_BATTLE_CORE_TORMENTED_SQUARE_SURVIVAL_HALL_OF_FAME_INSERT,

	QUERY_BATTLE_CORE_EVENT_STAGE_SELECT,
	QUERY_BATTLE_CORE_EVENT_STAGE_UPDATE,

	MU_DATABASE_STATEMENT_MAX
};

class MuDatabaseConnection : public MySQLConnection
{
    public:
		typedef MuDatabaseStatements Statements;

        //- Constructors for sync and async connections
        MuDatabaseConnection(MySQLConnectionInfo& connInfo) : MySQLConnection(connInfo) { }
        MuDatabaseConnection(ProducerConsumerQueue<SQLOperation*>* q, MySQLConnectionInfo& connInfo) : MySQLConnection(q, connInfo) { }

        //- Loads database type specific prepared statements
        void DoPrepareStatements() override;
};

typedef DatabaseWorkerPool<MuDatabaseConnection> MuDatabaseWorkerPool;

#endif
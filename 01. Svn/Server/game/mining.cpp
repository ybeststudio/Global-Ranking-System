// Dosyanin uygun bir yerine ekle:
#ifdef ENABLE_GLOBAL_RANKING
#include "global_ranking.h"
#endif


// Ara:
			GuildQuest_AddProgress(ch, GUILD_QUEST_FISH);

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
			GlobalRanking_Add(ch, GLOBAL_RANK_MINING);
#endif


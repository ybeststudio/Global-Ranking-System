// Dosyanin uygun bir yerine ekle:
#ifdef ENABLE_GLOBAL_RANKING
#include "global_ranking.h"
#include "damage_trace.h"
#endif


// void CHARACTER::Dead(LPCHARACTER pkKiller, bool bImmediateDead) icinde:
// Ara:
			CGuildManager::instance().Kill(pkKiller, this);
		}
	}

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
	GlobalRanking_OnDead(this, pkKiller);
#endif


// bool CHARACTER::Damage(LPCHARACTER pAttacker, int dam, EDamageType type) icinde:
// Ara:
			PointChange(POINT_HP, -dam, false);

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
		GlobalRanking_OnHit(pAttacker, this, dam);
#endif


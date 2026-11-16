// Ara:
ACMD(do_mokoko_rewards);
ACMD(do_mokoko_claim);
ACMD(do_mokoko_reload);

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
ACMD(do_global_rank);
#endif


// Ara:
	{ "mokoko_rewards", do_mokoko_rewards, 0, POS_DEAD, GM_PLAYER },
	{ "mokoko_claim", do_mokoko_claim, 0, POS_DEAD, GM_PLAYER },
	{ "mokoko_reload", do_mokoko_reload, 0, POS_DEAD, GM_IMPLEMENTOR },

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
	{ "global_rank", do_global_rank, 0, POS_DEAD, GM_PLAYER },
#endif


// void initapp() icinde:
// Ara:
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SHOP", 0);

// Altina ekle:
#ifdef ENABLE_GLOBAL_RANKING
	PyModule_AddIntConstant(poModule, "ENABLE_GLOBAL_RANKING", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_GLOBAL_RANKING", 0);
#endif


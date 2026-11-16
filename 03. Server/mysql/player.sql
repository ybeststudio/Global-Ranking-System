CREATE TABLE IF NOT EXISTS `global_ranking` (
  `pid` int(10) unsigned NOT NULL,
  `category` tinyint(3) unsigned NOT NULL,
  `week` int(11) NOT NULL DEFAULT 0,
  `value` bigint(20) NOT NULL DEFAULT 0,
  PRIMARY KEY (`pid`,`category`),
  KEY `idx_rank` (`category`,`week`,`value`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;


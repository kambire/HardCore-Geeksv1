                                                                                                                                                                                                                                                                       CREATE TABLE IF NOT EXISTS `character_hardcore` (
    `guid` INT UNSIGNED NOT NULL,
    `deaths` TINYINT UNSIGNED NOT NULL DEFAULT 0,
    `permanent_death` TINYINT UNSIGNED NOT NULL DEFAULT 0,
    PRIMARY KEY (`guid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

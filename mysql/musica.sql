
# Volcado de tabla artista
# ------------------------------------------------------------

DROP TABLE IF EXISTS `artista`;

CREATE TABLE `artista` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `nombres` varchar(225) DEFAULT NULL,
  `apellidos` varchar(225) DEFAULT NULL,
  `f_nacimiento` date DEFAULT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `nombres` (`nombres`),
  UNIQUE KEY `apellidos` (`apellidos`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

LOCK TABLES `artista` WRITE;
/*!40000 ALTER TABLE `artista` DISABLE KEYS */;

INSERT INTO `artista` (`id`, `nombres`, `apellidos`, `f_nacimiento`)
VALUES
	(1,'Don','Omar','2004-01-22'),
	(2,'Wising y',' Yandel','2005-12-12');

/*!40000 ALTER TABLE `artista` ENABLE KEYS */;
UNLOCK TABLES;


# Volcado de tabla cancion
# ------------------------------------------------------------

DROP TABLE IF EXISTS `cancion`;

CREATE TABLE `cancion` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `nombre` varchar(225) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;



# Volcado de tabla disquera
# ------------------------------------------------------------

DROP TABLE IF EXISTS `disquera`;

CREATE TABLE `disquera` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `nombre` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

LOCK TABLES `disquera` WRITE;
/*!40000 ALTER TABLE `disquera` DISABLE KEYS */;

INSERT INTO `disquera` (`id`, `nombre`)
VALUES
	(1,0);

/*!40000 ALTER TABLE `disquera` ENABLE KEYS */;
UNLOCK TABLES;


# Volcado de tabla genero
# ------------------------------------------------------------

DROP TABLE IF EXISTS `genero`;

CREATE TABLE `genero` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `nombre` varchar(225) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;



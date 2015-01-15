-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Client :  127.0.0.1
-- Généré le :  Jeu 15 Janvier 2015 à 16:35
-- Version du serveur :  5.6.17
-- Version de PHP :  5.5.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Base de données :  `db-webservice`
--

-- --------------------------------------------------------

--
-- Structure de la table `methods`
--

CREATE TABLE IF NOT EXISTS `methods` (
  `Name` varchar(250) NOT NULL,
  `Arguments` varchar(500) NOT NULL,
  `Description` varchar(1000) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Contenu de la table `methods`
--

INSERT INTO `methods` (`Name`, `Arguments`, `Description`) VALUES
('Get_Documentation', '[NULL]', 'Retourne la documentation '),
('Get_List_Users()', '[NULL]', 'Retourne la liste des logins utilisateurs'),
('GetRole()', 'login-varchar500', 'Retourne le role d''un utilisateur');

-- --------------------------------------------------------

--
-- Structure de la table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `Login` varchar(250) NOT NULL,
  `Password` varchar(250) NOT NULL,
  `Type` varchar(250) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Contenu de la table `user`
--

INSERT INTO `user` (`Login`, `Password`, `Type`) VALUES
('Fraisse', 'Olivier', 'Admin'),
('Daude', 'vincent', 'Viewer');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

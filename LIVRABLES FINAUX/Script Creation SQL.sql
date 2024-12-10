-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`Location`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Location` (
  `idLocation` INT NOT NULL,
  `Quantite` INT NULL,
  `Nom` VARCHAR(45) NULL,
  PRIMARY KEY (`idLocation`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Table`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Table` (
  `idTable` INT NOT NULL,
  `Capacite` INT NULL,
  `Numero_Carre` INT NULL,
  `Statut` VARCHAR(45) NULL,
  `Nbre_Chaises_Occupe` INT NULL,
  `Numero_Rang` INT NULL,
  `Etat` VARCHAR(45) NULL,
  PRIMARY KEY (`idTable`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Ingredients`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Ingredients` (
  `idIngredients` INT NOT NULL,
  `idLocation` INT NOT NULL,
  `Nom` VARCHAR(45) NULL,
  `Quantite` INT NULL,
  `Date_expiration` DATETIME NULL,
  PRIMARY KEY (`idIngredients`),
  CONSTRAINT `fk_location`
    FOREIGN KEY (`idLocation`)
    REFERENCES `mydb`.`Location` (`idLocation`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_location_idx` ON `mydb`.`Ingredients` (`idLocation` ASC) VISIBLE;


-- -----------------------------------------------------
-- Table `mydb`.`Menu`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Menu` (
  `idMenu` INT NOT NULL,
  `Entree` VARCHAR(45) NULL,
  `Principal` VARCHAR(45) NULL,
  `Dessert` VARCHAR(45) NULL,
  `Prix` DOUBLE NULL,
  `idIngredients` INT NULL,
  PRIMARY KEY (`idMenu`),
  CONSTRAINT `fk_ingredients`
    FOREIGN KEY (`idIngredients`)
    REFERENCES `mydb`.`Ingredients` (`idIngredients`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_ingredients_idx` ON `mydb`.`Menu` (`idIngredients` ASC) VISIBLE;


-- -----------------------------------------------------
-- Table `mydb`.`Plat`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Plat` (
  `idPlat` INT NOT NULL,
  `Nom` VARCHAR(45) NULL,
  `Type` VARCHAR(45) NULL,
  `Temps_preparation` DATETIME NULL,
  `idMenu` INT NOT NULL,
  PRIMARY KEY (`idPlat`),
  CONSTRAINT `fk_menu`
    FOREIGN KEY (`idMenu`)
    REFERENCES `mydb`.`Menu` (`idMenu`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_menu_idx` ON `mydb`.`Plat` (`idMenu` ASC) VISIBLE;


-- -----------------------------------------------------
-- Table `mydb`.`Commande`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Commande` (
  `idCommande` INT NOT NULL,
  `idPlat` INT NOT NULL,
  `Nbre_Plats` INT NULL,
  `idTable` INT NOT NULL,
  `Prix_Total` INT NULL,
  PRIMARY KEY (`idCommande`),
  CONSTRAINT `fk_table`
    FOREIGN KEY (`idTable`)
    REFERENCES `mydb`.`Table` (`idTable`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_plat`
    FOREIGN KEY (`idPlat`)
    REFERENCES `mydb`.`Plat` (`idPlat`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_table_idx` ON `mydb`.`Commande` (`idTable` ASC) VISIBLE;

CREATE INDEX `fk_plat_idx` ON `mydb`.`Commande` (`idPlat` ASC) VISIBLE;


-- -----------------------------------------------------
-- Table `mydb`.`Employe`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Employe` (
  `idEmploye` INT NOT NULL,
  `Poste` VARCHAR(45) NULL,
  `Nom` VARCHAR(45) NULL,
  `Prenom` VARCHAR(45) NULL,
  `Heure_arrivee` DATETIME NULL,
  `idCommande` INT NOT NULL,
  PRIMARY KEY (`idEmploye`),
  CONSTRAINT `fk_commande`
    FOREIGN KEY (`idCommande`)
    REFERENCES `mydb`.`Commande` (`idCommande`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_commande_idx` ON `mydb`.`Employe` (`idCommande` ASC) VISIBLE;


-- -----------------------------------------------------
-- Table `mydb`.`Client`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Client` (
  `idClient` INT NOT NULL,
  `idTable` INT NOT NULL,
  `Heure_d_arrivee` DATETIME NULL,
  `Caractere` VARCHAR(15) NULL,
  `Nom` VARCHAR(15) NULL,
  `Prenom` VARCHAR(15) NULL,
  PRIMARY KEY (`idClient`),
  CONSTRAINT `fk_table`
    FOREIGN KEY (`idTable`)
    REFERENCES `mydb`.`Table` (`idTable`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_table_idx` ON `mydb`.`Client` (`idTable` ASC) VISIBLE;


-- -----------------------------------------------------
-- Table `mydb`.`Materiel_commun`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Materiel_commun` (
  `idMateriel_commun` INT NOT NULL,
  `Type_materiel` VARCHAR(45) NULL,
  `Nom` VARCHAR(45) NULL,
  `Quantite` INT NULL,
  `idLocation` INT NOT NULL,
  PRIMARY KEY (`idMateriel_commun`),
  CONSTRAINT `fk_location`
    FOREIGN KEY (`idLocation`)
    REFERENCES `mydb`.`Location` (`idLocation`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_location_idx` ON `mydb`.`Materiel_commun` (`idLocation` ASC) VISIBLE;


-- -----------------------------------------------------
-- Table `mydb`.`Materiel_cuisine`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Materiel_cuisine` (
  `idMateriel_cuisine` INT NOT NULL,
  `Nom` VARCHAR(45) NULL,
  `Quantite` INT NULL,
  `Temps_lavage` DATETIME NULL,
  `Temps_remise_service` DATETIME NULL,
  `idLocation` INT NOT NULL,
  PRIMARY KEY (`idMateriel_cuisine`),
  CONSTRAINT `fk_location`
    FOREIGN KEY (`idLocation`)
    REFERENCES `mydb`.`Location` (`idLocation`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_location_idx` ON `mydb`.`Materiel_cuisine` (`idLocation` ASC) VISIBLE;


-- -----------------------------------------------------
-- Table `mydb`.`Reservation`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Reservation` (
  `idReservation` INT NOT NULL,
  `idClient` INT NOT NULL,
  `idTable` INT NOT NULL,
  `Date_reservation` DATE NULL,
  `Heure_reservation` DATETIME NULL,
  `Nb_Personnes` INT NULL,
  PRIMARY KEY (`idReservation`),
  CONSTRAINT `fk_Client`
    FOREIGN KEY (`idClient`)
    REFERENCES `mydb`.`Client` (`idClient`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Table`
    FOREIGN KEY (`idTable`)
    REFERENCES `mydb`.`Table` (`idTable`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `idClient_idx` ON `mydb`.`Reservation` (`idClient` ASC) VISIBLE;

CREATE INDEX `fk_Table_idx` ON `mydb`.`Reservation` (`idTable` ASC) VISIBLE;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;

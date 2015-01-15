
<?php

// Reccuperation des methodes
include "library.inc";

//===============================
//==> Aalyse des données recues

if (!empty($_GET["function"])){
	$function=$_GET["function"];

	if($function=="Get_Documentation()"){
		Get_Documentation();
	}
	if($function=="Get_List_Users()"){
		Get_List_Users();
	}
	if($function=="Get_Role()"){
		if (!empty($_GET["login"])){
			$login=$_GET["login"];
			GetRole($login);
		}else{
			echo "<b>ERROR :</b> Saisir un login en parametre.";
		}
	}
}

if ((empty($_GET["type"]))&&(empty($_GET["login"]))&&(empty($_GET["pwd"]))&&(empty($_GET["function"]))){
	//pas d'attributs, on affiche la documentation
	Get_Documentation();
}else{
	//attributs envoyés par le client
	if(!empty($_GET["type"])){
		$type = $_GET["type"];
	}
	if(!empty($_GET["login"])){
		$log = $_GET["login"];
	}
	if(!empty($_GET["pwd"])){
		$pwd = $_GET["pwd"];
	}


	//=============================================================================================
}

?>

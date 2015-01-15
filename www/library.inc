<?php
function Get_Documentation(){
	$methods = array();
	//$format = strtolower($_GET['format']) == 'json' ? 'json' : 'xml'; //xml is the default
	$format = 'json';
	$mysqli = new mysqli("localhost", "Ladmin", "admin", "db-webservice");
	if ($mysqli->connect_errno) {
	    echo "Echec lors de la connexion à MySQL : (" . $mysqli->connect_errno . ") " . $mysqli->connect_error;
	}else{
		// Run the query  WHERE First_name = '$specFirstName'
		$result= mysqli_query($mysqli,"SELECT * FROM Methods");
		// Output rows 
		while($row = mysqli_fetch_array($result)) {
		 	$methods[] = array('Name'=>$row["Name"],'Arguments'=>$row["Arguments"],'Description'=>$row["Description"]);
		}
		//=============================================================================================
		/* output in necessary format */
		if($format == 'json') {
			header('Content-type: application/json');
			echo json_encode(array('Methods'=>$methods));
		}
		else {
			$xml = new SimpleXMLElement('<xml/>');
			echo "<?xml version='1.0' encoding='ISO-8859-1' ?>";
			foreach($methods as $index => $Method) {
				if(is_array($Method)) {
					$track = $xml->addChild('method');
					foreach($Method as $key => $value) {
		    			$track->addChild('Method', $value);
		    		}
		    	}
		    }

			Header('Content-type: text/xml');
			print($xml->asXML());
		}
	}

/*	echo "<br>";
	echo "<hr>";
	echo "Documentation :";
	echo "<br>";
	echo "<hr>";
	echo "<br><b># Attributs : </b><br>";
	echo "<b>> Login :</b> varchar 250<br>";
	echo "<b>> Password :</b> varchar 250<br>";
	echo "<b>> Type :</b> varchar 250<br>";
	echo "<br><b># Methodes : </b><br>";
	echo "> <b>get_List_Users()</b> ; Methode : [GET] ; <i>Liste tous les logins des utilisateurs</i>";
	echo "<hr>";*/
}
//=====================================================================================================================
function Get_List_Users(){
	$logins = array();
	//$format = strtolower($_GET['format']) == 'json' ? 'json' : 'xml'; //xml is the default
	$format = 'json';
	$mysqli = new mysqli("localhost", "Ladmin", "admin", "db-webservice");
	if ($mysqli->connect_errno) {
	    echo "Echec lors de la connexion à MySQL : (" . $mysqli->connect_errno . ") " . $mysqli->connect_error;
	}else{
		// Run the query  WHERE First_name = '$specFirstName'
		$result= mysqli_query($mysqli,"SELECT * FROM user");
		// Output rows 
		while($row = mysqli_fetch_array($result)) {
		 	$logins[] = array('login'=>$row["Login"]);
		}
		//==========================²===================================================================
		/* output in necessary format */
		if($format == 'json') {
			header('Content-type: application/json');
			echo json_encode(array('logins'=>$logins));
		}
		else {
			$xml = new SimpleXMLElement('<xml/>');
			echo "<?xml version='1.0' encoding='ISO-8859-1' ?>";
			foreach($logins as $index => $login) {
				if(is_array($login)) {
					$track = $xml->addChild('User');
					foreach($login as $key => $value) {
		    			$track->addChild('Login', $value);
		    		}
		    	}
		    }
			Header('Content-type: text/xml');
			print($xml->asXML());
		}
	}
}
//=====================================================================================================================
function GetRole($Login){
	$roles = array();
	//$format = strtolower($_GET['format']) == 'json' ? 'json' : 'xml'; //xml is the default
	$format = 'json';
	$mysqli = new mysqli("localhost", "Ladmin", "admin", "db-webservice");
	if ($mysqli->connect_errno) {
	    echo "Echec lors de la connexion à MySQL : (" . $mysqli->connect_errno . ") " . $mysqli->connect_error;
	}else{
		// Run the query  WHERE First_name = '$specFirstName'
		$result= mysqli_query($mysqli,"SELECT * FROM user WHERE Login='".$Login."'");
		// Output rows 
		while($row = mysqli_fetch_array($result)) {
		 	$roles[] = array('role'=>$row["Type"]);
		}
		//==========================²===================================================================
		/* output in necessary format */
		if($format == 'json') {
			header('Content-type: application/json');
			echo json_encode(array('Roles'=>$roles));
		}
		else {
			$xml = new SimpleXMLElement('<xml/>');
			echo "<?xml version='1.0' encoding='ISO-8859-1' ?>";
			foreach($roles as $index => $login) {
				if(is_array($login)) {
					$track = $xml->addChild('UserRole');
					foreach($login as $key => $value) {
		    			$track->addChild('Role', $value);
		    		}
		    	}
		    }
			Header('Content-type: text/xml');
			print($xml->asXML());
		}
	}
}
//=====================================================================================================================

?>
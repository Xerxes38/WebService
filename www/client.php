<h1> WEB SERVICES </h1> 
<br>
<hr>
<h2> GET - Lecture </h2>
<form method="GET" action="traitement.inc.php">
   	<p>
   		Functions : 
   		<select name="function">
   			<option value="Get_Documentation()">Get_Documentation()</option>
			<option value="Get_List_Users()">Get_List_Users()</option>
			<option value="Get_User()">Get_User()</option>
			<option value="Get_Role()">Get_Role()</option>
		</select> <br>
   		Result type : 
   		<select name="type">
		  <option value="json">json</option>
		  <option value="xml">xml</option>
		</select> <br>
   		Pseudo : <input type="text" name="login" /> <br>
   		Password : <input type="text" name="pwd" /> <br>
   	</p>

	<input type="submit" value="Envoyer" />	
</form>
<hr>
<h2> POST - Ecriture </h2>
<form method="post" action="traitement.inc.php">
   	<p>
   		Functions : 
   		<select name="function">
   			<option value="Get_Documentation()">Set_User()</option>
		</select> <br>
   		Result type : 
   		<select name="type">
		  <option value="json">json</option>
		  <option value="xml">xml</option>
		</select> <br>
   		Pseudo : <input type="text" name="login" /> <br>
   		Password : <input type="text" name="pwd" /> <br>
   		Role : <input type="text" name="pwd" /> <br>
   	</p>

	<input type="submit" value="Envoyer" />	
</form>
<hr>



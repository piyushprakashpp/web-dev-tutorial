<%
if Request.Form("select")<>"" then
       Response.Redirect(Request.Form("select"))
end if
%>  

<html>
<body>

<form action="http://localhost:8080/default.aspx" method="post">

<input type="radio" name="select"
value="default.asp">
Server Example<br />

<input type="radio" name="select"
value="http://localhost:8080/employees.txts">
Text Example<br /><br />
<input type="submit" value="Go!">

</form>

</body>
</html>

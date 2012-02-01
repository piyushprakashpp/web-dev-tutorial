<%@ Page Language="C#" %>

<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8" />
        <title>File Open</title>
    </head>
    <body>
        
        <div>
            <form action="employee.aspx" method="post">
             Your name: <input type="text" name="fname" size="20">
             <input type="submit" value="Submit">
             <%dim fname
                fname=Request.Form("fname")
                If fname<>"" Then
                Response.Write("Hello " & fname & "!")
              End If%>
        </div>
        </form>
    </body>
</html>

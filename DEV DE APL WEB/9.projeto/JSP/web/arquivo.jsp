<%-- 
    Document   : arquivo
    Created on : 24/01/2017, 09:39:37
    Author     : root
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <%
            int n = Integer.parseInt(request.getParameter("n"));
            
            int fib_1=0, fib_2=1, f=0;	
            String fib_str;
            
            fib_str = 0 + "<br>";
            fib_str += 1;
            fib_str += "<br>";
	
            for(int i=0; i < n; i++){
		f = fib_1 + fib_2;
		fib_str += f;
		fib_str += "<br>";
		fib_1 = fib_2;
		fib_2 = f;
            }
	
            out.println(fib_str);
        %>
    </body>
</html>

<%-- 
    Document   : arquivo
    Created on : 24/01/2017, 09:39:37
    Author     : root
--%>

<%@page import="java.util.Random"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <jsp:useBean class="Pacote.Fibonacci"  id="calculo"></jsp:useBean>
        <%
            int n = Integer.parseInt(request.getParameter("n"));
            float a = (new Random()).nextFloat();
        %>    
        <%=calculo.fibonacci(n)%>
    </body>
</html>


package webservice;

import javax.xml.bind.JAXBElement;
import javax.xml.bind.annotation.XmlElementDecl;
import javax.xml.bind.annotation.XmlRegistry;
import javax.xml.namespace.QName;


/**
 * This object contains factory methods for each 
 * Java content interface and Java element interface 
 * generated in the webservice package. 
 * <p>An ObjectFactory allows you to programatically 
 * construct new instances of the Java representation 
 * for XML content. The Java representation of XML 
 * content can consist of schema derived interfaces 
 * and classes representing the binding of schema 
 * type definitions, element declarations and model 
 * groups.  Factory methods for each of these are 
 * provided in this class.
 * 
 */
@XmlRegistry
public class ObjectFactory {

    private final static QName _Fibonacci_QNAME = new QName("http://Calculo/", "Fibonacci");
    private final static QName _FibonacciResponse_QNAME = new QName("http://Calculo/", "FibonacciResponse");

    /**
     * Create a new ObjectFactory that can be used to create new instances of schema derived classes for package: webservice
     * 
     */
    public ObjectFactory() {
    }

    /**
     * Create an instance of {@link FibonacciResponse }
     * 
     */
    public FibonacciResponse createFibonacciResponse() {
        return new FibonacciResponse();
    }

    /**
     * Create an instance of {@link Fibonacci_Type }
     * 
     */
    public Fibonacci_Type createFibonacci_Type() {
        return new Fibonacci_Type();
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link Fibonacci_Type }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://Calculo/", name = "Fibonacci")
    public JAXBElement<Fibonacci_Type> createFibonacci(Fibonacci_Type value) {
        return new JAXBElement<Fibonacci_Type>(_Fibonacci_QNAME, Fibonacci_Type.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link FibonacciResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://Calculo/", name = "FibonacciResponse")
    public JAXBElement<FibonacciResponse> createFibonacciResponse(FibonacciResponse value) {
        return new JAXBElement<FibonacciResponse>(_FibonacciResponse_QNAME, FibonacciResponse.class, null, value);
    }

}

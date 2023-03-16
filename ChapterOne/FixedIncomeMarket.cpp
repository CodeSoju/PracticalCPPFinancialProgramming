/**
 * As software engineers, our main goal when working in the fixed income market is
 * to define computational strategies and solve problems so that our clients can be successful. 
 * 
 * C++ is great for financial systems due to its flexiblity and high performance on 
 * standard coputational platforms. As well as highly portable language. 
 * 
 * Financial Income Overview:
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 * In a fixed income investment, a contractually defined exchange occurs between two parties. 
 * Both parties agree to exchange cash flows that are assigned based on interest rates and the 
 * time of cash exchanges. Fixed income investments are very diverse, but they include the following well-known
 * types of investments vechicles:
 * 
 * - MONEY MARKET FUNDS : these are short-term investments that offer a small rate of return
 * but at the same time provide easy availability of funds at your own convenience. 
 * Money market funds have a very short-term horizon, and they only pay returns that are close
 * to the spot rate practiced by banks, Since money market funds have a small return that is hard
 * to predict over a long period, they are used mostly for their liquidity. 
 *  
 * - BONDS : This is a major category of fixed income applications. Bonds pay a predetermined
 * interest rate for a well-defined period of time. They are issued by a variety of institutions, 
 * including companies and all levels of government. The American government, for example, 
 * issues treasury bonds, which are one of the main investment vehicles used throughout the world. 
 * 
 * - CERTIFICATES OF DEPOSIT : These are fixed income investments issued by banks to their retial customers. 
 * They are simple investments that pay fixed interest rate for a pre-defined period, usually between
 * one and five years. They are used mainly for the convenience of small investors who lack
 * access to more sophisticated fixed income markets and want to invest rom their own checking
 * or savings account. 
 * 
 * The main reason for investors to enter the fixed income market is to take advantage of a 
 * relatively safe investment opportunity, where the returns are known and predictable. 
 * Compared to the stock market, fixed income investments have the advantage of being easier to 
 * analyze. With a fixed income investment such as a bond, however, you have a contract that
 * guarantees the return on the investment for a specified period of time. 
 * 
 * There are risks in such fixed income investments. A well-known risk is that of the default
 * of the institution issuing the bond, for exmaple. In that case, investors may lose a part of the, or the whole,
 * investment. The second risk, which is frequently overlooked by investors, is that the rate of return
 * will not be able to cope with inflation during the period of the investment. For example, if the 
 * rate of return is 6% a year but inflation is around 4%, then your real rate of return is just 2% ( and that 
 * is the reutrn before taxes) 
 * 
 * This is one of the reasons why money managers need reliable software that can be used to decide
 * which the best among myriad fixed income investments are. Just as the stock market presents
 * thousands of possibilities that need to be carefully analyzed, the fixed income industry has a huge
 * number of available choices. One of the big tasks for software developers is to create systems that can easily track
 * these investments and help in choosing the right options for long-term investors. 
 * 
 * *Fixed income investments have risks that are hard to measure because they depend on the future
 * economic environment. Sound fixed income investments need to take into consideration the several risks
 * involved. High-quality C++ software for fixed income may help investors to take into
 * consideration some of these external factors. 
 * 
 * Important concepts about fixed income investments used through this chapter:
 *    Interest Rate: The return of investment in percentage points for a given period (usually one year). 
 *          Fixed income investments will have a well-defined interest rate that is determined as a
 *          contractual obligation. 
 *    
 *     Principal: The amount of the original fixed income loan or investment. This is the value
 *          over which the interest rate is calculated in the case of a fixed income investment such as
 *          a bond. 
 *     
 *     Compound Interest: Interest that is accrued over time and added to the pincipal as regular
 *          interest payments are made at each period. The amount of compound interest is regulated
 *          by the interval between interest payments. 
 * 
 *      Continuous compounding: As the number of periods increase, the effect of compound interest
 *          becomes more pronounced. For example, compound interest paid at the end of every month
 *          will produce more than at a yearly payment schedule. In theory, this compounding process could happen in a 
 *          continuous schedule , and the resulting compound interest can be calculated using a simple formula
 *       
 *      Present Value:
 *          When a set of scheduled cash flows and an interest rate are defined, it is possible
 *          to calculate the present value of those cash flows. This is done using the contractual
 *          rate to determine the discounted value of each future cash flow and adding together
 *          all these values. The present value is a very powerful tool to compare two cash flow streams. 
 * 
 * Why C++?
 * ----------
 * Performance: C++ has little runtime overhead compared to other high-level languages, making it
 * possible to write very fast software. It allows to explore many additional low-level techniques
 * for code optimization, which are not available to programmers using lanagues such as Java or Python. 
 * 
 * Standard Compliance: C++ is available on all kinds of platforms, ranging from microcontrollers to the largest
 * servers. This means that you can run algorithms unmodified between platforms. This is an advantage
 * for financial algos, siince this kind of software can be easily ported to faster architectures over the years to take advantage of improvements
 * in new hardware and software design.
 * 
 * Existing Libraries
 * 
 * Multi-paradigm language: Devs designed the C++ language from  the beginning to support multiple programming
 * paradigms
 * 
 * High-level features:
 * 
 * 
 * 
 * Problem:
 *  Interest rates determine how much a financial institution is going to pay in exchange for holding a cash
 * deposit over a period of time. Calculate the future value of a deposit given the interest rate and the initial value 
 * of the deposit, assuming a single period of deposit. 
 * 
 * Solution:
 *  You just need to use the equation for simple interest rate calculation, which is given by the expression
 * V = P(1+R)
 * where V is the future value after a single period, and P is the present value of the deposit
 * 
 * Below we will make a IntRateCalculator class which determines the calculation of single period interest rates
 */

class IntRateCalculator { 
    public:
        IntRateCalculator(double rate);
        IntRateCalculator(const IntRateCalculator &v);
        IntRateCalculator &operator =(const IntRateCalculator &v);
        ~IntRateCalculator(); 

        double singlePeriod(double value); 
    
    private:
        double m_rate; 
};

/**
 * The compiler automatically adds the following member functions, unless you specify
 * otherwise in the class declaration:
 * 
 * The default constructor:
 *  The default constructor is automatically added, allowing an object to be created using the 
 * new keyword, even if the class writer didn't include it. A default constructor is one that has no
 * args. It is not included automatically, however if the class declaration contains another construtor
 * that requires args
 * 
 * The copy constructor:
 *      The copy constructor allows you to create copies of an exisiting object of the same class. It is included by default
 * only if there are no other constructors in the class definition. In our case, we need to supply a copy
 * constructor, to guarantee that it is possible to create copies of exisiting objects. 
 * Copy consructors become important when objects need to be added to containers, particularly the containers provided
 * in the STL, such as vectors, maps, and multimaps
 * 
 * The destructor: a destructor defines how the resources used by a particular object will be freed once
 * the object is destroyed. A proper constructor is required to avoid memory leaks and other undesirable resource leaks in an object. 
 * In the IntRateCalculator class, there are no internal or external resources that need to be freed, 
 * but it still better to define this explicitly. 
 * 
 * The assingment operator:
 * this member function is used when assignment operation occurs between two objects of the same class. 
 * Defining 
 * 
 */
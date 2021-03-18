//This is a program designed to do calculations with rational numbers
#include <iostream>
#include <iomanip>
using namespace std;

//the structure Rational represents the two parts of a rational number
struct Rational 
{
    int numer, denom;
};

//this function finds the greatest common DIVISOR
int gcd(int numer, int denom) 
{
    if (denom == 0) 
    {
        return numer;
    }
    else 
    {
        return gcd(denom, numer % denom);
    }
}

//this will simplify the rational
bool simplify(Rational& r) 
{
    int divisor;
    divisor = gcd(r.numer, r.denom);
    r.numer = r.numer / divisor;
    r.denom = r.denom / divisor;
    if (r.denom == 0) 
    {
        cout << "Error, denominator is zero." << endl;
        return false;
    }
    else if (r.numer == r.denom || r.denom == r.numer) 
    {
        r.numer = 1;
        r.denom = 1;
    }
    else if (r.denom < 0) {
        r.numer = r.numer * -1;
        r.denom = abs(r.denom);
    }
    return true;
}

//this function displays the rational number
void printRational(Rational r) 
{
    simplify(r);
    if (r.denom == 0) {
        cout << "Division by zero!" << endl;
    }
    else if(r.denom == 1) 
    {
        cout << r.numer;
    }
    else if (r.denom == r.numer || r.numer == r.denom) 
    {
        cout << 1;
    }
    else 
    {
        cout << r.numer << '/' << r.denom;
    }
}

//this will invert or make the reciprocal of the rational
bool invert(Rational& r) 
{
    int numerTemp;
    numerTemp = r.numer;
    r.numer = r.denom;
    r.denom = numerTemp;
    if(r.denom == 0) 
    {
        cout << "Wait, this will make the denominator zero, therefore... " << endl;
        return false;
    }
    return true;
}

//this will create the rational
bool create(Rational& r, int numer = 1, int denom = 1)
{
    if (denom == 0)
    {
        cout << "Invalid rational number! \n" << endl;
        return false;
    }
    if (denom < 0) 
    {
        r.numer = r.numer * -1;
        r.denom = abs(r.denom);
        return true;
    }
    Rational temp;
    if (denom == numer || numer == denom)
    {
        temp.numer = 1;
        temp.denom = 1;
    }
    temp.numer = numer;
    temp.denom = denom;
    return simplify(temp);
}

//this will add the rational numbers
bool add(Rational one, Rational two, Rational& res) 
{
    int a = one.numer;
    int b = one.denom;
    int c = two.numer;
    int d = two.denom;
    res.numer = ((a*d) + (b*c));
    res.denom = (b*d);
    return create(res, res.numer, res.denom);
}

//this will subtract the rational numbers
bool sub(Rational one, Rational two, Rational& res)
{
    int a = one.numer;
    int b = one.denom;
    int c = two.numer;
    int d = two.denom;
    res.numer = ((a*d) - (b*c));
    res.denom = (b*d);
    return create(res, res.numer, res.denom);
}

//this will multiply the rational numbers
bool mult(Rational one, Rational two, Rational& res) 
{
    int a = one.numer;
    int b = one.denom;
    int c = two.numer;
    int d = two.denom;
    res.numer = (a*c);
    res.denom = (b*d);
    return create(res, res.numer, res.denom);
}

//this will divide the rational numbers
bool divi(Rational one, Rational two, Rational& res) 
{
    if (invert(two) == false) 
    {
        return false;
    }
    mult(one, two, res);
    return create(res, res.numer, res.denom);
}

//main function, does all that juicy good stuff ;)
int main() 
{
    //starts the loop for the user to pick an operation
    char userOperation = 'a';
    while (userOperation != 'Q' or userOperation != 'q') 
    {
        //asks user for arithmetic operation and validates
        cout << "Which arithmetic operation would you like to perform? (+ - * / or Q to quite): ";
        cin >> userOperation;
        while (userOperation !='+' && userOperation !='-' && userOperation !='*' && userOperation !='/' && userOperation !='q' && userOperation!='Q') 
        {
            cout << "This input is garbage, please try again!" << endl;
            cout << "Which arithmetic operation would you like to perform? (+ - * / or Q to quite): ";
            cin >> userOperation;
        }
        if (userOperation == 'q' or userOperation == 'Q') 
        {
            break;
        }
        
        //gets numerators and denominators
        Rational firstRational;
        cout << "Enter the first numerator and denominator seperated by a space: ";
        cin >> firstRational.numer >> firstRational.denom;
        int numer1=firstRational.numer;
        int denom1=firstRational.denom;
        if(!create(firstRational, numer1, denom1))
        {
            continue;
        }
        Rational secondRational;
        cout << "Enter the second numberator and denominator seperated by a space: ";
        cin >> secondRational.numer >> secondRational.denom;
        int numer2=secondRational.numer;
        int denom2=secondRational.denom;
        if(!create(secondRational, numer2, denom2))
        {
            continue;
        }
        
        //does the desired calculation
        Rational result;
        if(userOperation == '+')
        {
            add(firstRational, secondRational, result);
            if(!simplify(result)) 
            {
                continue;
            }
        }
        if(userOperation == '-') 
        {
            sub(firstRational, secondRational, result);
            if(!simplify(result)) 
            {
                continue;
            }
        }
        if(userOperation == '*') 
        {
            mult(firstRational, secondRational, result);
            if(!simplify(result)) 
            {
                continue;
            }
        }
        if(userOperation == '/')
        {
            divi(firstRational, secondRational, result);
            if(!simplify(result)) 
            {
                continue;
            }
        }
        
        //displays the equation to be calculated
        printRational(firstRational);
        cout << " " << userOperation << " ";
        printRational(secondRational);
        cout << " = ";
        printRational(result);
        cout << endl << endl;
    }
    return 0;
}
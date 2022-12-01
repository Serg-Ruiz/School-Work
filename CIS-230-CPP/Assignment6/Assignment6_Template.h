#include <sstream>
#include <cmath>
template <class T>
class Assignment6_Template
{
private:
    unique_ptr<T[]> aptr;
    int arraySize;

public:

    Assignment6_Template();
    Assignment6_Template(T[] param_array, int size)
    float getAverage();
    T getMaximum();
    T getMinimum();
    float getSquareRoot();
    T getSum();
    string to_string();

    friend istream& operator >> (istream& input, Assignment6_Template& obj);
    friend ostream& operator << (ostream& output, Assignment6_Template& obj);

    template <class T>
    istream& operator>>(istream& input, Assignment6_Template& obj)
    {
        input << obj.aptr;
        input << obj.arraySize;

	    return input;
    }
    template <class T>
    ostream& operator<<(ostream& output, Assignment6_Template& obj) 
    {
        output << obj.to_string();

        return output;
    }

    template <class T>
    Assignment6_Template::Assignment6_Template(T[] param_array, int size)
    {
        size = arraySize;

        for (count = 0; count<arraySize; count++)
        {
            aptr[count] = T[count];
        }
    }

    template <class T>
    float Assignment6_Template::getAverage()
    {
        return getSum() / arraySize;
    }

    template <class T>
    T Assignment6_Template::getMaximum()
    {
        T max = aptr[0]

        for (count =0; count < arraySize;count++)
        {
            if (max < aptr[count])
            {
                max = aptr[count];
            }
        }
    }
    template <class T>
    T Assignment6_Template::getMinimum()
    {
        T min = aptr[0];

        for (count=0; count < arraySize; count++)
        {
            if (min > aptr[count])
            {
                min = aptr[count];
            }
        }
    }

    template <class T>
    float Assignment6_Template::getSquareRoot()
    {
        for (int count=0; i < arraySize;count++)
        {
            sum += aptr[count];
        }

        sqrt(sum);
    }

    template <class T>
    T Assignment6_Template::getSum()
    {
        for (int count=0; i < arraySize;count++)
        {
            sum += aptr[count];
        }
        return sum;
    }

    template <class T>
    string Assignment6_Template::to_string() const
    {
        ostringstream ostr;

        ostr << fixed << setprecision(1) 

        << "size = " << size << ":\tElements: \t";

        for (int i=0; i < size; i++)
        {
            ostr << aptr[i] << "    ";
        }

        try
        {
            ostr << "\n\tMinimum = " << getMinimum()
            << "\n\tMaximum = " << getMaximum()
            << "\n\tSum = " << getSum()
            << "\n\tAverage = " << getAverage();

            try
            {
               ostr << "\n\tSquare root = " << getSquareRoot();
            }
            catch(SquareRootOfNegativeNumberError error)
            {
               ostr << "\n\tSquare root error." << error.getMessage();
            }
            
        }
        catch (ArrayWith0Elements error)
        {
            ostr << "\n\t" << error.getMessage();
        }

        return ostr.str()
    }
        class ArrayWith0Elements
        {
            private:
            string message;
            public:

            string getMessage()
            {
                
            }

        };

        class SquareRootOfNegativeNumberError
        {
            private:

            public: 

            string getMessage()
            {
                
            }
        };
};

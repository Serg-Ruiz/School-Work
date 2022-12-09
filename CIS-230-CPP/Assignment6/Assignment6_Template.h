#include <cmath>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

template <typename T>
class Assignment6_Template
{
    private:
        T* m_ptr;
        int m_size;
    public:

    class ArrayWith0Elements
    {
    private:
        string m_message;

    public:
        ArrayWith0Elements()
        {
            m_message = "Error: array has 0 elements";
        }

        string getMessage() const
        {
            return m_message;
        }
    };

    class SquareRootOfNegativeNumberError
    {
    private:
        string m_message;

    public:
        SquareRootOfNegativeNumberError()
        {
            m_message = "Cannot retrieve square root of a negative number";
        }

        string getMessage() const
        {
            return m_message;
        }
    };

    Assignment6_Template(T* arr, int size)
    {
        m_size = size;
        m_ptr = new T[m_size];
        for (int i = 0; i < m_size; i++)
        {
            m_ptr[i] = arr[i];
        }
    }

    Assignment6_Template()
    {
        m_size = 0;
        m_ptr = nullptr;
    }

    ~Assignment6_Template()
    {
        delete[] m_ptr;
    }

    string to_string() const
    {
        ostringstream ostr;

        ostr << fixed << setprecision(1) << "size = " <<
            m_size << ":\tElements: ";

        for (int i = 0; i < m_size; i++)
        {
            ostr << m_ptr[i] << "   ";
        }

        try
        {
            ostr << "\n\tMinimum = " << min()
                << "\n\tMaximum = " << max()
                << "\n\tSum = " << sum()
                << "\n\tAverage = " << avg();

            try
            {
                ostr << "\n\tSquare root = " << sqrtSum();
            }
            catch (SquareRootOfNegativeNumberError error)
            {
                ostr << "\n\tSquare root error. " << error.getMessage();
            }
        }
        catch (ArrayWith0Elements error)
        {
            ostr << "\n\t" << error.getMessage();
        }
        return ostr.str();
    }

    T sum() const
    {
        if (m_size == 0)
        {
            throw ArrayWith0Elements();
        }

        T s = 0;
        for (int i = 0; i < m_size; i++)
        {
            s += m_ptr[i];
        }
        return s;
    }

    T max() const
    {
        if (m_size == 0)
        {
            throw ArrayWith0Elements();
        }

        T m = m_ptr[0];
        for (int i = 1; i < m_size; i++)
        {
            if (m_ptr[i] > m)
            {
                m = m_ptr[i];
            }
        }
        return m;
    }

    T min() const
    {
        if (m_size == 0)
        {
            throw ArrayWith0Elements();
        }

        T m = m_ptr[0];
        for (int i = 1; i < m_size; i++)
        {
            if (m_ptr[i] < m)
            {
                m = m_ptr[i];
            }
        }
        return m;
    }

    double avg() const
    {
        if (m_size == 0)
        {
            throw ArrayWith0Elements();
        }

        double s = 0;
        for (int i = 0; i < m_size; i++)
        {
            s += m_ptr[i];
        }
        return s / m_size;
    }

    double sqrtSum() const
    {
        T s = sum();
        if (s < 0)
        {
            throw SquareRootOfNegativeNumberError();
        }
        return sqrt(s);
    }
    friend ostream& operator<<(ostream& out, const Assignment6_Template<T>& t)
    {
        out << t.to_string();
        return out;
    }
};

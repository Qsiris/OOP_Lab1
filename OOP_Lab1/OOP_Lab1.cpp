#include <iostream>
#include <string>
#include <cmath>
using namespace std;

template <typename T>
class dynamic_array
{
private:
    int m_size;
    int m_capacity;
    T* m_data;

public:
    dynamic_array()
    {
        m_size = 0;
        m_capacity = 0;
        m_data = NULL;
    }

    dynamic_array(const dynamic_array<T>& a)
    {
        m_size = a.m_size;
        m_capacity = m_size;
        m_data = NULL;
        if (m_size != 0)
            m_data = new T[m_size];
        else
            m_data = 0;
        for (int i = 0; i < m_size; ++i)
            m_data[i] = a.m_data[i];
    }

    dynamic_array(int size)
    {
        m_size = size;
        m_capacity = size;
        if (size != 0)
            m_data = new T[size];
        else
            m_data = 0;
    }

    ~dynamic_array()
    {
        if (m_data)
            delete[] m_data;
    }

    void resize(int size)
    {
        if (size > m_capacity)
        {
            int new_capacity = max(size, m_size * 2);
            T* new_data = new T[new_capacity];
            for (int i = 0; i < m_size; ++i)
                new_data[i] = m_data[i];
            delete[] m_data;
            m_data = new_data;
            m_capacity = new_capacity;
        }
        m_size = size;
    }

    void push_back(T val)
    {
        resize(m_size + 1);
        m_data[m_size - 1] = val;
    }

    int size() const
    {
        return m_size;
    }

    T& operator[] (int i)
    {
        return m_data[i];
    }
};

template<typename T>
ostream& operator << (ostream& out, dynamic_array<T> a)
{
    for (int i = 0; i < a.size(); ++i)
        out << a[i] << " ";
    return out;
}

class NumberInDivSystem
{
public:
	NumberInDivSystem();
    int GetNumber();
    NumberInDivSystem(string number);
    NumberInDivSystem(dynamic_array<int> number);
	~NumberInDivSystem();
private:
    dynamic_array<int> div_array_;
	int number_;
};

NumberInDivSystem::NumberInDivSystem()
{
    number_ = 0;
}

int NumberInDivSystem::GetNumber()
{
    return this->number_;
}

NumberInDivSystem::NumberInDivSystem(string number)
{
    number_ = atoi(number.c_str());
}

NumberInDivSystem::NumberInDivSystem(dynamic_array<int> number)
{
    number_ = 0;
    for (int i = 0; i<number.size(); i++)
    {
        number_ += (int)(number[i] * pow(10, i));
    }
}

NumberInDivSystem::~NumberInDivSystem()
{
    div_array_.~dynamic_array();
}

int main()
{
    dynamic_array<int> array1;
    array1.push_back(1);
    array1.push_back(1);
    array1.push_back(1);
    NumberInDivSystem number1{array1};
    cout << number1.GetNumber();
}
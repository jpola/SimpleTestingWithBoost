#ifndef _SIMPLE_MATH_HPP_
#define _SIMPLE_MATH_HPP_
#include <vector>
#include <memory>

namespace simpleMath
{
template<typename T>
void add( std::vector<T> &v, const T x)
{
    for (auto& el : v) {
        el += x;
    }
}


template<typename T>
void multiply( std::vector<T>& v, const T x)
{
    for (auto& el : v)
    {
        el *= x;
    }

}


template<typename T>
class DummyMathObject
{
public:
    DummyMathObject () : data(0)
    {

    }

    DummyMathObject(int size = 0) : data(size)
    {

    }

    DummyMathObject(const DummyMathObject& other) : data(other.data)
    {

    }

    DummyMathObject(DummyMathObject&& other) noexcept : data(std::move(other.data))
    {

    }


    DummyMathObject& operator= (const DummyMathObject& other)
    {
        this->data = other.data;
        return *this;
    }

    DummyMathObject& operator = (DummyMathObject&& other)
    {
        data = std::move(other.data);
        return *this;
    }

    const std::vector<T>& GetData() const
    {
        return data;
    }

    void add(const T x)
    {
        simpleMath::add(data, x);
    }


private:
    std::vector<T> data;

};

}


#endif //_SIMPLE_MATH_HPP_

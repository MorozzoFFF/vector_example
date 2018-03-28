#include <algorithm>
#include <cassert>

#include "vector.hpp"

vector_t::vector_t()
{
}

vector_t::vector_t(vector_t const & other)
{
}

vector_t & vector_t::operator =(vector_t const & other)
{
	return *this;
}

bool vector_t::operator ==(vector_t const & other) const
{
	return false;
}

vector_t::~vector_t()
{
}

std::size_t vector_t::size() const
{
    return 0;
}

std::size_t vector_t::capacity() const
{
    return 0;
}

void vector_t::push_back(int value)
{
}

void vector_t::pop_back()
{
}

int & vector_t::operator [](std::size_t index)
{
	return elements_[0];
}

int vector_t::operator [](std::size_t index) const
{
	return 0;
}

bool operator !=(vector_t const & lhs, vector_t const & rhs)
{
	return true;
}
//

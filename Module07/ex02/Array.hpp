/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:20:21 by abouazi           #+#    #+#             */
/*   Updated: 2023/10/09 02:42:25 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
		int _size;
		T *arr;
    public:
        Array() : _size(0){
			arr =  new T();
		}

        Array(unsigned int n) : _size(n)
        {
            arr =  new T(n);
        }

		Array(const Array &cp)
        {
            _size = cp._size;
            arr = new T[_size];
            for(int i = 0; i < cp._size; i++)
                arr[i] = cp.arr[i];
        }
		Array<T>& operator=(const Array& other)
		{
			if (this != &other)
			{
				if (arr)
					delete[] arr;
				_size = other._size;
				arr = new T[_size];
				for (int i = 0; i < _size; ++i)
					arr[i] = other.arr[i];
			}
			return *this;
		}

		int size() {
			return _size;
		}
        T &operator[](int i)
        {
            if(i < _size && i >= 0)
                return arr[i];
            throw std::out_of_range("Index out of bounds: Accessing elements beyond the valid range!");
        }
        ~Array()
        {
            delete[] arr;
        }
};


# endif

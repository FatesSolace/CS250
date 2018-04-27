#ifndef _ARRAY_WRAPPER
#define _ARRAY_WRAPPER

const int MAX_SIZE = 10;
template <typename T>

class ArrayWrapper
{
	ArrayWrapper()
	{
		m_itemCount = 0;
	}

	void Push(T data)
	{
		if (m_itemCount < MAX_SIZE)
		{
			m_data[m_itemCount] = data;
			m_itemCount++;
		}
	}

	void Display()
	{
		for (int i = 0; i < MAX_SIZE; i++)
		{
			cout << m_data[i];
		}
	}

private:
	T m_data[MAX_SIZE];
	int m_itemCount;
};



#endif

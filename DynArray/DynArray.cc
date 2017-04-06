#include "DynArray.hh"


DynArray::DynArray() {
	m_data = new int[DYN_ARRAY_DEFAULT_SIZE];
	m_size = 

}

DynArray::DynArray(size_t size) {


}

DynArray::DynArray(size_t size, const int &value) {
	m_data = new int[size];
	for (int c = 0; c < size;c++) {
		m_data[c] = value;
	}
}
DynArray::DynArray(int *arr, size_t size) {


}

bool operator==(const DynArray& lhs, const DynArray& rhs) {
	bool Return = true;
	Return = (lhs.m_size == rhs.m_size);
	for (int c = 0; c < lhs.m_size && Return; c++) {
		Return = (lhs[c] == rhs[c]);
		}
	return Return;
	}

int& DynArray::operator[] (size_t n) const {
	
	return m_data[n];

}

void DynArray::fill(int *first, int *last, int value) {
	int *c { first };
	while (c != last) {
		*c = value;
		c++;
	}

}



DynArray::~DynArray() {
	delete[] m_data;
	m_data = nullptr;
}

int* DynArray::begin(void) const {

	return &m_data[0];

}
int* DynArray::end(void) const {

	return &m_data[m_size];

}




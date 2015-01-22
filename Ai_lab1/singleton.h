#pragma once
template <class T>
class Singleton{
public:
	static T* get_instance();
	~Singleton();
protected:
	Singleton(){};
private:
	static T* instance;
};

// Implementation
template <class T>
T* Singleton<T>::instance = 0;

template <class T>
T* Singleton<T>::get_instance() {
	if (instance == 0) {
		instance = new T();
	}
	return instance;
}

template<typename T>
Singleton<T>::~Singleton()
{
	if (Singleton::instance != 0)
	{
		delete Singleton::instance;
	}
	Singleton::instance = 0;
}

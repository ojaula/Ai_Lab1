#pragma once
template <class T>
class Singleton {
public:
	static T* get_instance();
protected:
	Singleton();
private:
	static T* instance;
};
// Implementation
template <class T>
T* Singleton::instance = 0;

template <class T>
T* Singleton::get_instance() {
	if (instance == 0) {
		instance = new Singleton;
	}
	return instance;
}

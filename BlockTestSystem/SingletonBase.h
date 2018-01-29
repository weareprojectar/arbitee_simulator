#pragma once
template<typename T>
class SingletonBase
{
protected:
	static T* s_pInstance;

protected:
	SingletonBase(void) {};
	~SingletonBase(void) {};

public:

	static T* GetInstance(void);
	static void ReleaseInstance(void);
};
template<typename T>
T* SingletonBase<T>::s_pInstance = NULL;

template<typename T>
T* SingletonBase<T>::GetInstance(void)
{
	if (s_pInstance == NULL)
		s_pInstance = new T;

	return s_pInstance;
}
template<typename T>
void SingletonBase<T>::ReleaseInstance(void)
{
	if (s_pInstance) {
		delete s_pInstance;
		s_pInstance = NULL;
	}
}
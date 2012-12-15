#ifndef _MUTEX_
#define _MUTEX_

#include <pthread.h>

class Mutex {
	public:
		Mutex();
		~Mutex();
		void lock();
		void unlock();

	private:
		pthread_mutex_t m_mutex;
};
#endif

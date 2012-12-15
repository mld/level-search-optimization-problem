#include <iostream>
#include <pthread.h>
#include <memory>	// For auto_ptr
#include <cstdlib>	// For exit
#include <cassert>	// For errors
#include <cstring>	// For strerror
#include <string>

#ifndef _THREAD
#define _THREAD

class Thread {
	public:
		Thread();
		virtual ~Thread();

		/** Returns true if the thread was successfully started, false if there was an error starting the thread */
		bool start();

		/** Will not return until the internal thread has exited. */
		void join();

	protected:
		/** Implement this method in your subclass with the code you want your thread to run. */
		//void loop();
		//virtual void loop() = 0;
		virtual void InternalThreadFunc() = 0;

	private:
		static void * InternalThreadEntryFunc(void * This) {((Thread *)This)->InternalThreadFunc(); return NULL;}
		pthread_t _thread;
		bool IsStarted;
};

#endif

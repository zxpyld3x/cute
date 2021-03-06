#ifndef CONFIG_H__
#define CONFIG_H__

#include <stdint.h>

// type define below 
typedef unsigned char		u8;
typedef uint16_t			u16;
typedef uint32_t			u32;
typedef uint64_t			u64;
typedef int16_t				i16;
typedef int32_t				i32;
typedef int64_t				i64;


// const define below 
#define CUTE_SUCC					0
#define CUTE_ERR					(-1)
#define CUTE_INVALID_FD				(-1)
#define MAX_EPOLL_EVENTS			64
#define MAX_MSS_LEN					1400
#define MAX_PORT					65535
#define MIN_PORT					100

#define REACTOR_SLEEP_INTERVAL		60		// 60 ms 

#define CUTE_CONNECT_PROCESS		1		// tcp connection is processing
#define CUTE_NO_MORE_CONNECT		2		// have no more establised tcp connection
#define CUTE_RECV_BUF_EMPTY			3		// socket receive buff is empty (have no data to recv)
#define CUTE_SEND_BUF_FULL			4		// socket send buff is full (can't send any more data)	

#define INVALID_TIMER_ID			0

#endif



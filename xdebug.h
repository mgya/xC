/**
 * @file xdebug.h
 * @brief 代码调试
 * @author guangbin <guangbin79@gmail.com>
 * @date 2015/01/30
 * @par 修改记录
 * 
 */

#ifndef _XDEBUG_H_
#define _XDEBUG_H_

#include "./xboolean.h"
#include "./xcharacter.h"

#ifdef NDEBUG

#define XASSERT(exp)
#define XDBGPRINTF(s)

#else

#define XASSERT(exp)    xdebug_assert(exp)
#define XDBGPRINTF(s)   xdebug_printf(s)

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 断言的实现,请调用宏定义XASSERT,不要直接调用xdebug_assert
 * @param[in] exp - 断言
 * @return - 无
 */
void xdebug_assert(xbool_t exp);

/**
 * @brief 调试信息输出的实现,请调用宏定义XDBGPRINTF,不要直接调用xdebug_printf
 * @param[in] info - 调试信息
 * @return - 无
 */
void xdebug_printf(const xchar_t * info);

#ifdef __cplusplus
}
#endif

#endif /* NDEBUG */

#endif /* _XDEBUG_H_ */


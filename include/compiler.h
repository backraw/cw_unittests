#ifndef MISC_COMPILER_H_
#define MISC_COMPILER_H_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef UNUSED
# define UNUSED(x) ((void)(x)) /**< Suppresses unused-variable-warnings */
#endif /* UNUSED */

#ifndef ARRAY_SIZE
# define ARRAY_SIZE(x) (sizeof( (x) )/sizeof((x)[0])) /**< calculate the size of an c-style array */
#endif /* ARRAY_SIZE */

#ifndef __packed
# define __packed __attribute__((packed)) /**< set packed attriubute to a structure */
#endif /* __packed */

#ifndef __section
# define __section( x ) __attribute__((section( #x ))) /**< Place in specified linker section */
/*lint -restore */
#endif /* __section */

#ifndef __weak
# define __weak  __attribute__((weak)) /**< make this function weak */
#endif /* __weak */

#ifdef __cplusplus
}
#endif

#endif /* MISC_COMPILER_H_ */

// 函数: sub_14062f700
// 地址: 0x14062f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (arg1 == 0)
    result.o = 0xbf800000
    return result

int64_t rax = *arg1
float __saved_zmm6[0x4] = arg4
arg4 = 0xbf800000
int32_t arg_8 = 0xbf800000

if ((*(rax + 0x6b0))(arg1, arg2, &arg_8, arg3, __saved_zmm6) != 0)
    arg4 = __sqrtss_xmmss_memss(0xbf800000, arg_8)

result.o = arg4
return result

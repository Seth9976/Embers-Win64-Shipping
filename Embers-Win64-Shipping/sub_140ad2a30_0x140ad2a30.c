// 函数: sub_140ad2a30
// 地址: 0x140ad2a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[4].b

if (rax == 1 || rax - 3 u<= 2)
    rax = 1
else
    rax = 0

float arg_8
int32_t arg_10
int64_t result =
    sub_140ad6a10(&arg_8, &arg_10, arg1[1], arg1[3], *arg1, arg2[1], arg2[2], *arg2, rax)
*arg3 = __minss_xmmss_memss(*arg3, arg_8)
*arg4 = __maxss_xmmss_memss(*arg4, arg_10)
return result

// 函数: sub_140ad3060
// 地址: 0x140ad3060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[0xa].b
char r11

if (rax == 1 || rax - 3 u<= 2)
    r11 = 1
else
    r11 = 0

float arg_8
int32_t arg_10
sub_140ad6a10(&arg_8, &arg_10, arg1[1], arg1[7], *arg1, arg2[1], arg2[4], *arg2, r11)
*arg3 = __minss_xmmss_memss(*arg3, arg_8)
*arg4 = __maxss_xmmss_memss(*arg4, arg_10)
sub_140ad6a10(&arg_8, &arg_10, arg1[2], arg1[8], *arg1, arg2[2], arg2[5], *arg2, r11)
int32_t temp0_2 = __minss_xmmss_memss(arg3[1], arg_8)
int32_t zmm1_2 = arg_10
arg3[1] = temp0_2
arg4[1] = __maxss_xmmss_memss(zmm1_2, arg4[1])
int64_t result =
    sub_140ad6a10(&arg_8, &arg_10, arg1[3], arg1[9], *arg1, arg2[3], arg2[6], *arg2, r11)
arg3[2] = __minss_xmmss_memss(arg3[2], arg_8)
arg4[2] = __maxss_xmmss_memss(arg4[2], arg_10)
return result

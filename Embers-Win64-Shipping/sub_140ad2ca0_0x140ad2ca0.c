// 函数: sub_140ad2ca0
// 地址: 0x140ad2ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[0x13].b
int32_t* rbx = arg4

if (rax == 1 || rax - 3 u<= 2)
    arg4.b = 1
else
    arg4.b = 0

float arg_8
float arg_10
sub_140ad6a10(&arg_8, &arg_10, arg1[1], arg1[0xd], *arg1, arg2[1], arg2[7], *arg2, arg4.b)
*arg3 = __minss_xmmss_memss(*arg3, arg_8)
*rbx = __maxss_xmmss_memss(*rbx, arg_10)
sub_140ad6a10(&arg_8, &arg_10, arg1[2], arg1[0xe], *arg1, arg2[2], arg2[8], *arg2, arg4.b)
int32_t temp0_2 = __minss_xmmss_memss(arg3[1], arg_8)
float zmm1_2 = arg_10
arg3[1] = temp0_2
rbx[1] = __maxss_xmmss_memss(zmm1_2, rbx[1])
sub_140ad6a10(&arg_8, &arg_10, arg1[3], arg1[0xf], *arg1, arg2[3], arg2[9], *arg2, arg4.b)
arg3[2] = __minss_xmmss_memss(arg3[2], arg_8)
rbx[2] = __maxss_xmmss_memss(rbx[2], arg_10)
sub_140ad6a10(&arg_8, &arg_10, arg1[4], arg1[0x10], *arg1, arg2[4], arg2[0xa], *arg2, arg4.b)
int32_t temp0_6 = __minss_xmmss_memss(arg3[3], arg_8)
float zmm1_4 = arg_10
arg3[3] = temp0_6
rbx[3] = __maxss_xmmss_memss(zmm1_4, rbx[3])
sub_140ad6a10(&arg_8, &arg_10, arg1[5], arg1[0x11], *arg1, arg2[5], arg2[0xb], *arg2, arg4.b)
arg3[4] = __minss_xmmss_memss(arg3[4], arg_8)
rbx[4] = __maxss_xmmss_memss(rbx[4], arg_10)
int64_t result =
    sub_140ad6a10(&arg_8, &arg_10, arg1[6], arg1[0x12], *arg1, arg2[6], arg2[0xc], *arg2, arg4.b)
int32_t temp0_10 = __minss_xmmss_memss(arg3[5], arg_8)
float zmm1_6 = arg_10
arg3[5] = temp0_10
rbx[5] = __maxss_xmmss_memss(zmm1_6, rbx[5])
return result

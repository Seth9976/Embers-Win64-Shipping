// 函数: sub_14062f620
// 地址: 0x14062f620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 0xbf800000

float zmm1[0x4] = *(arg1 + 0x1d0)
float var_28 = zmm1[0]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_20 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float var_24 = temp0[0]
int32_t arg_8 = 0xbf800000
(*(*arg2 + 0x6b0))(arg2, &var_28, &arg_8)
int64_t rax_1 = *arg1
arg_8 = 0xbf800000

if ((*(rax_1 + 0x6b0))(arg1, arg4, &arg_8, arg3, var_28, var_20, arg5) == 0)
    return 0xbf800000

return __sqrtss_xmmss_memss(0xbf800000, arg_8)

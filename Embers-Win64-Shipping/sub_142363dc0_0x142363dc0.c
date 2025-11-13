// 函数: sub_142363dc0
// 地址: 0x142363dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg4

if ((*(arg3 + 0x181) & 0x10) == 0)
    int512_t result
    result.o = zx.o(0)
    return result

arg4.b = 1
float var_18
sub_141e7dd40(arg2, *(arg3 + 0x6d0), &var_18, arg4.b)
float zmm2[0x4] = *(rbx + 0x30)
float zmm3 = var_18 - zmm2[0]
float var_14
float zmm4 = var_14 - _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
float var_10
float zmm1 = var_10 - _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
return _mm_sqrt_ss(0, zmm4 * zmm4 + zmm3 * zmm3 + zmm1 * zmm1)

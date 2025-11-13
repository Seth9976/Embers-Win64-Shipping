// 函数: sub_141f72bc0
// 地址: 0x141f72bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
arg1[0x94] = *arg2
*(arg1 + 0x4ac) = *arg3
uint128_t zmm0 = zx.o(*arg4)
arg1[0x95].d = rax
*(arg1 + 0x4b4) = arg3[1].d
int32_t rax_2 = arg4[1].d
*(arg1 + 0x4cc) = zmm0.q
*(arg1 + 0x4d4) = rax_2
int32_t rax_4 = arg5[1].d
uint64_t var_18 = *arg5
zmm0 = 0xca000000
int32_t result

if (rax_4 f>= -2097152f)
    result = _mm_min_ss(rax_4, 0x4a000000)
else
    result = -0x36000000

int64_t zmm1 = var_18:4.d

if (zmm1.d f>= -2097152f)
    zmm1 = _mm_min_ss(zmm1.d, 0x4a000000)
else
    zmm1 = 0xca000000

uint128_t zmm4 = var_18.d

if (not(zmm4.d f< -2097152f))
    zmm0 = _mm_min_ss(zmm4.d, 0x4a000000)

*(arg1 + 0x524) |= 4
arg1[0x9c] = (_mm_unpacklo_ps(zmm0, zmm1)).q
arg1[0x9d].d = result

if (arg6 == 0)
    return result

return sub_141f76840(arg1, 0) __tailcall

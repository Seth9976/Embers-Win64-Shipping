// 函数: sub_1420d15d0
// 地址: 0x1420d15d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18
sub_140b21590(&arg_18)
uint128_t zmm0
zmm0.q = _mm_cvtepi32_pd(zx.q(arg1)).q f* 10000000.0
zmm0.q = zmm0.q f+ 0.5
int64_t rcx_1 = int.q(zmm0.q)

if (rcx_1 != -0x8000000000000000 && not(float.d(rcx_1) f== zmm0.q))
    zmm0.q = float.d(rcx_1 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))

int64_t* rcx_3 = data_143f47dd0
int64_t result = int.q(zmm0.q)
arg_18 += result

if (rcx_3 == 0)
    return result

int64_t r8
r8.b = 1
return (*(*rcx_3 + 0x10))(rcx_3, &arg_18, r8, arg2)

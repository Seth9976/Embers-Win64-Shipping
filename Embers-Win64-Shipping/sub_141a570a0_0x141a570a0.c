// 函数: sub_141a570a0
// 地址: 0x141a570a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28

if (arg3 - 1 u> 0xfffffffd)
    var_28 = 0x3f800000
    int32_t var_20_1 = 0
    int32_t var_24_1 = 0
else
    int64_t zmm0
    zmm0.d = float.s(zx.q(arg3))
    uint128_t zmm2
    zmm2.q = _mm_cvtepi32_pd(zx.q(arg1[1].d - *(arg1 + 0xc))).q f* _mm_cvtps_pd(zmm0)
    int64_t rcx = int.q(zmm2.q)
    
    if (rcx != -0x8000000000000000 && not(float.d(rcx) f== zmm2.q))
        zmm2.q = float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2, zmm2.q))) & 1))
    
    int32_t arg_c = 0
    int32_t var_24
    var_24.q = int.d(zmm2.q).q
    var_28 = 0x3f800000

float var_1c[0x5]
sub_141a359a0(arg2, sub_141a56f70(arg1, &var_1c), &var_28)
return arg2

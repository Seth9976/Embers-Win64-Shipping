// 函数: sub_141e89c70
// 地址: 0x141e89c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg3 == 0 || 0f f<= *(arg2 + 0x88) || *(arg3 + 4) != 0 || *(arg3 + 8) != 0
        || *arg3 != 0)
    int64_t rax
    rax.b = 0
    return rax

uint128_t zmm1 = *(arg2 + 0x8c)
int32_t rax_1

if (not(zmm1.d f<= 0f))
    rax_1 = *(arg3 + 0x3c)

if (zmm1.d f<= 0f || rax_1 == 0)
    sub_141e76dd0(arg1, arg2)
else
    if (rax_1 == 1)
        int64_t zmm0
        zmm0.d = 1f f- *(arg3 + 0x38)
        zmm0.d = zmm0.d f* zmm1.d
        zmm1.q = *(arg1 + 0x360) f- _mm_cvtps_pd(zmm0)
        *(arg3 + 0x28) = zmm1.q
        zmm0 = _mm_cvtps_pd(*(arg2 + 0x8c)) f+ zmm1.q
        zmm1.q = zmm1.q f- 1.0
        *(arg3 + 0x30) = zmm0
        zmm1 = _mm_unpacklo_pd(zmm1, zmm1.q)
        *(arg3 + 0x10) = zmm1.q
        *(arg3 + 0x18) = zmm1
        sub_141e89c10(arg1, arg2)
        void* rax_2
        rax_2.b = 1
        return rax_2
    
    if (rax_1 == 2)
        zmm1 = zx.o(*(arg1 + 0x360))
        *(arg3 + 0x28) = zmm1.q
        *(arg3 + 0x30) = _mm_cvtps_pd(*(arg2 + 0x8c)) f+ zmm1.q
        sub_141e89c10(arg1, arg2)
        void* rax_3
        rax_3.b = 1
        return rax_3

rax_1.b = 1
return rax_1

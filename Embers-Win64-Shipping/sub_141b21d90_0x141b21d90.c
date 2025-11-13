// 函数: sub_141b21d90
// 地址: 0x141b21d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xe0)

if (rcx == 0)
    int32_t var_24 = 0
    int32_t var_1c = 0
    char var_20 = 2
    *arg2 = 2.o
    arg2[1].b = 1
    return arg2

int128_t zmm0_1 = sub_141a52fb0(rcx)
int64_t rdx_1 = *(sub_140d226f0(arg1, sub_141a6e000()) + 0x108)
uint128_t zmm1
zmm1.q = _mm_cvtepi32_pd(zx.q(rdx_1.d)).q f/ _mm_cvtepi32_pd(zx.q((rdx_1 u>> 0x20).d)).q
int64_t rcx_2 = int.q(zmm1.q)
uint128_t zmm0_2

if (rcx_2 != -0x8000000000000000)
    zmm0_2.q = float.d(rcx_2)
    
    if (not(zmm0_2.q f== zmm1.q))
        zmm1.q = float.d(rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

int32_t rcx_4 = int.d(zmm1.q)

if (not(zmm0_1.d f== 10000f))
    zmm0_2.q = fconvert.d(zmm0_1.d)
    uint128_t zmm2
    zmm2.q = _mm_cvtepi32_pd(zx.q(rdx_1.d)).q f* zmm0_2.q
    zmm2.q = zmm2.q f/ _mm_cvtepi32_pd(zx.q((rdx_1 u>> 0x20).d)).q
    int64_t rcx_5 = int.q(zmm2.q)
    zmm0_2 = zmm2
    
    if (rcx_5 != -0x8000000000000000)
        zmm1.q = float.d(rcx_5)
        
        if (not(zmm1.q f== zmm2.q))
            zmm0_2.q =
                float.d(rcx_5 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_2, zmm0_2.q))) & 1))
    
    zmm2.q = zmm2.q f- zmm0_2.q
    
    if (not(zmm2.q f<= 0.0))
        zmm2 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm2.q)
    
    zmm1 = _mm_cvtpd_ps(zmm2)
    
    if (zmm1.d f>= 0f)
        int32_t arg_c = _mm_min_ss(zmm1.d, 0x3f7fffff).d
    else
        arg_c = 0
    
    int32_t arg_8
    arg_8.q = int.d(zmm0_2.q).q
    rcx_4 = arg_8

int64_t rax_11 = *(arg1 + 0x90)
uint32_t rdx_3 = (rax_11 u>> 0x20).d

if (rax_11.b != 1)
    rdx_3 += 1

uint32_t rax_12

if (rax_11.b != 1)
    rax_12 = (rax_11 u>> 0x20).d + 1
else
    rax_12 = (rax_11 u>> 0x20).d

uint32_t var_24_1 = rax_12
char var_20_1 = 0
int32_t var_1c_1 = rdx_3 + rcx_4
*arg2 = 1.o
arg2[1].b = 1
return arg2

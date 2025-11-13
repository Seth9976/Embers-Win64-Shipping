// 函数: sub_140d96dd0
// 地址: 0x140d96dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(arg3)
int16_t* rdi = arg4
int32_t rdx_1 = arg5[1].d + i_2.d

if (rdx_1 s> *(arg5 + 0xc))
    sub_1405a5410(arg5, rdx_1)

int64_t i_1 = i_2

if (i_2.d s<= 0)
    return 

uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg2))
int64_t i

do
    char rdx_2 = arg5[4].b
    uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(sx.d(*rdi)))
    uint128_t zmm0
    uint128_t zmm1
    int32_t zmm2
    
    if (rdx_2 == 0)
        arg5[3]
        rdx_2 = 1
        zmm1.d = zmm3.d
        arg5[4].b = 1
        _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        zmm2 = zmm3.d
        zmm1.d = zmm6.d
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        *(arg5 + 0x10) = _mm_unpacklo_pd(zmm1, zmm1.q)
    else
        zmm2 = arg5[3].d
        zmm0 = __minss_xmmss_memss(zmm3.d, arg5[2].d)
        zmm2 = _mm_max_ss(zmm2, zmm3.d)
        zmm1 = __minss_xmmss_memss(zmm6.d, *(arg5 + 0x14))
        arg5[2].d = zmm0.d
        zmm0 = __maxss_xmmss_memss(zmm6.d, *(arg5 + 0x1c))
        *(arg5 + 0x14) = zmm1.d
        arg5[3].d = zmm2
        *(arg5 + 0x1c) = zmm0.d
    
    zmm3 = _mm_cvtepi32_ps(zx.o(sx.d(*rdi) - 1 + zx.d(rdi[1])))
    
    if (rdx_2 == 0)
        arg5[3]
        zmm1.d = zmm3.d
        arg5[4].b = 1
        _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        zmm1.d = zmm6.d
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        *(arg5 + 0x10) = _mm_unpacklo_pd(zmm1, zmm1.q)
    else
        int32_t temp0_11 = _mm_max_ss(zmm2, zmm3.d)
        zmm0 = __minss_xmmss_memss(zmm3.d, arg5[2].d)
        zmm1 = __minss_xmmss_memss(zmm6.d, *(arg5 + 0x14))
        arg5[3].d = temp0_11
        arg5[2].d = zmm0.d
        zmm0 = __maxss_xmmss_memss(zmm6.d, *(arg5 + 0x1c))
        *(arg5 + 0x14) = zmm1.d
        *(arg5 + 0x1c) = zmm0.d
    
    int32_t rax_3 = sx.d(*rdi)
    int64_t rsi = sx.q(arg5[1].d)
    uint32_t var_20_1 = zx.d(rdi[1])
    char var_1c_1 = rdi[2].b
    int32_t rax_6 = (rsi + 1).d
    int32_t var_24_1 = arg2
    arg5[1].d = rax_6
    
    if (rax_6 s> *(arg5 + 0xc))
        sub_1405a4f90(arg5)
    
    rdi = &rdi[3]
    *(*arg5 + rsi * 0x10) = rax_3.o
    i = i_1
    i_1 -= 1
while (i != 1)

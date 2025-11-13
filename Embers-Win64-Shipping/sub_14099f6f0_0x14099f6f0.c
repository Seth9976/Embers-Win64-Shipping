// 函数: sub_14099f6f0
// 地址: 0x14099f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(*(arg2 + 0x1c))
int64_t* rsi = arg4

if (r15.d == 2)
    return sub_14099e510(arg1, arg2, arg3, arg4) __tailcall

int32_t* rax_1 = *arg3
int64_t i_2 = 1
int64_t r14 = r15
arg3[3].d = 1
*(arg3 + 0x1c) = r15.d
arg3[4].d = r15.d
*(arg3 + 0x24) = 0
*rax_1 = 0

if (r15.d != 4)
    uint128_t zmm8
    zmm8.q = 0x401921fb60000000 f/ float.d(r15.d)
    uint128_t zmm10 = _mm_unpacklo_pd(zmm8, zmm8.q)
    uint128_t zmm0_1 = cos(zmm8.q)
    data_142e40bb0
    double zmm1 = zmm0_1.q f+ zmm0_1.q
    uint128_t zmm7 = zmm0_1
    zmm0_1.q = zmm8.q f* 0.5
    double temp0_2[0x2] = _mm_sqrt_sd(0, zmm1 + 18.0)
    double zmm0_2[0x2] = cos(zmm0_1.q)
    int32_t i = 0
    uint128_t zmm9 = 0x3ff0000000000000
    temp0_2[0] = temp0_2[0] * zmm0_2[0]
    temp0_2[0] = temp0_2[0] f+ zmm7.q
    temp0_2[0] = temp0_2[0] f+ zmm9.q
    temp0_2[0] = temp0_2[0] * 0.25
    zmm9.q = zmm9.q f/ temp0_2[0]
    _mm_unpacklo_pd(zmm9, zmm9.q)
    double zmm6[0x2]
    
    if (r15.d s> 0 && r15.d u>= 2)
        int64_t rbp_1 = arg3[2]
        int64_t rcx_1 = sx.q((r15 - 1).d)
        int64_t r12_1 = arg3[1]
        int128_t zmm13 = data_142e11d00
        int64_t rax_12 = (rcx_1 << 2) + rbp_1
        int64_t r9_1 = r12_1 + (rcx_1 << 2)
        
        if ((rbp_1 u> r9_1 || rax_12 u< r12_1) && (rbp_1 u> &arg3[1] || rax_12 u< &arg3[1])
                && (rbp_1 u> &arg3[2] || rax_12 u< &arg3[2])
                && (r12_1 u> &arg3[1] || r9_1 u< &arg3[1])
                && (r12_1 u> &arg3[2] || r9_1 u< &arg3[2]))
            int32_t rax_14 = r15.d & 0x80000001
            
            if (rax_14 s< 0)
                rax_14 = ((rax_14 - 1) | 0xfffffffe) + 1
            
            data_142d3f5b0
            int64_t* rsi_1 = nullptr
            
            do
                uint32_t zmm0_3[0x4]
                int512_t zmm6_1
                int32_t zmm7_1[0x4]
                double zmm10_1[0x2]
                int64_t zmm12_1
                double zmm14_1[0x2]
                zmm0_3, zmm6_1, zmm7_1, zmm10_1, zmm12_1, zmm14_1 = sub_142c94070(_mm_mul_pd(
                    _mm_cvtepi32_pd(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zx.o(zmm13.q)).q), 
                    zmm10))
                zmm6_1.o = zmm0_3
                int64_t temp0_9 = _mm_cvtpd_ps(_mm_mul_pd(zmm0_3, zmm14_1))
                uint32_t zmm1_1[0x4] = _mm_add_epi32(zx.o(zmm12_1), zmm7_1)
                *(rsi_1 + r12_1) = temp0_9
                double zmm11_1[0x2]
                zmm0_2, zmm6, zmm8, zmm9, zmm10, zmm11_1, zmm13 =
                    sub_142c94070(_mm_mul_pd(_mm_cvtepi32_pd(zmm1_1[0].q), zmm10_1))
                i += 2
                *(rsi_1 + rbp_1) = (_mm_cvtpd_ps(_mm_mul_pd(_mm_add_pd(zmm0_2, zmm6), zmm11_1))).q
                rsi_1 = &rsi_1[1]
            while (i s< r15.d - rax_14)
            
            rsi = arg4
            r14 = r15
    
    for (int64_t i_1 = sx.q(i); i_1 s< r14; i_1 += 1)
        zmm0_2 = zx.o(0)
        zmm0_2[0] = float.d(i)
        zmm0_2[0] = zmm0_2[0] f* zmm8.q
        double zmm0_4[0x2] = cos(zmm0_2[0])
        int64_t rax_17 = arg3[1]
        zmm6 = zmm0_4
        zmm1 = zmm0_4[0] f* 0x4010000000000000
        i += 1
        zmm0_4 = zx.o(0)
        zmm0_4[0] = float.d(i)
        zmm0_4[0] = zmm0_4[0] f* zmm8.q
        *(rax_17 + (i_1 << 2)) = fconvert.s(zmm1)
        zmm0_2 = cos(zmm0_4[0])
        int64_t rax_18 = arg3[2]
        zmm0_2[0] = zmm0_2[0] + zmm6[0]
        zmm0_2[0] = zmm0_2[0] f* zmm9.q
        zmm0_2[0].d = fconvert.s(zmm0_2[0])
        *(rax_18 + (i_1 << 2)) = zmm0_2[0].d
else
    *arg3[1] = 0x40800000
    *(arg3[1] + 4) = 0
    *(arg3[1] + 8) = 0xc0800000
    *(arg3[1] + 0xc) = 0
    *arg3[2] = 0x3f800000
    *(arg3[2] + 4) = 0xbf800000
    *(arg3[2] + 8) = 0xbf800000
    *(arg3[2] + 0xc) = 0x3f800000

int32_t* rax_19 = *rsi
rsi[3].d = 1
*(rsi + 0x1c) = r15.d
rsi[4].d = r15.d
*(rsi + 0x24) = 0
*rax_19 = 0
uint64_t result

if (r15.d != 4)
    *rsi[1] = *(arg3[1] + (r14 << 2) - 4)
    result = zx.q(*(arg3[2] + (r14 << 2) - 4))
    *rsi[2] = result.d
    
    if (r14 s> 1)
        if (r14 s>= 5)
            do
                *(rsi[1] + (i_2 << 2)) = *(arg3[1] + (i_2 << 2) - 4)
                *(rsi[2] + (i_2 << 2)) = *(arg3[2] + (i_2 << 2) - 4)
                *(rsi[1] + (i_2 << 2) + 4) = *(arg3[1] + (i_2 << 2))
                *(rsi[2] + (i_2 << 2) + 4) = *(arg3[2] + (i_2 << 2))
                *(rsi[1] + (i_2 << 2) + 8) = *(arg3[1] + (i_2 << 2) + 4)
                *(rsi[2] + (i_2 << 2) + 8) = *(arg3[2] + (i_2 << 2) + 4)
                *(rsi[1] + (i_2 << 2) + 0xc) = *(arg3[1] + (i_2 << 2) + 8)
                result = zx.q(*(arg3[2] + (i_2 << 2) + 8))
                *(rsi[2] + (i_2 << 2) + 0xc) = result.d
                i_2 += 4
            while (i_2 s< r14 - 3)
        
        for (; i_2 s< r14; i_2 += 1)
            *(rsi[1] + (i_2 << 2)) = *(arg3[1] + (i_2 << 2) - 4)
            result = zx.q(*(arg3[2] + (i_2 << 2) - 4))
            *(rsi[2] + (i_2 << 2)) = result.d
else
    *rsi[1] = 0
    *(rsi[1] + 4) = 0x40800000
    *(rsi[1] + 8) = 0
    *(rsi[1] + 0xc) = 0xc0800000
    *rsi[2] = 0x3f800000
    *(rsi[2] + 4) = 0x3f800000
    *(rsi[2] + 8) = 0xbf800000
    result = rsi[2]
    *(result + 0xc) = 0xbf800000

return result

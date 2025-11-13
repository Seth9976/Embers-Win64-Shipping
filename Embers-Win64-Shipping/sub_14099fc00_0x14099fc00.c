// 函数: sub_14099fc00
// 地址: 0x14099fc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg2 + 0x1c))
int64_t* rbx = nullptr
*(arg3 + 0x1c) = rbp.d
arg3[4].d = 0
*(arg3 + 0x24) = 0
arg3[3].d = 1
arg4[3].d = 1
*(arg4 + 0x1c) = rbp.d
arg4[4].d = 0
*(arg4 + 0x24) = 0
**arg3 = 0
int32_t* rax_1 = *arg4
*rax_1 = 0

if (rbp.d == 6)
    *arg3[1] = 0x3f800000
    *(arg3[1] + 4) = 0x3f000000
    *(arg3[1] + 8) = 0xbf000000
    *(arg3[1] + 0xc) = 0xbf800000
    *(arg3[1] + 0x10) = 0xbf000000
    *(arg3[1] + 0x14) = 0x3f000000
    *arg4[1] = 0
    *(arg4[1] + 4) = 0x3f5db3d7
    *(arg4[1] + 8) = 0x3f5db3d7
    *(arg4[1] + 0xc) = 0
    *(arg4[1] + 0x10) = 0xbf5db3d7
    void* rax_13 = arg4[1]
    *(rax_13 + 0x14) = 0xbf5db3d7
    return rax_13

int32_t i = 0
float zmm7[0x4] = 0x40c90fdb
zmm7[0] = 6.28318548f f/ _mm_cvtepi32_ps(zx.o(rbp.d)).d
float zmm8[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
uint128_t zmm0

if (rbp.d s> 0 && rbp.d u>= 2)
    int64_t r12_1 = arg4[1]
    int64_t rcx = sx.q((rbp - 1).d)
    int128_t zmm9 = data_142e11d00
    int64_t r15_1 = arg3[1]
    rax_1 = r12_1 + (rcx << 2)
    int64_t r9 = r15_1 + (rcx << 2)
    
    if ((r12_1 u> r9 || rax_1 u< r15_1) && (r12_1 u> &arg4[1] || rax_1 u< &arg4[1])
            && (r12_1 u> &arg3[1] || rax_1 u< &arg3[1]) && (r15_1 u> &arg4[1] || r9 u< &arg4[1])
            && (r15_1 u> &arg3[1] || r9 u< &arg3[1]))
        double zmm6[0x2]
        double var_38_1[0x2] = zmm6
        int32_t rax_16 = rbp.d & 0x80000001
        
        if (rax_16 s< 0)
            rax_16 = ((rax_16 - 1) | 0xfffffffe) + 1
        
        do
            float temp0_4[0x4] =
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zx.o(zmm9.q)))
            float zmm1[0x4] = zx.o(0)
            zmm1[0].q = zmm8.q
            uint32_t zmm0_1[0x4]
            uint32_t zmm6_1[0x4]
            zmm0_1, zmm6_1 = sub_142c94070(_mm_cvtps_pd(_mm_mul_ps(temp0_4, zmm1)[0].q))
            *(rbx + r15_1) = _mm_cvtpd_ps(zmm0_1)
            rax_1, zmm0, zmm7, zmm8, zmm9 = sub_142c94000(zmm6_1)
            i += 2
            rbx = &rbx[1]
            *(rbx + r12_1 - 8) = (_mm_cvtpd_ps(zmm0)).q
        while (i s< rbp.d - rax_16)

for (int64_t i_1 = sx.q(i); i_1 s< rbp; i_1 += 1)
    zmm0.d = _mm_cvtepi32_ps(zx.o(i)).d f* zmm7[0]
    zmm0, zmm7 = __libm_sse2_sincos_(_mm_cvtps_pd(zmm0.q))
    int64_t rax_19 = arg3[1]
    double temp0_11[0x2] = _mm_shuffle_pd(zmm0, zmm0, 1)
    i += 1
    temp0_11[0].d = fconvert.s(temp0_11[0])
    zmm0.d = fconvert.s(zmm0.q)
    *(rax_19 + (i_1 << 2)) = temp0_11[0].d
    rax_1 = arg4[1]
    rax_1[i_1] = zmm0.d

return rax_1

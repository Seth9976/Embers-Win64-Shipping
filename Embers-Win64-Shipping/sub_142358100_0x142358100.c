// 函数: sub_142358100
// 地址: 0x142358100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(arg1[0xa9])
uint128_t zmm7 = arg3
int128_t zmm10 = zx.o(0)
uint128_t zmm0

if (zmm1.q f!= -1.0)
    zmm0.q = zmm7.q f- zmm1.q
else
    zmm0 = zx.o(0)

arg1[0xaa] = zmm0.q
void* rax = &arg1[0xee]
arg1[0xa9] = zmm7.q
int64_t i_1 = 2
void* rcx = &arg1[0xca]
int64_t i

do
    rax += 0x80
    zmm0 = *rcx
    rcx += 0x80
    *(rax - 0x80) = zmm0
    *(rax - 0x70) = *(rcx - 0x70)
    *(rax - 0x60) = *(rcx - 0x60)
    *(rax - 0x50) = *(rcx - 0x50)
    *(rax - 0x40) = *(rcx - 0x40)
    *(rax - 0x30) = *(rcx - 0x30)
    *(rax - 0x20) = *(rcx - 0x20)
    *(rax - 0x10) = *(rcx - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
*rax = *rcx
*(rax + 0x10) = *(rcx + 0x10)
int32_t result

if (arg2 == 0)
    arg1[0xca] = 0x3f800000
    arg1[0xcb] = 0
    arg1[0xcc] = 0
    arg1[0xd6] = 0
    __builtin_memset(arg1 + 0x674, 0, 0x24)
    arg1[0xd4] = 0
    arg1[0xd5].d = 0
    arg1[0xd8] = 0
    arg1[0xd7].d = 0
    arg1[0xda] = 0
    arg1[0xe0] = 0
    arg1[0xcd].d = 0x3f800000
    *(arg1 + 0x66c) = 0x3f800000
    __builtin_memset(&arg1[0xdc], 0, 0x1c)
    __builtin_memset(&arg1[0xe2], 0, 0x1c)
    arg1[0xdb].d = 0x3f800000
    arg1[0xe1].d = 0x3f800000
    arg1[0xe6] = 0
    arg1[0xe7].d = 0
    *(arg1 + 0x73c) = 0x3f800000
    *(arg1 + 0x764) = arg1[0x9e].d
    *(arg1 + 0x76c) = *(arg1 + 0x4f4)
    arg1[0xed].d = arg1[0x9f].d
    arg1[0xec].d = *(arg1 + 0x4fc)
    arg1[0xea].d = arg1[0xa2].d
    *(arg1 + 0x754) = *(arg1 + 0x514)
    arg1[0xe8].d = *(arg1 + 0x504)
    *(arg1 + 0x744) = arg1[0xa1].d
    result = *(arg1 + 0x50c)
    arg1[0xe9].d = result
    arg1[0xeb].d = 0
    *(arg1 + 0x75c) = 0
else
    uint128_t zmm6
    uint128_t var_18_1 = zmm6
    uint128_t zmm8
    uint128_t var_38_1 = zmm8
    int128_t zmm9
    int128_t var_48_1 = zmm9
    int128_t zmm11
    int128_t var_68_1 = zmm11
    uint128_t zmm12
    uint128_t var_78_1 = zmm12
    int128_t zmm13
    int128_t var_88_1 = zmm13
    
    if (arg1[0xab].b != i_1.b)
        zmm7, zmm10 = sub_1423684e0(arg1, zmm7)
    
    zmm1 = zx.o(arg1[0xba])
    arg3 = zx.o(arg1[0xb9])
    zmm12 = 0x3ff0000000000000
    zmm6 = 0x3f800000
    
    if (not(zmm1.q f== arg3.q))
        zmm1.q = zmm1.q f- arg3.q
        zmm0.q = zmm7.q f- arg3.q
        zmm0.q = zmm0.q f/ zmm1.q
        zmm6.d = fconvert.s(_mm_min_sd(_mm_max_sd(zmm0.q, zmm10.q).q, zmm12.q).q)
    
    zmm1.d = zmm6.d f* 12f
    zmm0.d = 6f f- zmm1.d
    float zmm0_1 = expf(zmm0.d)
    zmm8 = arg1[0xb7].d
    uint128_t zmm5_1 = *(arg1 + 0x5bc)
    float zmm4_1 = arg1[0xb8].d
    zmm1.d = 1f / (zmm0_1 + 1f)
    zmm6.d = zmm6.d f- zmm1.d
    zmm6.d = zmm6.d f* 0.5f
    zmm6.d = zmm6.d f+ zmm1.d
    
    if (zmm6.d f>= 0.5f)
        arg3 = zmm8
        zmm1 = zmm5_1
        zmm5_1.d = arg1[0xb6].d.d f- zmm1.d
        zmm8.d = (*(arg1 + 0x5ac)).d f- arg3.d
        float zmm3 = zmm6.d - 0.5f f+ zmm6.d - 0.5f
        zmm0_1 = zmm4_1
        zmm5_1.d = zmm5_1.d f* zmm3
        zmm4_1 = (*(arg1 + 0x5b4) - zmm0_1) * zmm3
        zmm8.d = zmm8.d f* zmm3
    else
        arg3 = arg1[0xbb].d
        zmm6.d = zmm6.d f+ zmm6.d
        zmm1 = *(arg1 + 0x5dc)
        zmm8.d = zmm8.d f- arg3.d
        zmm0_1 = arg1[0xbc].d
        zmm5_1.d = zmm5_1.d f- zmm1.d
        zmm8.d = zmm8.d f* zmm6.d
        zmm4_1 = (zmm4_1 - zmm0_1) f* zmm6.d
        zmm5_1.d = zmm5_1.d f* zmm6.d
    
    zmm8.d = zmm8.d f+ arg3.d
    zmm5_1.d = zmm5_1.d f+ zmm1.d
    arg1[0xa7].d = zmm8.d
    *(arg1 + 0x53c) = zmm5_1.d
    arg1[0xa8].d = zmm4_1 + zmm0_1
    sub_14236c400(arg1, &arg1[0xa7])
    double zmm0_2 = arg1[0xb4]
    zmm8 = zx.o(0)
    uint128_t zmm1_1 = zx.o(arg1[0xb3])
    
    if (zmm0_2 f== zmm1_1.q)
        zmm0_2 = (zx.o(0)).q
    else
        zmm7.q = zmm7.q f- zmm1_1.q
        zmm7.q = zmm7.q f/ (zmm0_2 f- zmm1_1.q)
        zmm0_2.d = fconvert.s(_mm_min_sd(_mm_max_sd(zmm7.q, zmm10.q).q, zmm12.q).q)
    
    zmm6 = arg1[0xb5].d
    zmm0_2.d = zmm0_2.d f* 12f
    zmm7.d = arg1[0xb2].d.d f- zmm6.d
    zmm11.d = 6f f- zmm0_2.d
    uint128_t zmm0_3
    zmm0_3.d = expf(zmm11.q.d).d f+ 1f
    zmm7.d = zmm7.d f/ zmm0_3.d
    zmm7.d = zmm7.d f+ zmm6.d
    *(arg1 + 0x534) = zmm7.d
    zmm7.d = zmm7.d f+ *(arg1 + 0x55c)
    zmm7 = _mm_max_ss(_mm_min_ss(zmm7.d, 0x3f800000).d, 0)
    *(arg1 + 0x5ec) = zmm7.d
    zmm7.d = zmm7.d f* arg1[0xa7].d
    zmm0_3 = _mm_cvtps_pd((*(arg1 + 0x5e4)).q)
    zmm7.d = zmm7.d f* arg1[0xa0].d
    zmm1_1.q = _mm_cvtps_pd(zmm7.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ zmm0_3.q
    *(arg1 + 0x5e4) = _mm_cvtpd_ps(zmm1_1).d
    zmm1_1.d = (*(arg1 + 0x5ec)).d f* *(arg1 + 0x53c)
    zmm0_3 = _mm_cvtps_pd(arg1[0xbd].d.q)
    zmm1_1.d = zmm1_1.d f* arg1[0xa0].d
    uint128_t zmm2
    zmm2.q = _mm_cvtps_pd(zmm1_1.q).q f* arg1[0xaa]
    zmm2.q = zmm2.q f+ zmm0_3.q
    arg1[0xbd].d = _mm_cvtpd_ps(zmm2).d
    float zmm3_1 = *(arg1 + 0x5ec) * 9f
    int32_t rcx_3 = int.d(zmm3_1)
    int32_t rax_1 = rcx_3 + 1
    
    if (rax_1 s>= 0xa)
        rcx_3 = 9
        zmm3_1 = (zx.o(0)).d
        rax_1 = 9
    else if (rcx_3 s>= 0)
        zmm3_1 = zmm3_1 f- _mm_cvtepi32_ps(zx.o(rcx_3)).d
    else
        rcx_3 = 0
        zmm3_1 = (zx.o(0)).d
        rax_1 = 0
    
    int64_t rdx_1 = sx.q(rcx_3)
    int64_t rcx_4 = sx.q(rax_1)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x10)).d f- *(arg1 + (rdx_1 << 2) + 0x10)
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ *(arg1 + (rdx_1 << 2) + 0x10)
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd(arg1[0xbe].d.q).q
    arg1[0xbe].d = _mm_cvtpd_ps(zmm1_1).d
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x38)).d f- *(arg1 + (rdx_1 << 2) + 0x38)
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ *(arg1 + (rdx_1 << 2) + 0x38)
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd((*(arg1 + 0x5f4)).q).q
    *(arg1 + 0x5f4) = _mm_cvtpd_ps(zmm1_1).d
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x60)).d f- *(arg1 + (rdx_1 << 2) + 0x60)
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ *(arg1 + (rdx_1 << 2) + 0x60)
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd(arg1[0xbf].d.q).q
    arg1[0xbf].d = _mm_cvtpd_ps(zmm1_1).d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x88)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x88)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd((*(arg1 + 0x5fc)).q).q
    *(arg1 + 0x5fc) = _mm_cvtpd_ps(zmm1_1).d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0xb0)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0xb0)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd(arg1[0xc0].d.q).q
    arg1[0xc0].d = _mm_cvtpd_ps(zmm1_1).d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0xd8)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0xd8)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd((*(arg1 + 0x604)).q).q
    *(arg1 + 0x604) = _mm_cvtpd_ps(zmm1_1).d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x100)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x100)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd(arg1[0xc1].d.q).q
    arg1[0xc1].d = _mm_cvtpd_ps(zmm1_1).d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x128)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x128)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd((*(arg1 + 0x60c)).q).q
    *(arg1 + 0x60c) = _mm_cvtpd_ps(zmm1_1).d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x150)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x150)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd(arg1[0xc2].d.q).q
    arg1[0xc2].d = _mm_cvtpd_ps(zmm1_1).d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x178)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x178)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    zmm1_1.q = _mm_cvtps_pd(zmm0_3.q).q f* arg1[0xaa]
    zmm1_1.q = zmm1_1.q f+ _mm_cvtps_pd((*(arg1 + 0x614)).q).q
    *(arg1 + 0x614) = _mm_cvtpd_ps(zmm1_1).d
    uint128_t zmm5_2 = arg1[0xa7].d
    zmm6 = *(arg1 + 0x53c)
    uint128_t zmm4_2 = arg1[0xa8].d
    arg1[0xca].d = zmm5_2.d
    *(arg1 + 0x654) = zmm6.d
    arg1[0xcb].d = zmm4_2.d
    *(arg1 + 0x65c) = *(arg1 + 0x5ec)
    zmm1_1 = *(arg1 + (rdx_1 << 2) + 0x1a8)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x1a8)).d f- zmm1_1.d
    arg1[0xcc].d = arg1[0xbe].d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm1_1.d
    *(arg1 + 0x664) = zmm0_3.d
    zmm0_3 = 0x3f800000
    zmm1_1 = arg1[0x34].d
    
    if (not(zmm1_1.d f== 0f))
        zmm0_3.d = 1f f/ zmm1_1.d
    
    arg1[0xcd].d = zmm0_3.d
    *(arg1 + 0x66c) = *(arg1 + 0x1a4)
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x1d0)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x1d0)).d f- zmm0_3.d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    arg1[0xd6].d = zmm1_1.d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x1f8)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x1f8)).d f- zmm2.d
    arg1[0xce].d = *(arg1 + 0x5f4)
    int32_t rax_6 = arg1[0xbf].d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    zmm2.d = zmm6.d f* zmm6.d
    *(arg1 + 0x674) = zmm0_3.d
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x27c)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x27c)).d f- zmm0_3.d
    arg1[0xcf].d = rax_6
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    zmm0_3.d = zmm5_2.d f* zmm5_2.d
    *(arg1 + 0x67c) = zmm1_1.d
    zmm2.d = zmm2.d f+ zmm0_3.d
    zmm4_2.d = zmm4_2.d f+ arg1[1].d
    zmm1_1.d = zmm4_2.d f* zmm4_2.d
    zmm2.d = zmm2.d f+ zmm1_1.d
    zmm0_3 = _mm_sqrt_ss(0, zmm2.d)
    
    if (zmm0_3.d f== 0f)
        zmm5_2 = zx.o(0)
        zmm6 = zx.o(0)
        zmm4_2 = zx.o(0)
    else
        zmm9.d = 1f f/ zmm0_3.d
        zmm5_2.d = zmm5_2.d f* zmm9.d
        zmm6.d = zmm6.d f* zmm9.d
        zmm4_2.d = zmm4_2.d f* zmm9.d
    
    bool cond:3_1 = *(arg1 + 0x61b) == 0
    zmm0_3 = arg1[0xc8].d
    zmm1_1 = *(arg1 + 0xc)
    zmm5_2.d = zmm5_2.d f* zmm0_3.d
    zmm6.d = zmm6.d f* zmm0_3.d
    zmm5_2.d = zmm5_2.d f* zmm1_1.d
    zmm6.d = zmm6.d f* zmm1_1.d
    zmm5_2.d = zmm5_2.d f+ *(arg1 + 0x634)
    zmm4_2.d = zmm4_2.d f* zmm0_3.d
    zmm6.d = zmm6.d f+ arg1[0xc7].d
    zmm4_2.d = zmm4_2.d f* zmm1_1.d
    arg1[0xd4].d = zmm5_2.d
    *(arg1 + 0x6a4) = zmm6.d
    zmm4_2.d = zmm4_2.d f+ *(arg1 + 0x63c)
    arg1[0xd5].d = zmm4_2.d
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x220)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x220)).d f- zmm0_3.d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    *(arg1 + 0x6b4) = zmm1_1.d
    
    if (not(cond:3_1))
        zmm1_1.d = zmm1_1.d f* arg1[0xc8].d
        *(arg1 + 0x6b4) = zmm1_1.d
    
    arg1[0xd8].d = arg1[0x4e].d
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x2a4)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x2a4)).d f- zmm0_3.d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    arg1[0xd7].d = zmm1_1.d
    
    if (*(arg1 + 0x621) != 0)
        zmm1_1.d = zmm1_1.d f* arg1[0xc8].d
        arg1[0xd7].d = zmm1_1.d
    
    *(arg1 + 0x6c4) = *(arg1 + 0x2f4)
    arg1[0xd0].d = *(arg1 + 0x274)
    *(arg1 + 0x684) = arg1[0x4f].d
    arg1[0xd1].d = arg1[0x5f].d
    *(arg1 + 0x68c) = *(arg1 + 0x2fc)
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x248)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x248)).d f- zmm0_3.d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    arg1[0xd2].d = zmm1_1.d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x2cc)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x2cc)).d f- zmm2.d
    arg1[0xda].d = *(arg1 + 0x5fc)
    int32_t rax_14 = arg1[0xc1].d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    *(arg1 + 0x694) = zmm0_3.d
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x300)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x300)).d f- zmm0_3.d
    arg1[0xe0].d = rax_14
    int32_t rax_15 = arg1[0xc0].d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    *(arg1 + 0x6d4) = zmm1_1.d
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x3e0)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x3e0)).d f- zmm0_3.d
    arg1[0xdc].d = rax_15
    int32_t rax_16 = *(arg1 + 0x60c)
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    *(arg1 + 0x704) = zmm1_1.d
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x328)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x328)).d f- zmm0_3.d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    *(arg1 + 0x6e4) = zmm1_1.d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x350)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x350)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    arg1[0xdd].d = zmm0_3.d
    zmm1_1 = *(arg1 + (rdx_1 << 2) + 0x378)
    zmm2.d = (*(arg1 + (rcx_4 << 2) + 0x378)).d f- zmm1_1.d
    arg1[0xe2].d = rax_16
    zmm2.d = zmm2.d f* zmm3_1
    zmm2.d = zmm2.d f+ zmm1_1.d
    *(arg1 + 0x6ec) = zmm2.d
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x408)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x408)).d f- zmm0_3.d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    *(arg1 + 0x714) = zmm1_1.d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x430)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x430)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    arg1[0xe3].d = zmm0_3.d
    zmm1_1 = *(arg1 + (rdx_1 << 2) + 0x458)
    zmm2.d = (*(arg1 + (rcx_4 << 2) + 0x458)).d f- zmm1_1.d
    zmm2.d = zmm2.d f* zmm3_1
    zmm2.d = zmm2.d f+ zmm1_1.d
    *(arg1 + 0x71c) = zmm2.d
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x3a0)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x3a0)).d f- zmm0_3.d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    arg1[0xde].d = zmm1_1.d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0xd8)
    zmm4_2.d = (*(arg1 + (rcx_4 << 2) + 0xd8)).d f- zmm2.d
    zmm4_2.d = zmm4_2.d f* zmm3_1
    zmm4_2.d = zmm4_2.d f+ zmm2.d
    
    if (zmm4_2.d f>= 1.1920929e-07f)
        zmm0_3.d = arg1[0x79].d.d f/ zmm4_2.d
        zmm0_3.d = zmm0_3.d f* 10f
    else
        zmm0_3 = zx.o(0)
    
    *(arg1 + 0x6f4) = zmm0_3.d
    arg1[0xdf].d = *(arg1 + 0x604)
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x480)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x480)).d f- zmm0_3.d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    arg1[0xe4].d = zmm1_1.d
    zmm2 = *(arg1 + (rdx_1 << 2) + 0x150)
    zmm0_3.d = (*(arg1 + (rcx_4 << 2) + 0x150)).d f- zmm2.d
    zmm0_3.d = zmm0_3.d f* zmm3_1
    zmm0_3.d = zmm0_3.d f+ zmm2.d
    
    if (not(zmm0_3.d f< 1.1920929e-07f))
        zmm8.d = arg1[0x95].d.d f/ zmm0_3.d
        zmm8.d = zmm8.d f* 10f
    
    *(arg1 + 0x724) = zmm8.d
    arg1[0xe5].d = arg1[0xc2].d
    arg1[0xdb].d = *(arg1 + 0x3dc)
    arg1[0xe1].d = *(arg1 + 0x4bc)
    arg1[0xe6].d = *(arg1 + 0x614)
    zmm0_3 = *(arg1 + (rdx_1 << 2) + 0x4c0)
    zmm1_1.d = (*(arg1 + (rcx_4 << 2) + 0x4c0)).d f- zmm0_3.d
    zmm1_1.d = zmm1_1.d f* zmm3_1
    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
    *(arg1 + 0x734) = zmm1_1.d
    arg1[0xe7].d = arg1[0x9d].d
    *(arg1 + 0x73c) = *(arg1 + 0x4ec)
    *(arg1 + 0x764) = arg1[0x9e].d
    *(arg1 + 0x76c) = *(arg1 + 0x4f4)
    arg1[0xed].d = arg1[0x9f].d
    arg1[0xec].d = *(arg1 + 0x4fc)
    arg1[0xea].d = arg1[0xa2].d
    *(arg1 + 0x754) = *(arg1 + 0x514)
    arg1[0xe8].d = *(arg1 + 0x504)
    *(arg1 + 0x744) = arg1[0xa1].d
    arg1[0xe9].d = *(arg1 + 0x50c)
    result = *(arg1 + 0x5e4)
    arg1[0xeb].d = result
    *(arg1 + 0x75c) = arg1[0xbd].d.d

return result

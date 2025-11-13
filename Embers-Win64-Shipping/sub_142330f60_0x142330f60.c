// 函数: sub_142330f60
// 地址: 0x142330f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_28 = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
uint32_t zmm8[0x4]
uint32_t var_48[0x4] = zmm8
float var_e8[0x4]
int64_t rax_1 = __security_cookie ^ &var_e8
float zmm0[0x4] = zx.o(0)
int32_t r9 = *(arg2 + 0xa8)
float zmm2[0x4] = zx.o(0)
int32_t rdx = 0
float var_c8[0x4]
__builtin_memset(&var_c8, 0, 0x60)
float var_b8[0x4]
float zmm1[0x4]
double zmm3[0x2]
uint128_t zmm4
double zmm5[0x2]

if (r9 != 0)
    int64_t r10_1 = *(arg2 + 0x80)
    zmm8 = data_142d57d00
    int64_t rbx_1 = *arg1
    int64_t r11_1 = *(arg2 + 0x70)
    uint32_t zmm9[0x4] = data_142d3f770
    
    do
        int64_t rcx = sx.q(rdx)
        int64_t rax_4 = rcx * 2
        uint64_t r8 = 0
        zmm7 = *(rbx_1 + (rcx << 2))
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm1 = *(r11_1 + (rax_4 << 3))
        var_e8 = *(r10_1 + (rax_4 << 3))
        float var_d8[0x4] = zmm1
        
        do
            int64_t rax_5 = sx.q(r8.d)
            zmm2 = zx.o(0)
            zmm2[0].q = zmm7.q
            int128_t var_a8
            zmm0 = *(&var_a8 + (r8 << 3))
            zmm6 = zx.o(*(&var_e8 + (rax_5 << 2)))
            zmm4 = zx.o(*(&var_d8 + (rax_5 << 2)))
            zmm1 = _mm_mul_ps(zmm6, zmm2)
            zmm6 = _mm_and_ps(zmm6, zmm9)
            zmm2 = zx.o(0)
            zmm5 = _mm_cvtps_pd(zmm1[0].q)
            zmm1 = zmm4
            zmm4 = _mm_and_ps(zmm4, zmm9)
            zmm5 = _mm_add_pd(zmm5, zmm0)
            zmm2[0].q = zmm7.q
            int128_t var_88
            zmm0 = *(&var_88 + (r8 << 3))
            zmm1 = _mm_mul_ps(zmm1, zmm2)
            *(&var_a8 + (r8 << 3)) = zmm5
            zmm6 = _mm_max_ps(zmm6, zmm4)
            zmm3 = _mm_cvtps_pd(zmm1[0].q)
            zmm1 = *(&var_c8 + (r8 << 3))
            zmm3 = _mm_add_pd(zmm3, zmm0)
            zmm5 = _mm_and_ps(zmm5, zmm8)
            *(&var_88 + (r8 << 3)) = zmm3
            zmm3 = _mm_and_ps(zmm3, zmm8)
            *(&var_c8 + (r8 << 3)) =
                _mm_max_pd(zmm1, _mm_max_pd(_mm_cvtps_pd(zmm6.q), _mm_max_pd(zmm5, zmm3)))
            r8 = zx.q(r8.d + 2)
        while (r8.d u< 4)
        
        rdx += 1
    while (rdx u< r9)
    
    zmm2 = var_b8
    zmm0 = var_c8

zmm5 = 0x3ff0000000000000
int64_t rcx_1 = 0
zmm1 = 0x43e0000000000000
zmm0[0].q = zmm0[0].q f+ zmm5[0]

if (not(zmm0[0].q f< zmm1[0].q))
    zmm0[0].q = zmm0[0].q f- zmm1[0].q
    
    if (not(zmm0[0].q f>= zmm1[0].q))
        rcx_1 = -0x8000000000000000

zmm8 = 0x43f0000000000000
int64_t rax_6 = int.q(zmm0[0].q)
zmm4.q = float.d(rax_6 + rcx_1)

if (rax_6 + rcx_1 s< 0)
    zmm4.q = zmm4.q f+ zmm8[0].q

zmm7 = 0x4170000000000000
int64_t rcx_2 = 0
zmm3 = zx.o(var_c8[2].q)
zmm7[0].q = zmm7[0].q f/ zmm4.q
zmm3[0] = zmm3[0] + zmm5[0]
zmm0 = _mm_cvtpd_ps(zmm7)
bool cond:1 = zmm3[0] f< zmm1[0].q
var_e8[0] = zmm0[0]

if (not(cond:1))
    zmm3[0] = zmm3[0] f- zmm1[0].q
    
    if (not(zmm3[0] f>= zmm1[0].q))
        rcx_2 = -0x8000000000000000

int64_t rax_8 = int.q(zmm3[0])
zmm6.q = float.d(rax_8 + rcx_2)

if (rax_8 + rcx_2 s< 0)
    zmm6.q = zmm6.q f+ zmm8[0].q

zmm2[0].q = zmm2[0].q f+ zmm5[0]
zmm7[0].q = zmm7[0].q f/ zmm6.q
int64_t rcx_3 = 0
bool cond:3 = zmm2[0].q f< zmm1[0].q
var_e8[1] = _mm_cvtpd_ps(zmm7)[0]

if (not(cond:3))
    zmm2[0].q = zmm2[0].q f- zmm1[0].q
    
    if (not(zmm2[0].q f>= zmm1[0].q))
        rcx_3 = -0x8000000000000000

int64_t rax_10 = int.q(zmm2[0].q)
zmm3 = zx.o(0)
zmm3[0] = float.d(rax_10 + rcx_3)

if (rax_10 + rcx_3 s< 0)
    zmm3[0] = zmm3[0] f+ zmm8[0].q

zmm2 = zx.o(var_b8[2].q)
zmm7[0].q = zmm7[0].q f/ zmm3[0]
int64_t rcx_4 = 0
zmm2[0].q = zmm2[0].q f+ zmm5[0]
zmm0 = _mm_cvtpd_ps(zmm7)
bool cond:5 = zmm2[0].q f< zmm1[0].q
var_e8[2] = zmm0[0]

if (not(cond:5))
    zmm2[0].q = zmm2[0].q f- zmm1[0].q
    
    if (not(zmm2[0].q f>= zmm1[0].q))
        rcx_4 = -0x8000000000000000

int64_t rax_12 = int.q(zmm2[0].q)
zmm5 = zx.o(0)
int64_t result = rax_12 + rcx_4
zmm5[0] = float.d(result)

if (rax_12 + rcx_4 s< 0)
    zmm5[0] = zmm5[0] f+ zmm8[0].q

zmm1 = var_e8
zmm7[0].q = zmm7[0].q f/ zmm5[0]
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x93)
zmm1[0] = _mm_cvtpd_ps(zmm7)[0]
zmm0 = 0x3e70000000000000
zmm4.q = zmm4.q f* zmm0[0].q
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x39)
zmm3[0] = zmm3[0] f* zmm0[0].q
zmm4 = _mm_cvtpd_ps(zmm4)
*arg3 = zmm1
_mm_shuffle_ps(zmm4, zmm4, 0xe1)
zmm2 = _mm_cvtpd_ps(zmm3)
zmm6.q = zmm6.q f* zmm0[0].q
zmm5[0] = zmm5[0] f* zmm0[0].q
zmm1 = _mm_cvtpd_ps(zmm6)
zmm3 = _mm_cvtpd_ps(zmm5)
zmm4.d = zmm1[0]
_mm_shuffle_ps(zmm4, zmm4, 0xc6)
zmm4.d = zmm2[0]
_mm_shuffle_ps(zmm4, zmm4, 0x27)
zmm4.d = zmm3[0].d
*arg4 = _mm_shuffle_ps(zmm4, zmm4, 0x39)
__security_check_cookie(rax_1 ^ &var_e8)
return result

// 函数: sub_141a69930
// 地址: 0x141a69930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3
zmm3.q = 0x3ff0000000000000 f/ arg1[3]
uint128_t zmm4
zmm4.q = zmm3.q f* arg1[2]
uint128_t zmm2
zmm2.q = zmm3.q f* arg1[1]
zmm3.q = zmm3.q f* *arg1
uint32_t zmm7[0x4]
uint32_t var_28[0x4] = zmm7
uint128_t zmm1
zmm1.q = zmm4.q f* zmm4.q
uint128_t zmm10 = zmm4
zmm4.q = zmm4.q f* 0.07407407407407407
uint32_t zmm0[0x4] = zmm1
zmm0[0].q = zmm0[0].q f* 0.1111111111111111
uint128_t zmm11 = 0x3fd5555555555555
zmm4.q = zmm4.q f* zmm1.q
uint128_t zmm6
zmm6.q = zmm2.q f* zmm11.q
zmm10.q = zmm10.q f* zmm11.q
zmm6.q = zmm6.q f- zmm0[0].q
zmm10 = _mm_unpacklo_pd(zmm10, zmm10.q)
zmm0 = zmm10
zmm0[0].q = zmm0[0].q f* zmm2.q
zmm2 = 0x7fffffffffffffff
zmm1.q = zmm6.q f* zmm6.q
zmm4.q = zmm4.q f- zmm0[0].q
zmm1.q = zmm1.q f* zmm6.q
zmm4.q = zmm4.q f+ zmm3.q
zmm3 = 0x3e45798ee0000000
uint128_t zmm8 = zmm4
zmm4.q = zmm4.q f* zmm4.q
zmm8.q = zmm8.q f* 0.5
zmm4.q = zmm4.q f* 0.25
zmm4.q = zmm4.q f+ zmm1.q
int32_t rdi

if (_mm_and_ps(zmm4, zmm2)[0].q f> zmm3.q)
    zmm7 = zx.o(0)
    uint128_t zmm9
    
    if (zmm4.q f>= 0.0)
        uint128_t temp0_5 = _mm_sqrt_pd(zmm4)
        uint128_t zmm12 = -0x8000000000000000
        zmm0 = temp0_5
        zmm0[0].q = zmm0[0].q f- zmm8.q
        zmm0[0].q f- 0.0
        
        if (not(zmm0[0].q f<= 0.0))
            zmm6 = pow(zmm0[0].q, zmm11.q)
        else if (zmm0[0].q f>= 0.0)
            zmm6 = zx.o(0)
        else
            zmm6 = pow((zmm0 ^ zmm12)[0].q, zmm11.q) ^ zmm12
        
        zmm9.q = temp0_5.q f+ zmm8.q
        zmm9.q f- 0.0
        
        if (not(zmm9.q f<= 0.0))
            zmm7 = pow(zmm9[0].q, zmm11.q)
        else if (not(zmm9.q f>= 0.0))
            zmm7 = pow((zmm9 ^ zmm12)[0].q, zmm11.q) ^ zmm12
        
        zmm6.q = zmm6.q f- zmm7[0].q
        rdi = 1
    else
        zmm9 = -0x8000000000000000
        zmm0 = -0x4010000000000000
        zmm1 ^= zmm9
        zmm1 = _mm_sqrt_sd(zmm1.q, zmm1.q)
        zmm0[0].q = zmm0[0].q f/ zmm1.q
        zmm0[0].q = zmm0[0].q f* zmm8.q
        zmm8.q = acos(zmm0[0].q).q f* zmm11.q
        zmm7 = _mm_sqrt_sd(zx.o(0)[0].q, (zmm6 ^ zmm9).q)
        uint128_t zmm0_1
        zmm0_1.q = zmm8.q f+ 1.0471975803375244
        zmm7[0].q = zmm7[0].q f+ zmm7[0].q
        uint128_t zmm0_2
        zmm0_2.q = cos(zmm0_1.q).q f* zmm7[0].q
        arg2[1] = (zmm0_2 ^ zmm9).q
        zmm0_2.q = zmm8.q f- 1.0471975803375244
        uint128_t zmm0_3
        zmm0_3.q = cos(zmm0_2.q).q f* zmm7[0].q
        rdi = 3
        arg2[2] = (zmm0_3 ^ zmm9).q
        zmm6.q = cos(zmm8.q).q f* zmm7[0].q
else
    zmm6 = zx.o(0)
    
    if (_mm_and_ps(zmm8, zmm2)[0].q f> zmm3.q)
        zmm7 = -0x8000000000000000
        zmm8 ^= zmm7
        zmm8.q f- zmm6.q
        
        if (not(zmm8.q f<= zmm6.q))
            zmm6 = pow(zmm8[0].q, zmm11.q)
        else if (not(zmm8.q f>= zmm6.q))
            zmm6 = pow((zmm8 ^ zmm7)[0].q, zmm11.q) ^ zmm7
        
        rdi = 2
        zmm0 = zmm6 ^ zmm7
        zmm6.q = zmm6.q f+ zmm6.q
        arg2[1] = zmm0.q
    else
        rdi = 1

*arg2 = zmm6.q
int64_t i_1 = 0
uint64_t r8 = zx.q(rdi)

if (r8 u>= 4)
    void* rax_1 = &arg2[2]
    int64_t i_2 = ((r8 - 4) u>> 2) + 1
    i_1 = i_2 << 2
    int64_t i
    
    do
        *(rax_1 - 0x10) = _mm_sub_pd(*(rax_1 - 0x10), zmm10)
        *rax_1 = _mm_sub_pd(*rax_1, zmm10)
        rax_1 += 0x20
        i = i_2
        i_2 -= 1
    while (i != 1)

for (; i_1 s< r8; i_1 += 1)
    zmm0 = zx.o(arg2[i_1])
    zmm0[0].q = zmm0[0].q f- zmm10.q
    arg2[i_1] = zmm0.q

return zx.q(rdi)

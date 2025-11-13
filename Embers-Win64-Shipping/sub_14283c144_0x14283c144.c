// 函数: sub_14283c144
// 地址: 0x14283c144
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6
void* rdx = &data_143fe79f4
uint128_t zmm7
uint128_t var_28 = zmm7
int32_t i = 0
double zmm8[0x2]
double var_38[0x2] = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9
void* rax = &data_143fe81f4
uint128_t zmm10 = 0x3ff0000000000000
double result
double zmm1[0x2]

do
    double zmm5[0x2] = zx.o(0)
    zmm5[0] = float.d(i)
    i += 1
    zmm5[0] = zmm5[0] * 0.00390625
    zmm5[0] = zmm5[0] * 0.5
    zmm5[0] = zmm5[0] * 1.5
    result = zmm10.q - zmm5[0]
    zmm5[0] = zmm5[0] * zmm5[0]
    uint128_t zmm2
    zmm2.q = 0x4000000000000000 f- zmm5[0]
    zmm5[0] = zmm5[0] - 2.5
    zmm2.q = zmm2.q f* zmm5[0]
    zmm2.q = zmm2.q f+ 0.5
    zmm2.q = zmm2.q f* zmm5[0]
    result.d = fconvert.s((result * zmm5[0] - 0.5) * zmm5[0])
    *(rax - 4) = result.d
    zmm5[0] = zmm5[0] * zmm5[0] * zmm5[0]
    zmm5[0] = zmm5[0] f+ zmm10.q
    zmm1 = zmm10
    *rax = _mm_cvtpd_ps(zmm5).d
    zmm1[0] = zmm1[0] - zmm5[0]
    *(rax + 4) = _mm_cvtpd_ps(zmm2).d
    zmm5[0] = zmm5[0] * (zmm5[0] f- zmm10.q)
    *(rax + 8) = _mm_cvtpd_ps(zmm5).d
    result.d = fconvert.s(zmm1[0])
    rax += 0x10
    zmm1 = _mm_cvtpd_ps(zmm5)
    *(rdx - 4) = result.d
    *rdx = zmm1[0].d
    rdx += 8
while (i s< 0x100)

int32_t i_1 = 0
int32_t* rsi = &data_143feadd4

do
    int32_t j = 0
    int32_t* rbp_1 = rsi
    zmm9.q = _mm_cvtepi32_pd(zx.q(i_1)).q f- 3.5
    
    do
        zmm7.q = _mm_cvtepi32_pd(zx.q(j)).q f* 0.00390625
        zmm7.q = zmm7.q f+ zmm9.q
        
        if (fabs(zmm7.q) <= 9.9999999999999995e-07)
            zmm8 = zmm10
        else
            zmm6.q = zmm7.q f* 3.1415926535897931
            zmm7.q = zmm7.q f* 6.2831853071795862
            zmm1 = zx.o(0)
            zmm1[0].d = fconvert.s(sin(zmm6.q))
            zmm7.q = zmm7.q f/ 7.0
            zmm8 = _mm_cvtps_pd(zmm1[0])
            zmm8[0] = zmm8[0] f/ zmm6.q
            result = (cos(zmm7.q) f+ zmm10.q) * 0.5
            zmm8[0] = zmm8[0] * result
        
        j += 1
        result.d = fconvert.s(zmm8[0])
        *rbp_1 = result.d
        rbp_1 -= 0x1c
    while (j s< 0x100)
    
    i_1 += 1
    rsi = &rsi[1]
while (i_1 s< 7)

return result

// 函数: sub_14283db70
// 地址: 0x14283db70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_28 = zmm7
uint128_t zmm8
uint128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9
uint128_t zmm10
uint128_t var_58 = zmm10
uint128_t zmm11
uint128_t var_68 = zmm11
uint128_t zmm12
uint128_t var_78 = zmm12
uint128_t zmm13
uint128_t var_88 = zmm13
uint128_t zmm14
uint128_t var_98 = zmm14
uint128_t zmm15
uint128_t var_a8 = zmm15
int32_t* result
int64_t r8
result, r8 = malloc(0xbd8)

if (result != 0)
    memset(result, 0, 0xbd8)
    zmm10 = 0x4004000000000000
    void* rdi_1 = &result[0x75]
    int32_t i = 0
    result[0x74] = arg1.d
    
    do
        int32_t j = 0
        zmm8.q = _mm_cvtepi32_pd(zx.q(i)).q f- zmm10.q
        
        do
            zmm7.q = _mm_cvtepi32_pd(zx.q(j)).q f* 0x3f80000000000000
            zmm7.q = zmm7.q f+ zmm8.q
            double zmm0
            
            if (0x3eb0c6f7a0b5ed8d f<= fabs(zmm7.q))
                uint128_t zmm6
                zmm6.q = zmm7.q f* 0x400921fb54442d18
                double zmm1[0x2] = zx.o(0)
                zmm7.q = zmm7.q f* 0x401921fb54442d18
                zmm1[0].d = fconvert.s(sin(zmm6.q))
                zmm7.q = zmm7.q f/ 0x4014000000000000
                double zmm2[0x2] = _mm_cvtps_pd(zmm1[0])
                zmm2[0] = zmm2[0] f/ zmm6.q
                *rdi_1 = _mm_cvtpd_ps(zmm2)[0].d
                zmm0 = cos(zmm7.q)
                zmm1 = _mm_cvtps_pd((*rdi_1)[0])
                zmm1[0] = zmm1[0] * (zmm0 f+ 0x3ff0000000000000) * 0.5
                zmm0 = _mm_cvtpd_ps(zmm1)
            else
                zmm0 = 0x3f800000
            
            *rdi_1 = zmm0.d
            j += 1
            rdi_1 += 4
        while (j s< 0x80)
        
        zmm10 = 0x4004000000000000
        i += 1
    while (i s< 5)
    
    int64_t rax_1
    int64_t r8_1
    rax_1, r8_1 = malloc(sx.q(int.d(_mm_cvtps_pd(result[0x74]) / 0.28999999999999998)) << 2)
    *(result + 0x1c8) = rax_1
    
    if (rax_1 != 0)
        int64_t rax_2
        rax_2, r8_1 = malloc(0x2000)
        *(result + 0x28) = rax_2
        
        if (rax_2 != 0)
            sub_14283d558(result)
            return result
    
    sub_142833a04(0, "chorus: Out of memory", r8_1)
    sub_14283d518(result)
else
    sub_142833a04(0, "chorus: Out of memory", r8)

return nullptr

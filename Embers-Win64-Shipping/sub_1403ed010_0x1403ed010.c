// 函数: sub_1403ed010
// 地址: 0x1403ed010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rbx = sx.q(arg2)
void var_e8
void* rdi = &var_e8 + ((zx.q(rbx.d) & 1) << 6)
int128_t* result = memcpy(rdi, arg1, (rbx << 2).d)
int32_t i = rbx.d - 1
int64_t i_1 = sx.q(i)
uint128_t zmm6 = 0x3ff0000000000000
uint128_t zmm10 = 0x3fefff2e40000000
uint128_t zmm8 = -0x401000d1c0000000
uint128_t zmm7 = zmm6
int128_t zmm0_1
uint128_t zmm1

while (i s> 0)
    int128_t zmm4_1
    zmm4_1.q = fconvert.d((*(rdi + (i_1 << 2)) ^ 0x80000000).d)
    
    if (zmm4_1.q f> zmm10.q)
        goto label_1403ed276
    
    if (zmm8.q f> zmm4_1.q)
        goto label_1403ed276
    
    void* r8_1 = rdi
    result = (zx.q(i) & 1) << 6
    int64_t r11_1 = 0
    zmm0_1.q = zmm4_1.q f* zmm4_1.q
    zmm1.q = zmm6.q f- zmm0_1.q
    rdi = &var_e8 + result
    double zmm5_1 = zmm6.q f/ zmm1.q
    zmm7.q = zmm7.q f* zmm1.q
    
    if (i_1 s>= 4)
        int64_t r10_2 = r8_1 - rdi
        result = rdi + 4
        int64_t j_2 = ((i_1 - 4) u>> 2) + 1
        void* rdx_2 = r8_1 + ((i_1 - 2) << 2)
        r11_1 = j_2 << 2
        int64_t j
        
        do
            zmm0_1 = *(rdx_2 + 4)
            zmm1 = *(result + r10_2 - 4)
            result = &result[1]
            rdx_2 -= 0x10
            zmm1 = _mm_cvtps_pd(zmm1.q)
            zmm0_1.q = _mm_cvtps_pd(zmm0_1.q).q f* zmm4_1.q
            zmm1.q = zmm1.q f- zmm0_1.q
            zmm1.q = zmm1.q f* zmm5_1
            *(result - 0x14) = _mm_cvtpd_ps(zmm1).d
            double zmm2[0x2] = *(result + r10_2 - 0x10)
            zmm1 = _mm_cvtps_pd((*(rdx_2 + 0x10)).q)
            zmm2 = _mm_cvtps_pd(zmm2[0])
            zmm1.q = zmm1.q f* zmm4_1.q
            zmm2[0] = zmm2[0] f- zmm1.q
            zmm2[0] = zmm2[0] * zmm5_1
            result[-1].d = _mm_cvtpd_ps(zmm2).d
            double zmm3[0x2] = *(result + r10_2 - 0xc)
            zmm1 = _mm_cvtps_pd((*(rdx_2 + 0xc)).q)
            zmm3 = _mm_cvtps_pd(zmm3[0])
            zmm1.q = zmm1.q f* zmm4_1.q
            zmm3[0] = zmm3[0] f- zmm1.q
            zmm3[0] = zmm3[0] * zmm5_1
            *(result - 0xc) = _mm_cvtpd_ps(zmm3).d
            zmm1 = *(rdx_2 + 8)
            zmm2 = _mm_cvtps_pd((*(result + r10_2 - 8))[0])
            zmm1.q = _mm_cvtps_pd(zmm1.q).q f* zmm4_1.q
            zmm2[0] = zmm2[0] f- zmm1.q
            zmm2[0] = zmm2[0] * zmm5_1
            *(result - 8) = _mm_cvtpd_ps(zmm2).d
            j = j_2
            j_2 -= 1
        while (j != 1)
    
    if (r11_1 s< i_1)
        result = rdi + (r11_1 << 2)
        int64_t j_3 = i_1 - r11_1
        void* rcx_4 = r8_1 + ((j_3 - 1) << 2)
        int64_t j_1
        
        do
            zmm0_1 = *rcx_4
            zmm1 = *(result + r8_1 - rdi)
            result += 4
            rcx_4 -= 4
            zmm1 = _mm_cvtps_pd(zmm1.q)
            zmm0_1.q = _mm_cvtps_pd(zmm0_1.q).q f* zmm4_1.q
            zmm1.q = zmm1.q f- zmm0_1.q
            zmm1.q = zmm1.q f* zmm5_1
            *(result - 4) = _mm_cvtpd_ps(zmm1).d
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
    
    i -= 1
    i_1 -= 1

zmm1.q = fconvert.d((*rdi ^ 0x80000000).d)

if (not(zmm1.q f> zmm10.q) && not(zmm8.q f> zmm1.q))
    zmm1.q = zmm1.q f* zmm1.q
    zmm6.q = zmm6.q f- zmm1.q
    zmm6.q = zmm6.q f* zmm7.q
    zmm0_1.d = fconvert.s(zmm6.q)

label_1403ed276:
__security_check_cookie(rax_1 ^ &var_108)
return result

// 函数: sub_1427858c0
// 地址: 0x1427858c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2))
int64_t var_330_1 = arg1 - 0x2c + sx.q(arg2) * 0x2c
int64_t var_338 = arg1
float zmm0_1 = logf(zmm0.d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x2c).d + 1
    
    if (rbp_1 == 0)
    label_142785c4c:
        sub_142782690(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm0_2
            uint128_t zmm1
            uint128_t zmm3
            int128_t zmm4_1
            float zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x2c)
                    uint128_t* rdx_14 = r11_1
                    void* rax_29 = r11_1 + 0x2c
                    
                    if (r11_1 + 0x2c u<= i)
                        void* rcx_17 = &r11_1[4]
                        
                        do
                            zmm0_2 = rdx_14[1].d
                            zmm2 = *(rdx_14 + 0xc)
                            zmm3 = *(rcx_17 - 4)
                            zmm5_1 = *(rcx_17 - 8)
                            zmm1 = *(rdx_14 + 0x14)
                            zmm4_1 = *rcx_17
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm0_2.d = zmm0_2.d f* zmm0_2.d
                            zmm2.d = zmm2.d f+ zmm0_2.d
                            zmm3.d = zmm3.d f* zmm3.d
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm4_1.d = zmm4_1.d f* zmm4_1.d
                            zmm2.d = zmm2.d f+ zmm1.d
                            
                            if (_mm_sqrt_ss(zmm2.d, zmm2.d).d
                                    f> _mm_sqrt_ss(0, zmm5_1 * zmm5_1 f+ zmm3.d f+ zmm4_1.d).d)
                                rdx_14 = rax_29
                            
                            rax_29 += 0x2c
                            rcx_17 += 0x2c
                        while (rax_29 u<= i)
                    
                    if (rdx_14 != i)
                        int32_t rcx_18 = *(rdx_14 + 0x28)
                        zmm3 = *rdx_14
                        zmm4_1 = rdx_14[1]
                        zmm2 = zx.o(rdx_14[2].q)
                        *rdx_14 = *i
                        rdx_14[1] = *(i + 0x10)
                        rdx_14[2].q = *(i + 0x20)
                        *(rdx_14 + 0x28) = *(i + 0x28)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm2.q
                        *(i + 0x28) = rcx_18
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rdx_6 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x2c + r11_1
            
            if (rdx_6 != r11_1)
                int32_t rcx_4 = *(rdx_6 + 0x28)
                zmm3 = *rdx_6
                zmm4_1 = *(rdx_6 + 0x10)
                zmm2 = zx.o(*(rdx_6 + 0x20))
                *rdx_6 = *r11_1
                *(rdx_6 + 0x10) = r11_1[1]
                *(rdx_6 + 0x20) = r11_1[2].q
                *(rdx_6 + 0x28) = *(r11_1 + 0x28)
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2].q = zmm2.q
                *(r11_1 + 0x28) = rcx_4
            
            uint128_t* r10_1 = i + 0x2c
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 += 0x2c
                
                if (r9_1 u<= i)
                    zmm0_2 = r11_1[1].d
                    zmm1 = *(r11_1 + 0x14)
                    zmm2 = *(r11_1 + 0xc)
                    zmm3 = r9_1[1].d
                    zmm5_1 = *(r9_1 + 0xc)
                    zmm4_1 = *(r9_1 + 0x14)
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm2.d = zmm2.d f+ zmm0_2.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    
                    if (_mm_sqrt_ss(0, zmm2.d).d
                            f<= _mm_sqrt_ss(0, zmm5_1 * zmm5_1 f+ zmm3.d f+ zmm4_1.d).d)
                        continue
                
                do
                    r10_1 -= 0x2c
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    zmm0_2 = r10_1[1].d
                    zmm1 = *(r10_1 + 0x14)
                    zmm2 = *(r10_1 + 0xc)
                    zmm3 = r11_1[1].d
                    zmm5_1 = *(r11_1 + 0xc)
                    zmm4_1 = *(r11_1 + 0x14)
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm2.d = zmm2.d f+ zmm0_2.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm1 = _mm_sqrt_ss(0, zmm2.d)
                    zmm0_2 = _mm_sqrt_ss(0, zmm5_1 * zmm5_1 f+ zmm3.d f+ zmm4_1.d)
                while (zmm1.d f<= zmm0_2.d)
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    int32_t rcx_5 = *(r9_1 + 0x28)
                    zmm3 = *r9_1
                    zmm4_1 = r9_1[1]
                    zmm2 = zx.o(r9_1[2].q)
                    *r9_1 = *r10_1
                    r9_1[1] = r10_1[1]
                    r9_1[2].q = r10_1[2].q
                    *(r9_1 + 0x28) = *(r10_1 + 0x28)
                    *r10_1 = zmm3
                    r10_1[1] = zmm4_1
                    r10_1[2].q = zmm2.q
                    *(r10_1 + 0x28) = rcx_5
            
            if (r11_1 != r10_1)
                int32_t rcx_6 = *(r11_1 + 0x28)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm2 = zx.o(r11_1[2].q)
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2].q = r10_1[2].q
                *(r11_1 + 0x28) = *(r10_1 + 0x28)
                *r10_1 = zmm3
                r10_1[1] = zmm4_1
                r10_1[2].q = zmm2.q
                *(r10_1 + 0x28) = rcx_6
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x2c) s/ 0x2c s< (i - r9_1) s/ 0x2c)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x2c u>= r10_1)
                    break
                
                i = r10_1 - 0x2c
            else
                if (r11_1 + 0x2c u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0x2c
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0x2c).d + 1
            
            if (rbp_1 == 0)
                goto label_142785c4c
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)

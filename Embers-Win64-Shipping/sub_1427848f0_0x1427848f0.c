// 函数: sub_1427848f0
// 地址: 0x1427848f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3d8
int64_t rax_2 = __security_cookie ^ &var_3d8
int128_t zmm6
int128_t var_38_1 = zmm6
int128_t zmm7
int128_t var_48_1 = zmm7
int128_t zmm8
int128_t var_58_1 = zmm8
int128_t zmm9
int128_t var_68_1 = zmm9
int128_t zmm10
int128_t var_78_1 = zmm10
int128_t zmm11
int128_t var_88_1 = zmm11
int64_t var_398 = arg1
int64_t var_390_1 = arg1 - 0x58 + sx.q(arg2) * 0x58
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_388_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_380
memset(&var_380, 0, 0x2e8)
int64_t* r14_1 = &var_398

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x58).d + 1
    
    if (rbp_1 == 0)
    label_142784df9:
        sub_142781b00(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm0_2
            uint128_t zmm1
            uint128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x58)
                    uint128_t* rax_28 = r11_1
                    uint128_t* rcx_14 = r11_1 + 0x58
                    
                    if (r11_1 + 0x58 u<= i)
                        void* rdx_12 = r11_1 + 0x84
                        
                        do
                            zmm0_2 = *(rax_28 + 0x1c)
                            zmm1 = rax_28[2].d
                            zmm3 = *(rax_28 + 0x28)
                            zmm6 = *(rax_28 + 0x24)
                            zmm2 = *(rax_28 + 0x18)
                            zmm4_1 = *(rax_28 + 0x2c)
                            zmm9 = *(rdx_12 - 4)
                            zmm11 = *(rdx_12 - 8)
                            zmm5_1 = *(rdx_12 - 0x10)
                            zmm8 = *(rdx_12 - 0x14)
                            zmm10 = *rdx_12
                            zmm7 = *(rdx_12 - 0xc)
                            zmm0_2.d = zmm0_2.d f* zmm0_2.d
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm2.d = zmm2.d f+ zmm0_2.d
                            zmm6.d = zmm6.d f* zmm6.d
                            zmm3.d = zmm3.d f* zmm3.d
                            zmm4_1.d = zmm4_1.d f* zmm4_1.d
                            zmm2.d = zmm2.d f+ zmm1.d
                            zmm8.d = zmm8.d f* zmm8.d
                            zmm6.d = zmm6.d f+ zmm3.d
                            zmm11.d = zmm11.d f* zmm11.d
                            zmm5_1.d = zmm5_1.d f* zmm5_1.d
                            zmm6.d = zmm6.d f+ zmm4_1.d
                            zmm9.d = zmm9.d f* zmm9.d
                            zmm8.d = zmm8.d f+ zmm5_1.d
                            zmm7.d = zmm7.d f* zmm7.d
                            zmm11.d = zmm11.d f+ zmm9.d
                            zmm10.d = zmm10.d f* zmm10.d
                            zmm8.d = zmm8.d f+ zmm7.d
                            zmm11.d = zmm11.d f+ zmm10.d
                            
                            if (_mm_max_ss(_mm_sqrt_ss(zmm2.d, zmm2.d).d, _mm_sqrt_ss(0, zmm6.d).d)
                                    .d f> _mm_max_ss(_mm_sqrt_ss(0, zmm8.d).d, _mm_sqrt_ss(0, zmm11.d).d).d)
                                rax_28 = rcx_14
                            
                            rcx_14 += 0x58
                            rdx_12 += 0x58
                        while (rcx_14 u<= i)
                    
                    if (rax_28 != i)
                        zmm3 = *rax_28
                        zmm4_1 = rax_28[1]
                        zmm5_1 = rax_28[2]
                        zmm6 = rax_28[3]
                        zmm7 = rax_28[4]
                        zmm2 = zx.o(rax_28[5].q)
                        *rax_28 = *i
                        rax_28[1] = *(i + 0x10)
                        rax_28[2] = *(i + 0x20)
                        rax_28[3] = *(i + 0x30)
                        rax_28[4] = *(i + 0x40)
                        rax_28[5].q = *(i + 0x50)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm5_1
                        *(i + 0x30) = zmm6
                        *(i + 0x40) = zmm7
                        *(i + 0x50) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_15 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x58 + r11_1
            
            if (rax_15 != r11_1)
                zmm3 = *rax_15
                zmm4_1 = *(rax_15 + 0x10)
                zmm5_1 = *(rax_15 + 0x20)
                zmm6 = *(rax_15 + 0x30)
                zmm7 = *(rax_15 + 0x40)
                zmm2 = zx.o(*(rax_15 + 0x50))
                *rax_15 = *r11_1
                *(rax_15 + 0x10) = r11_1[1]
                *(rax_15 + 0x20) = r11_1[2]
                *(rax_15 + 0x30) = r11_1[3]
                *(rax_15 + 0x40) = r11_1[4]
                *(rax_15 + 0x50) = r11_1[5].q
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2] = zmm5_1
                r11_1[3] = zmm6
                r11_1[4] = zmm7
                r11_1[5].q = zmm2.q
            
            uint128_t* r9_1 = i + 0x58
            uint128_t* r10_1 = r11_1
            
            while (true)
                r10_1 += 0x58
                
                if (r10_1 u<= i)
                    zmm0_2 = *(r11_1 + 0x1c)
                    zmm1 = r11_1[2].d
                    zmm3 = *(r11_1 + 0x28)
                    zmm7 = *(r11_1 + 0x24)
                    zmm2 = *(r11_1 + 0x18)
                    zmm5_1 = *(r11_1 + 0x2c)
                    zmm9 = *(r10_1 + 0x28)
                    zmm11 = *(r10_1 + 0x24)
                    zmm4_1 = *(r10_1 + 0x1c)
                    zmm8 = *(r10_1 + 0x18)
                    zmm10 = *(r10_1 + 0x2c)
                    zmm6 = r10_1[2].d
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm2.d = zmm2.d f+ zmm0_2.d
                    zmm7.d = zmm7.d f* zmm7.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm8.d = zmm8.d f* zmm8.d
                    zmm7.d = zmm7.d f+ zmm3.d
                    zmm11.d = zmm11.d f* zmm11.d
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm7.d = zmm7.d f+ zmm5_1.d
                    zmm9.d = zmm9.d f* zmm9.d
                    zmm8.d = zmm8.d f+ zmm4_1.d
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm11.d = zmm11.d f+ zmm9.d
                    zmm10.d = zmm10.d f* zmm10.d
                    zmm8.d = zmm8.d f+ zmm6.d
                    zmm11.d = zmm11.d f+ zmm10.d
                    
                    if (_mm_max_ss(_mm_sqrt_ss(zmm2.d, zmm2.d).d, _mm_sqrt_ss(0, zmm7.d).d).d
                            f<= _mm_max_ss(_mm_sqrt_ss(0, zmm8.d).d, _mm_sqrt_ss(0, zmm11.d).d).d)
                        continue
                
                do
                    r9_1 -= 0x58
                    
                    if (r9_1 u<= r11_1)
                        break
                    
                    zmm0_2 = *(r9_1 + 0x1c)
                    zmm1 = r9_1[2].d
                    zmm3 = *(r9_1 + 0x28)
                    zmm7 = *(r9_1 + 0x24)
                    zmm2 = *(r9_1 + 0x18)
                    zmm5_1 = *(r9_1 + 0x2c)
                    zmm9 = *(r11_1 + 0x28)
                    zmm11 = *(r11_1 + 0x24)
                    zmm4_1 = *(r11_1 + 0x1c)
                    zmm8 = *(r11_1 + 0x18)
                    zmm10 = *(r11_1 + 0x2c)
                    zmm6 = r11_1[2].d
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm2.d = zmm2.d f+ zmm0_2.d
                    zmm7.d = zmm7.d f* zmm7.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm8.d = zmm8.d f* zmm8.d
                    zmm7.d = zmm7.d f+ zmm3.d
                    zmm11.d = zmm11.d f* zmm11.d
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm7.d = zmm7.d f+ zmm5_1.d
                    zmm9.d = zmm9.d f* zmm9.d
                    zmm8.d = zmm8.d f+ zmm4_1.d
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm11.d = zmm11.d f+ zmm9.d
                    zmm10.d = zmm10.d f* zmm10.d
                    zmm8.d = zmm8.d f+ zmm6.d
                    zmm2 = _mm_max_ss(_mm_sqrt_ss(zmm2.d, zmm2.d).d, _mm_sqrt_ss(0, zmm7.d).d)
                    zmm11.d = zmm11.d f+ zmm10.d
                    zmm1 = _mm_max_ss(_mm_sqrt_ss(0, zmm8.d).d, _mm_sqrt_ss(0, zmm11.d).d)
                while (zmm2.d f<= zmm1.d)
                
                if (r10_1 u> r9_1)
                    break
                
                if (r10_1 != r9_1)
                    zmm3 = *r10_1
                    zmm4_1 = r10_1[1]
                    zmm5_1 = r10_1[2]
                    zmm6 = r10_1[3]
                    zmm7 = r10_1[4]
                    zmm2 = zx.o(r10_1[5].q)
                    *r10_1 = *r9_1
                    r10_1[1] = r9_1[1]
                    r10_1[2] = r9_1[2]
                    r10_1[3] = r9_1[3]
                    r10_1[4] = r9_1[4]
                    r10_1[5].q = r9_1[5].q
                    *r9_1 = zmm3
                    r9_1[1] = zmm4_1
                    r9_1[2] = zmm5_1
                    r9_1[3] = zmm6
                    r9_1[4] = zmm7
                    r9_1[5].q = zmm2.q
            
            if (r11_1 != r9_1)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm5_1 = r11_1[2]
                zmm6 = r11_1[3]
                zmm7 = r11_1[4]
                zmm2 = zx.o(r11_1[5].q)
                *r11_1 = *r9_1
                r11_1[1] = r9_1[1]
                r11_1[2] = r9_1[2]
                r11_1[3] = r9_1[3]
                r11_1[4] = r9_1[4]
                r11_1[5].q = r9_1[5].q
                *r9_1 = zmm3
                r9_1[1] = zmm4_1
                r9_1[2] = zmm5_1
                r9_1[3] = zmm6
                r9_1[4] = zmm7
                r9_1[5].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r9_1 - r11_1 - 0x58) s/ 0x58 s< (i - r10_1) s/ 0x58)
                if (i u> r10_1)
                    *r14_1 = r10_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x58 u>= r9_1)
                    break
                
                i = r9_1 - 0x58
            else
                if (r11_1 + 0x58 u< r9_1)
                    *r14_1 = r11_1
                    r14_1[1] = r9_1 - 0x58
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r10_1)
                    break
                
                r11_1 = r10_1
            
            rdx_3 = ((i - r11_1) s/ 0x58).d + 1
            
            if (rbp_1 == 0)
                goto label_142784df9
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_398)
        break

__security_check_cookie(rax_2 ^ &var_3d8)

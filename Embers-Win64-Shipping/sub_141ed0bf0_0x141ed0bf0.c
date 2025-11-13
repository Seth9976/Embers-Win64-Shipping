// 函数: sub_141ed0bf0
// 地址: 0x141ed0bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3c8
int64_t rax_2 = __security_cookie ^ &var_3c8
uint128_t zmm6
uint128_t var_38_1 = zmm6
uint128_t zmm7
uint128_t var_48_1 = zmm7
uint128_t zmm8
uint128_t var_58_1 = zmm8
int128_t zmm9
int128_t var_68_1 = zmm9
int128_t zmm10
int128_t var_78_1 = zmm10
int64_t var_388 = arg1
int64_t var_380_1 = arg1 - 0x88 + sx.q(arg2) * 0x88
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_378_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_370
memset(&var_370, 0, 0x2e8)
int64_t* r14_1 = &var_388

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x88).d + 1
    
    if (rbp_1 == 0)
    label_141ed112a:
        sub_141ed04c0(r11_1, rdx_3, zx.q(arg3), arg4)
    else
        while (true)
            uint128_t zmm0_2
            uint128_t zmm1
            uint128_t zmm3
            uint128_t zmm4_1
            uint128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x88)
                    void* rcx_14 = r11_1
                    void* rdx_12 = r11_1 + 0x88
                    
                    if (r11_1 + 0x88 u<= i)
                        int128_t* rax_30 = *arg4
                        zmm6 = *rax_30
                        zmm7 = *(rax_30 + 4)
                        zmm8 = *(rax_30 + 8)
                        void* rax_31 = r11_1 + 0xac
                        
                        do
                            zmm5_1.d = zmm7.d f- *(rcx_14 + 0x20)
                            zmm2.d = zmm6.d f- *(rcx_14 + 0x1c)
                            zmm4_1.d = zmm7.d f- *(rax_31 - 4)
                            zmm3.d = zmm6.d f- *(rax_31 - 8)
                            zmm5_1.d = zmm5_1.d f* zmm5_1.d
                            zmm0_2.d = zmm8.d f- *(rcx_14 + 0x24)
                            zmm4_1.d = zmm4_1.d f* zmm4_1.d
                            zmm1.d = zmm8.d f- *rax_31
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm3.d = zmm3.d f* zmm3.d
                            zmm5_1.d = zmm5_1.d f+ zmm2.d
                            zmm0_2.d = zmm0_2.d f* zmm0_2.d
                            zmm4_1.d = zmm4_1.d f+ zmm3.d
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                            zmm4_1.d = zmm4_1.d f+ zmm1.d
                            
                            if (zmm4_1.d f> zmm5_1.d)
                                rcx_14 = rdx_12
                            
                            rdx_12 += 0x88
                            rax_31 += 0x88
                        while (rdx_12 u<= i)
                    
                    if (rcx_14 != i)
                        zmm3 = *rcx_14
                        zmm4_1 = *(rcx_14 + 0x10)
                        zmm5_1 = *(rcx_14 + 0x20)
                        zmm6 = *(rcx_14 + 0x30)
                        zmm7 = *(rcx_14 + 0x40)
                        zmm8 = *(rcx_14 + 0x50)
                        zmm9 = *(rcx_14 + 0x60)
                        zmm10 = *(rcx_14 + 0x70)
                        zmm2 = zx.o(*(rcx_14 + 0x80))
                        *rcx_14 = *i
                        *(rcx_14 + 0x10) = *(i + 0x10)
                        *(rcx_14 + 0x20) = *(i + 0x20)
                        *(rcx_14 + 0x30) = *(i + 0x30)
                        *(rcx_14 + 0x40) = *(i + 0x40)
                        *(rcx_14 + 0x50) = *(i + 0x50)
                        *(rcx_14 + 0x60) = *(i + 0x60)
                        *(rcx_14 + 0x70) = *(i + 0x70)
                        *(rcx_14 + 0x80) = *(i + 0x80)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm5_1
                        *(i + 0x30) = zmm6
                        *(i + 0x40) = zmm7
                        *(i + 0x50) = zmm8
                        *(i + 0x60) = zmm9
                        *(i + 0x70) = zmm10
                        *(i + 0x80) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_15 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x88 + r11_1
            
            if (rax_15 != r11_1)
                zmm3 = *rax_15
                zmm4_1 = *(rax_15 + 0x10)
                zmm5_1 = *(rax_15 + 0x20)
                zmm6 = *(rax_15 + 0x30)
                zmm7 = *(rax_15 + 0x40)
                zmm8 = *(rax_15 + 0x50)
                zmm9 = *(rax_15 + 0x60)
                zmm10 = *(rax_15 + 0x70)
                zmm2 = zx.o(*(rax_15 + 0x80))
                *rax_15 = *r11_1
                *(rax_15 + 0x10) = r11_1[1]
                *(rax_15 + 0x20) = r11_1[2]
                *(rax_15 + 0x30) = r11_1[3]
                *(rax_15 + 0x40) = r11_1[4]
                *(rax_15 + 0x50) = r11_1[5]
                *(rax_15 + 0x60) = r11_1[6]
                *(rax_15 + 0x70) = r11_1[7]
                *(rax_15 + 0x80) = r11_1[8].q
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2] = zmm5_1
                r11_1[3] = zmm6
                r11_1[4] = zmm7
                r11_1[5] = zmm8
                r11_1[6] = zmm9
                r11_1[7] = zmm10
                r11_1[8].q = zmm2.q
            
            uint128_t* r10_1 = i + 0x88
            uint128_t* r9 = r11_1
            
            while (true)
                r9 += 0x88
                
                if (r9 u<= i)
                    int128_t* rax_16 = *arg4
                    zmm4_1 = *rax_16
                    zmm5_1 = *(rax_16 + 4)
                    zmm2 = *(rax_16 + 8)
                    zmm3.d = zmm5_1.d f- r11_1[2].d
                    zmm5_1.d = zmm5_1.d f- r9[2].d
                    zmm1.d = zmm4_1.d f- *(r11_1 + 0x1c)
                    zmm4_1.d = zmm4_1.d f- *(r9 + 0x1c)
                    zmm0_2.d = zmm2.d f- *(r11_1 + 0x24)
                    zmm2.d = zmm2.d f- *(r9 + 0x24)
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm3.d = zmm3.d f+ zmm1.d
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    zmm5_1.d = zmm5_1.d f+ zmm4_1.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm3.d = zmm3.d f+ zmm0_2.d
                    zmm5_1.d = zmm5_1.d f+ zmm2.d
                    
                    if (zmm3.d f>= zmm5_1.d)
                        continue
                
                do
                    r10_1 -= 0x88
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    uint128_t* rax_17 = *arg4
                    zmm4_1 = *rax_17
                    zmm5_1 = *(rax_17 + 4)
                    zmm2 = *(rax_17 + 8)
                    zmm3.d = zmm5_1.d f- r10_1[2].d
                    zmm5_1.d = zmm5_1.d f- r11_1[2].d
                    zmm1.d = zmm4_1.d f- *(r10_1 + 0x1c)
                    zmm4_1.d = zmm4_1.d f- *(r11_1 + 0x1c)
                    zmm0_2.d = zmm2.d f- *(r10_1 + 0x24)
                    zmm2.d = zmm2.d f- *(r11_1 + 0x24)
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm3.d = zmm3.d f+ zmm1.d
                    zmm0_2.d = zmm0_2.d f* zmm0_2.d
                    zmm5_1.d = zmm5_1.d f+ zmm4_1.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm3.d = zmm3.d f+ zmm0_2.d
                    zmm5_1.d = zmm5_1.d f+ zmm2.d
                while (zmm3.d f>= zmm5_1.d)
                
                if (r9 u> r10_1)
                    break
                
                if (r9 != r10_1)
                    zmm3 = *r9
                    zmm4_1 = r9[1]
                    zmm5_1 = r9[2]
                    zmm6 = r9[3]
                    zmm7 = r9[4]
                    zmm8 = r9[5]
                    zmm9 = r9[6]
                    zmm10 = r9[7]
                    zmm2 = zx.o(r9[8].q)
                    *r9 = *r10_1
                    r9[1] = r10_1[1]
                    r9[2] = r10_1[2]
                    r9[3] = r10_1[3]
                    r9[4] = r10_1[4]
                    r9[5] = r10_1[5]
                    r9[6] = r10_1[6]
                    r9[7] = r10_1[7]
                    r9[8].q = r10_1[8].q
                    *r10_1 = zmm3
                    r10_1[1] = zmm4_1
                    r10_1[2] = zmm5_1
                    r10_1[3] = zmm6
                    r10_1[4] = zmm7
                    r10_1[5] = zmm8
                    r10_1[6] = zmm9
                    r10_1[7] = zmm10
                    r10_1[8].q = zmm2.q
            
            if (r11_1 != r10_1)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm5_1 = r11_1[2]
                zmm6 = r11_1[3]
                zmm7 = r11_1[4]
                zmm8 = r11_1[5]
                zmm9 = r11_1[6]
                zmm10 = r11_1[7]
                zmm2 = zx.o(r11_1[8].q)
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2] = r10_1[2]
                r11_1[3] = r10_1[3]
                r11_1[4] = r10_1[4]
                r11_1[5] = r10_1[5]
                r11_1[6] = r10_1[6]
                r11_1[7] = r10_1[7]
                r11_1[8].q = r10_1[8].q
                *r10_1 = zmm3
                r10_1[1] = zmm4_1
                r10_1[2] = zmm5_1
                r10_1[3] = zmm6
                r10_1[4] = zmm7
                r10_1[5] = zmm8
                r10_1[6] = zmm9
                r10_1[7] = zmm10
                r10_1[8].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x88) s/ 0x88 s< (i - r9) s/ 0x88)
                if (i u> r9)
                    *r14_1 = r9
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x88 u>= r10_1)
                    break
                
                i = r10_1 - 0x88
            else
                if (r11_1 + 0x88 u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0x88
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9)
                    break
                
                r11_1 = r9
            
            rdx_3 = ((i - r11_1) s/ 0x88).d + 1
            
            if (rbp_1 == 0)
                goto label_141ed112a
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_388)
        break

__security_check_cookie(rax_2 ^ &var_3c8)

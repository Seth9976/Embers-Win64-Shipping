// 函数: sub_141e6fb50
// 地址: 0x141e6fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3c8
int64_t rax_2 = __security_cookie ^ &var_3c8
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
int64_t var_388 = arg1
int64_t var_380_1 = arg1 - 0x90 + sx.q(arg2) * 0x90
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
    int32_t rdx_3 = ((i - r11_1) s/ 0x90).d + 1
    
    if (rbp_1 == 0)
    label_141e6ffaf:
        sub_141e6ee60(r11_1, rdx_3)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x90)
                    void* r8_6 = r11_1
                    void* rdx_12 = &r11_1[9]
                    
                    if (&r11_1[9] u<= i)
                        do
                            void* rcx_14 = rdx_12
                            
                            if (*r8_6 s>= *rdx_12)
                                rcx_14 = r8_6
                            
                            rdx_12 += 0x90
                            r8_6 = rcx_14
                        while (rdx_12 u<= i)
                    
                    if (r8_6 != i)
                        zmm2 = *r8_6
                        zmm3 = *(r8_6 + 0x10)
                        zmm4_1 = *(r8_6 + 0x20)
                        zmm5_1 = *(r8_6 + 0x30)
                        zmm6 = *(r8_6 + 0x40)
                        zmm7 = *(r8_6 + 0x50)
                        zmm8 = *(r8_6 + 0x60)
                        zmm9 = *(r8_6 + 0x70)
                        zmm10 = *(r8_6 + 0x80)
                        *r8_6 = *i
                        *(r8_6 + 0x10) = *(i + 0x10)
                        *(r8_6 + 0x20) = *(i + 0x20)
                        *(r8_6 + 0x30) = *(i + 0x30)
                        *(r8_6 + 0x40) = *(i + 0x40)
                        *(r8_6 + 0x50) = *(i + 0x50)
                        *(r8_6 + 0x60) = *(i + 0x60)
                        *(r8_6 + 0x70) = *(i + 0x70)
                        *(r8_6 + 0x80) = *(i + 0x80)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                        *(i + 0x30) = zmm5_1
                        *(i + 0x40) = zmm6
                        *(i + 0x50) = zmm7
                        *(i + 0x60) = zmm8
                        *(i + 0x70) = zmm9
                        *(i + 0x80) = zmm10
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_16 = &r11_1[sx.q((temp1_1 - temp0_3) s>> 1) * 9]
            
            if (rax_16 != r11_1)
                zmm2 = *rax_16
                zmm3 = *(rax_16 + 0x10)
                zmm4_1 = *(rax_16 + 0x20)
                zmm5_1 = *(rax_16 + 0x30)
                zmm6 = *(rax_16 + 0x40)
                zmm7 = *(rax_16 + 0x50)
                zmm8 = *(rax_16 + 0x60)
                zmm9 = *(rax_16 + 0x70)
                zmm10 = *(rax_16 + 0x80)
                *rax_16 = *r11_1
                *(rax_16 + 0x10) = r11_1[1]
                *(rax_16 + 0x20) = r11_1[2]
                *(rax_16 + 0x30) = r11_1[3]
                *(rax_16 + 0x40) = r11_1[4]
                *(rax_16 + 0x50) = r11_1[5]
                *(rax_16 + 0x60) = r11_1[6]
                *(rax_16 + 0x70) = r11_1[7]
                *(rax_16 + 0x80) = r11_1[8]
                *r11_1 = zmm2
                r11_1[1] = zmm3
                r11_1[2] = zmm4_1
                r11_1[3] = zmm5_1
                r11_1[4] = zmm6
                r11_1[5] = zmm7
                r11_1[6] = zmm8
                r11_1[7] = zmm9
                r11_1[8] = zmm10
            
            uint128_t* r9_1 = i + 0x90
            uint128_t* r10_1 = r11_1
            
            while (true)
                r10_1 = &r10_1[9]
                
                if (r10_1 u<= i && *r11_1 s>= *r10_1)
                    continue
                
                do
                    r9_1 = &r9_1[-9]
                    
                    if (r9_1 u<= r11_1)
                        break
                while (*r9_1 s>= *r11_1)
                
                if (r10_1 u> r9_1)
                    break
                
                if (r10_1 != r9_1)
                    zmm2 = *r10_1
                    zmm3 = r10_1[1]
                    zmm4_1 = r10_1[2]
                    zmm5_1 = r10_1[3]
                    zmm6 = r10_1[4]
                    zmm7 = r10_1[5]
                    zmm8 = r10_1[6]
                    zmm9 = r10_1[7]
                    zmm10 = r10_1[8]
                    *r10_1 = *r9_1
                    r10_1[1] = r9_1[1]
                    r10_1[2] = r9_1[2]
                    r10_1[3] = r9_1[3]
                    r10_1[4] = r9_1[4]
                    r10_1[5] = r9_1[5]
                    r10_1[6] = r9_1[6]
                    r10_1[7] = r9_1[7]
                    r10_1[8] = r9_1[8]
                    *r9_1 = zmm2
                    r9_1[1] = zmm3
                    r9_1[2] = zmm4_1
                    r9_1[3] = zmm5_1
                    r9_1[4] = zmm6
                    r9_1[5] = zmm7
                    r9_1[6] = zmm8
                    r9_1[7] = zmm9
                    r9_1[8] = zmm10
            
            if (r11_1 != r9_1)
                zmm2 = *r11_1
                zmm3 = r11_1[1]
                zmm4_1 = r11_1[2]
                zmm5_1 = r11_1[3]
                zmm6 = r11_1[4]
                zmm7 = r11_1[5]
                zmm8 = r11_1[6]
                zmm9 = r11_1[7]
                zmm10 = r11_1[8]
                *r11_1 = *r9_1
                r11_1[1] = r9_1[1]
                r11_1[2] = r9_1[2]
                r11_1[3] = r9_1[3]
                r11_1[4] = r9_1[4]
                r11_1[5] = r9_1[5]
                r11_1[6] = r9_1[6]
                r11_1[7] = r9_1[7]
                r11_1[8] = r9_1[8]
                *r9_1 = zmm2
                r9_1[1] = zmm3
                r9_1[2] = zmm4_1
                r9_1[3] = zmm5_1
                r9_1[4] = zmm6
                r9_1[5] = zmm7
                r9_1[6] = zmm8
                r9_1[7] = zmm9
                r9_1[8] = zmm10
            
            rbp_1 -= 1
            
            if ((r9_1 - r11_1 - 0x90) s/ 0x90 s< (i - r10_1) s/ 0x90)
                if (i u> r10_1)
                    *r14_1 = r10_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r11_1[9] u>= r9_1)
                    break
                
                i = &r9_1[-9]
            else
                if (&r11_1[9] u< r9_1)
                    *r14_1 = r11_1
                    r14_1[1] = &r9_1[-9]
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r10_1)
                    break
                
                r11_1 = r10_1
            
            rdx_3 = ((i - r11_1) s/ 0x90).d + 1
            
            if (rbp_1 == 0)
                goto label_141e6ffaf
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_388)
        break

__security_check_cookie(rax_2 ^ &var_3c8)

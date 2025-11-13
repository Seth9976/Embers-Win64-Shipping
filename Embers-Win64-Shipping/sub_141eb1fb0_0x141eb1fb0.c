// 函数: sub_141eb1fb0
// 地址: 0x141eb1fb0
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
    label_141eb246d:
        sub_141eb17e0(r11_1, rdx_3)
    else
        while (true)
            uint128_t* r9_1
            uint128_t zmm0_2
            uint128_t zmm1
            uint128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x88)
                    uint128_t* r8_5 = r11_1
                    void* rdx_12 = r11_1 + 0x88
                    
                    if (r11_1 + 0x88 u<= i)
                        do
                            zmm0_2 = *(r8_5 + 8)
                            zmm1 = *(rdx_12 + 8)
                            
                            if (zmm0_2.d f!= zmm1.d)
                                r9_1.b = zmm1.d f> zmm0_2.d
                            else
                                r9_1 = 1
                                uint32_t rcx_14 = zx.d(*rdx_12) & 1
                                
                                if ((*r8_5 & 1) != rcx_14.b)
                                    r9_1 = zx.q(rcx_14)
                            
                            void* rax_32 = rdx_12
                            
                            if (r9_1.b == 0)
                                rax_32 = r8_5
                            
                            rdx_12 += 0x88
                            r8_5 = rax_32
                        while (rdx_12 u<= i)
                    
                    if (r8_5 != i)
                        zmm3 = *r8_5
                        zmm4_1 = r8_5[1]
                        zmm5_1 = r8_5[2]
                        zmm6 = r8_5[3]
                        zmm7 = r8_5[4]
                        zmm8 = r8_5[5]
                        zmm9 = r8_5[6]
                        zmm10 = r8_5[7]
                        zmm2 = zx.o(r8_5[8].q)
                        *r8_5 = *i
                        r8_5[1] = *(i + 0x10)
                        r8_5[2] = *(i + 0x20)
                        r8_5[3] = *(i + 0x30)
                        r8_5[4] = *(i + 0x40)
                        r8_5[5] = *(i + 0x50)
                        r8_5[6] = *(i + 0x60)
                        r8_5[7] = *(i + 0x70)
                        r8_5[8].q = *(i + 0x80)
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
            
            r9_1 = i + 0x88
            uint128_t* r10_1 = r11_1
            
            while (true)
                r10_1 += 0x88
                int64_t rcx_3
                
                if (r10_1 u<= i)
                    zmm0_2 = *(r11_1 + 8)
                    zmm1 = *(r10_1 + 8)
                    
                    if (zmm0_2.d f!= zmm1.d)
                        rcx_3.b = zmm1.d f> zmm0_2.d
                    label_141eb21c7:
                        
                        if (rcx_3.b == 0)
                            continue
                    else
                        rcx_3.b = *r10_1 & 1
                        
                        if ((*r11_1 & 1) != rcx_3.b)
                            goto label_141eb21c7
                
                do
                    r9_1 -= 0x88
                    
                    if (r9_1 u<= r11_1)
                        break
                    
                    zmm0_2 = *(r9_1 + 8)
                    zmm1 = *(r11_1 + 8)
                    
                    if (zmm0_2.d f!= zmm1.d)
                        rcx_3.b = zmm1.d f> zmm0_2.d
                    else
                        rcx_3.b = *r11_1 & 1
                        
                        if ((*r9_1 & 1) == rcx_3.b)
                            break
                while (rcx_3.b == 0)
                
                if (r10_1 u> r9_1)
                    break
                
                if (r10_1 != r9_1)
                    zmm3 = *r10_1
                    zmm4_1 = r10_1[1]
                    zmm5_1 = r10_1[2]
                    zmm6 = r10_1[3]
                    zmm7 = r10_1[4]
                    zmm8 = r10_1[5]
                    zmm9 = r10_1[6]
                    zmm10 = r10_1[7]
                    zmm2 = zx.o(r10_1[8].q)
                    *r10_1 = *r9_1
                    r10_1[1] = r9_1[1]
                    r10_1[2] = r9_1[2]
                    r10_1[3] = r9_1[3]
                    r10_1[4] = r9_1[4]
                    r10_1[5] = r9_1[5]
                    r10_1[6] = r9_1[6]
                    r10_1[7] = r9_1[7]
                    r10_1[8].q = r9_1[8].q
                    *r9_1 = zmm3
                    r9_1[1] = zmm4_1
                    r9_1[2] = zmm5_1
                    r9_1[3] = zmm6
                    r9_1[4] = zmm7
                    r9_1[5] = zmm8
                    r9_1[6] = zmm9
                    r9_1[7] = zmm10
                    r9_1[8].q = zmm2.q
            
            if (r11_1 != r9_1)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm5_1 = r11_1[2]
                zmm6 = r11_1[3]
                zmm7 = r11_1[4]
                zmm8 = r11_1[5]
                zmm9 = r11_1[6]
                zmm10 = r11_1[7]
                zmm2 = zx.o(r11_1[8].q)
                *r11_1 = *r9_1
                r11_1[1] = r9_1[1]
                r11_1[2] = r9_1[2]
                r11_1[3] = r9_1[3]
                r11_1[4] = r9_1[4]
                r11_1[5] = r9_1[5]
                r11_1[6] = r9_1[6]
                r11_1[7] = r9_1[7]
                r11_1[8].q = r9_1[8].q
                *r9_1 = zmm3
                r9_1[1] = zmm4_1
                r9_1[2] = zmm5_1
                r9_1[3] = zmm6
                r9_1[4] = zmm7
                r9_1[5] = zmm8
                r9_1[6] = zmm9
                r9_1[7] = zmm10
                r9_1[8].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r9_1 - r11_1 - 0x88) s/ 0x88 s< (i - r10_1) s/ 0x88)
                if (i u> r10_1)
                    *r14_1 = r10_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x88 u>= r9_1)
                    break
                
                i = r9_1 - 0x88
            else
                if (r11_1 + 0x88 u< r9_1)
                    *r14_1 = r11_1
                    r14_1[1] = r9_1 - 0x88
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r10_1)
                    break
                
                r11_1 = r10_1
            
            rdx_3 = ((i - r11_1) s/ 0x88).d + 1
            
            if (rbp_1 == 0)
                goto label_141eb246d
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_388)
        break

__security_check_cookie(rax_2 ^ &var_3c8)

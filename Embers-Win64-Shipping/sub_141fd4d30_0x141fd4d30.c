// 函数: sub_141fd4d30
// 地址: 0x141fd4d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2))
int64_t var_340_1 = arg1 - 0x54 + sx.q(arg2) * 0x54
int128_t zmm6
int128_t var_38_1 = zmm6
int64_t var_348 = arg1
float zmm0_1 = logf(zmm0.d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r14_1 = &var_348

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_4 = ((i - r11_1) s/ 0x54).d + 1
    
    if (rbp_1 == 0)
    label_141fd5083:
        sub_141fd3c80(r11_1, rdx_4)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_4 s<= 8)
                for (; i u> r11_1; i -= 0x54)
                    void* r8_5 = r11_1
                    void* rdx_17 = r11_1 + 0x54
                    
                    if (r11_1 + 0x54 u<= i)
                        do
                            void* rcx_17 = rdx_17
                            
                            if (*r8_5 u>= *rdx_17)
                                rcx_17 = r8_5
                            
                            rdx_17 += 0x54
                            r8_5 = rcx_17
                        while (rdx_17 u<= i)
                    
                    if (r8_5 != i)
                        int32_t rcx_18 = *(r8_5 + 0x50)
                        zmm2 = *r8_5
                        zmm3 = *(r8_5 + 0x10)
                        zmm4_1 = *(r8_5 + 0x20)
                        zmm5_1 = *(r8_5 + 0x30)
                        zmm6 = *(r8_5 + 0x40)
                        *r8_5 = *i
                        *(r8_5 + 0x10) = *(i + 0x10)
                        *(r8_5 + 0x20) = *(i + 0x20)
                        *(r8_5 + 0x30) = *(i + 0x30)
                        *(r8_5 + 0x40) = *(i + 0x40)
                        *(r8_5 + 0x50) = *(i + 0x50)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                        *(i + 0x30) = zmm5_1
                        *(i + 0x40) = zmm6
                        *(i + 0x50) = rcx_18
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_4)
            void* rdx_7 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x54 + r11_1
            
            if (rdx_7 != r11_1)
                int32_t rcx_4 = *(rdx_7 + 0x50)
                zmm2 = *rdx_7
                zmm3 = *(rdx_7 + 0x10)
                zmm4_1 = *(rdx_7 + 0x20)
                zmm5_1 = *(rdx_7 + 0x30)
                zmm6 = *(rdx_7 + 0x40)
                *rdx_7 = *r11_1
                *(rdx_7 + 0x10) = r11_1[1]
                *(rdx_7 + 0x20) = r11_1[2]
                *(rdx_7 + 0x30) = r11_1[3]
                *(rdx_7 + 0x40) = r11_1[4]
                *(rdx_7 + 0x50) = r11_1[5].d
                *r11_1 = zmm2
                r11_1[1] = zmm3
                r11_1[2] = zmm4_1
                r11_1[3] = zmm5_1
                r11_1[4] = zmm6
                r11_1[5].d = rcx_4
            
            uint128_t* r10_1 = i + 0x54
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 += 0x54
                
                if (r9_1 u<= i && *r11_1 u>= *r9_1)
                    continue
                
                do
                    r10_1 -= 0x54
                    
                    if (r10_1 u<= r11_1)
                        break
                while (*r10_1 u>= *r11_1)
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    int32_t rcx_5 = r9_1[5].d
                    zmm2 = *r9_1
                    zmm3 = r9_1[1]
                    zmm4_1 = r9_1[2]
                    zmm5_1 = r9_1[3]
                    zmm6 = r9_1[4]
                    *r9_1 = *r10_1
                    r9_1[1] = r10_1[1]
                    r9_1[2] = r10_1[2]
                    r9_1[3] = r10_1[3]
                    r9_1[4] = r10_1[4]
                    r9_1[5].d = r10_1[5].d
                    *r10_1 = zmm2
                    r10_1[1] = zmm3
                    r10_1[2] = zmm4_1
                    r10_1[3] = zmm5_1
                    r10_1[4] = zmm6
                    r10_1[5].d = rcx_5
            
            if (r11_1 != r10_1)
                int32_t rcx_6 = r11_1[5].d
                zmm2 = *r11_1
                zmm3 = r11_1[1]
                zmm4_1 = r11_1[2]
                zmm5_1 = r11_1[3]
                zmm6 = r11_1[4]
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2] = r10_1[2]
                r11_1[3] = r10_1[3]
                r11_1[4] = r10_1[4]
                r11_1[5].d = r10_1[5].d
                *r10_1 = zmm2
                r10_1[1] = zmm3
                r10_1[2] = zmm4_1
                r10_1[3] = zmm5_1
                r10_1[4] = zmm6
                r10_1[5].d = rcx_6
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x54) s/ 0x54 s< (i - r9_1) s/ 0x54)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x54 u>= r10_1)
                    break
                
                i = r10_1 - 0x54
            else
                if (r11_1 + 0x54 u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0x54
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_4 = ((i - r11_1) s/ 0x54).d + 1
            
            if (rbp_1 == 0)
                goto label_141fd5083
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)

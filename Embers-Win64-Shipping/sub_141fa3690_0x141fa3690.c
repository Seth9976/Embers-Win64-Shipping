// 函数: sub_141fa3690
// 地址: 0x141fa3690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0x28 + sx.q(arg2) * 0x28
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x28).d + 1
    
    if (rbp_1 == 0)
    label_141fa394d:
        sub_141fa2da0(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x28)
                    void* rdx_12 = r11_1
                    void* rcx_16 = r11_1 + 0x28
                    
                    if (r11_1 + 0x28 u<= i)
                        do
                            int64_t r8_5 = *(rdx_12 + 0x20)
                            int64_t temp3_1 = *(rcx_16 + 0x20)
                            
                            if (temp3_1 u< r8_5 || (temp3_1 == r8_5 && *rcx_16 s< *rdx_12))
                                r8_5.b = 1
                            else
                                r8_5.b = 0
                            
                            void* rax_31 = rcx_16
                            
                            if (r8_5.b == 0)
                                rax_31 = rdx_12
                            
                            rcx_16 += 0x28
                            rdx_12 = rax_31
                        while (rcx_16 u<= i)
                    
                    if (rdx_12 != i)
                        zmm3 = *rdx_12
                        zmm4_1 = *(rdx_12 + 0x10)
                        zmm2 = zx.o(*(rdx_12 + 0x20))
                        *rdx_12 = *i
                        *(rdx_12 + 0x10) = *(i + 0x10)
                        *(rdx_12 + 0x20) = *(i + 0x20)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = r11_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0x28
            
            if (rcx_5 != r11_1)
                zmm3 = *rcx_5
                zmm4_1 = *(rcx_5 + 0x10)
                zmm2 = zx.o(*(rcx_5 + 0x20))
                *rcx_5 = *r11_1
                *(rcx_5 + 0x10) = r11_1[1]
                *(rcx_5 + 0x20) = r11_1[2].q
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2].q = zmm2.q
            
            uint128_t* r9_1 = i + 0x28
            uint128_t* r10_1 = r11_1
            
            while (true)
                r10_1 += 0x28
                
                if (r10_1 u<= i)
                    int64_t rax_14 = r10_1[2].q
                    int64_t temp2_1 = r11_1[2].q
                    
                    if (rax_14 u>= temp2_1)
                        if (rax_14 != temp2_1)
                            continue
                        else if (*r10_1 s>= *r11_1)
                            continue
                
                while (true)
                    r9_1 -= 0x28
                    
                    if (r9_1 u<= r11_1)
                        break
                    
                    int64_t rax_16 = r11_1[2].q
                    int64_t temp4_1 = r9_1[2].q
                    
                    if (rax_16 u< temp4_1)
                        break
                    
                    if (rax_16 == temp4_1)
                        if (*r11_1 s< *r9_1)
                            break
                
                if (r10_1 u> r9_1)
                    break
                
                if (r10_1 != r9_1)
                    zmm3 = *r10_1
                    zmm4_1 = r10_1[1]
                    zmm2 = zx.o(r10_1[2].q)
                    *r10_1 = *r9_1
                    r10_1[1] = r9_1[1]
                    r10_1[2].q = r9_1[2].q
                    *r9_1 = zmm3
                    r9_1[1] = zmm4_1
                    r9_1[2].q = zmm2.q
            
            if (r11_1 != r9_1)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm2 = zx.o(r11_1[2].q)
                *r11_1 = *r9_1
                r11_1[1] = r9_1[1]
                r11_1[2].q = r9_1[2].q
                *r9_1 = zmm3
                r9_1[1] = zmm4_1
                r9_1[2].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r9_1 - r11_1 - 0x28) s/ 0x28 s< (i - r10_1) s/ 0x28)
                if (i u> r10_1)
                    *r14_1 = r10_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x28 u>= r9_1)
                    break
                
                i = r9_1 - 0x28
            else
                if (r11_1 + 0x28 u< r9_1)
                    *r14_1 = r11_1
                    r14_1[1] = r9_1 - 0x28
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r10_1)
                    break
                
                r11_1 = r10_1
            
            rdx_3 = ((i - r11_1) s/ 0x28).d + 1
            
            if (rbp_1 == 0)
                goto label_141fa394d
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)

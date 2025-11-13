// 函数: sub_1426a3570
// 地址: 0x1426a3570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0x18 + sx.q(arg2) * 0x18
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r10_1) s/ 0x18).d + 1
    
    if (rbp_1 == 0)
    label_1426a3813:
        sub_1426a2d90(r10_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            
            if (rdx_3 s<= 8)
                for (; i u> r10_1; i -= 0x18)
                    void* rdx_12 = r10_1
                    void* rcx_16 = r10_1 + 0x18
                    
                    if (r10_1 + 0x18 u<= i)
                        do
                            int32_t r8_5 = *(rcx_16 + 0xc)
                            int32_t temp3_1 = *(rdx_12 + 0xc)
                            
                            if (temp3_1 s< r8_5)
                                r8_5.b = 1
                            else if (temp3_1 != r8_5)
                                r8_5.b = 0
                            else
                                r8_5 = *(rcx_16 + 8)
                                int32_t temp6_1 = *(rdx_12 + 8)
                                
                                if (temp6_1 s< r8_5 ||
                                        (temp6_1 == r8_5 && *(rdx_12 + 0x10) u< *(rcx_16 + 0x10)))
                                    r8_5.b = 1
                                else
                                    r8_5.b = 0
                            
                            void* rax_33 = rcx_16
                            
                            if (r8_5.b == 0)
                                rax_33 = rdx_12
                            
                            rcx_16 += 0x18
                            rdx_12 = rax_33
                        while (rcx_16 u<= i)
                    
                    if (rdx_12 != i)
                        zmm3 = *rdx_12
                        zmm2 = zx.o(*(rdx_12 + 0x10))
                        *rdx_12 = *i
                        *(rdx_12 + 0x10) = *(i + 0x10)
                        *i = zmm3
                        *(i + 0x10) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = r10_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0x18
            
            if (rcx_5 != r10_1)
                zmm3 = *rcx_5
                zmm2 = zx.o(*(rcx_5 + 0x10))
                *rcx_5 = *r10_1
                *(rcx_5 + 0x10) = r10_1[1].q
                *r10_1 = zmm3
                r10_1[1].q = zmm2.q
            
            uint128_t* r9_1 = i + 0x18
            uint128_t* r11_1 = r10_1
            
            while (true)
                r11_1 += 0x18
                
                if (r11_1 u<= i)
                    int32_t rax_14 = *(r10_1 + 0xc)
                    int32_t temp2_1 = *(r11_1 + 0xc)
                    
                    if (rax_14 s>= temp2_1)
                        if (rax_14 != temp2_1)
                            continue
                        else
                            int32_t rax_15 = *(r10_1 + 8)
                            int32_t temp5_1 = *(r11_1 + 8)
                            
                            if (rax_15 s>= temp5_1)
                                if (rax_15 != temp5_1)
                                    continue
                                else if (r10_1[1].d u>= r11_1[1].d)
                                    continue
                
                while (true)
                    r9_1 -= 0x18
                    
                    if (r9_1 u<= r10_1)
                        break
                    
                    int32_t rax_17 = *(r9_1 + 0xc)
                    int32_t temp4_1 = *(r10_1 + 0xc)
                    
                    if (rax_17 s< temp4_1)
                        break
                    
                    if (rax_17 == temp4_1)
                        int32_t rax_18 = *(r9_1 + 8)
                        int32_t temp7_1 = *(r10_1 + 8)
                        
                        if (rax_18 s< temp7_1)
                            break
                        
                        if (rax_18 == temp7_1)
                            if (r9_1[1].d u< r10_1[1].d)
                                break
                
                if (r11_1 u> r9_1)
                    break
                
                if (r11_1 != r9_1)
                    zmm3 = *r11_1
                    zmm2 = zx.o(r11_1[1].q)
                    *r11_1 = *r9_1
                    r11_1[1].q = r9_1[1].q
                    *r9_1 = zmm3
                    r9_1[1].q = zmm2.q
            
            if (r10_1 != r9_1)
                zmm3 = *r10_1
                zmm2 = zx.o(r10_1[1].q)
                *r10_1 = *r9_1
                r10_1[1].q = r9_1[1].q
                *r9_1 = zmm3
                r9_1[1].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r9_1 - r10_1 - 0x18) s/ 0x18 s< (i - r11_1) s/ 0x18)
                if (i u> r11_1)
                    *r14_1 = r11_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r10_1 + 0x18 u>= r9_1)
                    break
                
                i = r9_1 - 0x18
            else
                if (r10_1 + 0x18 u< r9_1)
                    *r14_1 = r10_1
                    r14_1[1] = r9_1 - 0x18
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r11_1)
                    break
                
                r10_1 = r11_1
            
            rdx_3 = ((i - r10_1) s/ 0x18).d + 1
            
            if (rbp_1 == 0)
                goto label_1426a3813
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)

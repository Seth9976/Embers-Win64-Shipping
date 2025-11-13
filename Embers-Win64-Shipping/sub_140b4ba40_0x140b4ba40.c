// 函数: sub_140b4ba40
// 地址: 0x140b4ba40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0xc + sx.q(arg2) * 0xc
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    int32_t rbp_1 = r14_1[2].d
    int64_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r10_1) s/ 0xc).d + 1
    
    if (rbp_1 == 0)
    label_140b4bce4:
        sub_140b4b5f0(r10_1, rdx_3)
    else
        while (true)
            uint128_t zmm1
            
            if (rdx_3 s<= 8)
                for (; i u> r10_1; i -= 0xc)
                    uint64_t* r8_5 = r10_1
                    uint64_t* rdx_15 = r10_1 + 0xc
                    void* rcx_3
                    
                    if (r10_1 + 0xc u<= i)
                        do
                            uint64_t r9_2 = *r8_5
                            uint64_t rax_36 = *rdx_15
                            
                            if (r9_2 == rax_36)
                                rcx_3.b = r8_5[1].d u< rdx_15[1].d
                            else
                                int32_t rcx_21 = r9_2.d
                                uint32_t rcx_22 = rcx_21 - rax_36.d
                                
                                if (rcx_21 == rax_36.d)
                                    rcx_22 = (r9_2 u>> 0x20).d - (rax_36 u>> 0x20).d
                                
                                rcx_3 = zx.q(rcx_22 u>> 0x1f)
                            
                            uint64_t* rax_39 = rdx_15
                            
                            if (rcx_3.b == 0)
                                rax_39 = r8_5
                            
                            rdx_15 += 0xc
                            r8_5 = rax_39
                        while (rdx_15 u<= i)
                    
                    if (r8_5 != i)
                        zmm1 = zx.o(*r8_5)
                        rcx_3 = zx.q(r8_5[1].d)
                        *r8_5 = *i
                        r8_5[1].d = *(i + 8)
                        *i = zmm1.q
                        *(i + 8) = rcx_3.d
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            int64_t* rdx_5 = r10_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0xc
            
            if (rdx_5 != r10_1)
                zmm1 = zx.o(*rdx_5)
                int32_t rcx_5 = rdx_5[1].d
                *rdx_5 = *r10_1
                rdx_5[1].d = r10_1[1].d
                *r10_1 = zmm1.q
                r10_1[1].d = rcx_5
            
            uint64_t* r11_1 = i + 0xc
            int64_t* r9_1 = r10_1
            
            while (true)
                r9_1 += 0xc
                
                if (r9_1 u<= i)
                    int64_t rcx_6 = *r9_1
                    uint32_t rax_18
                    
                    if (*r10_1 == rcx_6)
                        rax_18.b = r10_1[1].d u< r9_1[1].d
                    else
                        int32_t rax_15 = *r10_1
                        int32_t rax_16 = rax_15 - rcx_6.d
                        
                        if (rax_15 == rcx_6.d)
                            rax_16 = *(r10_1 + 4) - (rcx_6 u>> 0x20).d
                        
                        rax_18 = rax_16 u>> 0x1f
                    
                    if (rax_18.b == 0)
                        continue
                
                uint32_t rax_21
                
                do
                    r11_1 -= 0xc
                    
                    if (r11_1 u<= r10_1)
                        break
                    
                    uint64_t rax_19 = *r11_1
                    
                    if (rax_19 == *r10_1)
                        rax_21.b = r11_1[1].d u< r10_1[1].d
                    else
                        int32_t rax_20 = rax_19.d - *r10_1
                        
                        if (rax_19.d == *r10_1)
                            rax_20 = (rax_19 u>> 0x20).d - *(r10_1 + 4)
                        
                        rax_21 = rax_20 u>> 0x1f
                while (rax_21.b == 0)
                
                if (r9_1 u> r11_1)
                    break
                
                if (r9_1 != r11_1)
                    zmm1 = zx.o(*r9_1)
                    int32_t rcx_10 = r9_1[1].d
                    *r9_1 = *r11_1
                    r9_1[1].d = r11_1[1].d
                    *r11_1 = zmm1.q
                    r11_1[1].d = rcx_10
            
            if (r10_1 != r11_1)
                zmm1 = zx.o(*r10_1)
                int32_t rcx_11 = r10_1[1].d
                *r10_1 = *r11_1
                r10_1[1].d = r11_1[1].d
                *r11_1 = zmm1.q
                r11_1[1].d = rcx_11
            
            rbp_1 -= 1
            
            if ((r11_1 - r10_1 - 0xc) s/ 0xc s< (i - r9_1) s/ 0xc)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r10_1 + 0xc u>= r11_1)
                    break
                
                i = r11_1 - 0xc
            else
                if (r10_1 + 0xc u< r11_1)
                    *r14_1 = r10_1
                    r14_1[1] = r11_1 - 0xc
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r10_1 = r9_1
            
            rdx_3 = ((i - r10_1) s/ 0xc).d + 1
            
            if (rbp_1 == 0)
                goto label_140b4bce4
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)

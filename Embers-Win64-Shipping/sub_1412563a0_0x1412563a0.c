// 函数: sub_1412563a0
// 地址: 0x1412563a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t* result = __security_cookie ^ &var_4a8
int64_t* result_1 = result
int64_t r8 = sx.q(arg2)

if (r8.d s>= 2)
    int64_t var_348 = arg1
    int64_t var_340_1 = arg1 - 0x28 + r8 * 0x28
    float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(r8.d)).d)
    int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
    void var_330
    memset(&var_330, 0, 0x2e8)
    int64_t* r14_1 = &var_348
    
    while (true)
        uint128_t zmm2 = *r14_1
        uint32_t r15_1 = (r14_1[2]).d
        uint128_t* r11_1 = zmm2.q
        void* i = _mm_bsrli_si128(zmm2, 8).q
        int32_t rdx_4 = ((i - r11_1) s/ 0x28).d + 1
        
        if (r15_1 == 0)
        label_1412566e3:
            sub_141256040(r11_1, rdx_4)
        else
            while (true)
                uint128_t zmm0_2
                uint128_t zmm3
                int128_t zmm4_1
                
                if (rdx_4 s<= 8)
                    for (; i u> r11_1; i -= 0x28)
                        void* rdx_13 = r11_1
                        void* rcx_21 = r11_1 + 0x28
                        
                        if (r11_1 + 0x28 u<= i)
                            do
                                zmm3 = *rcx_21
                                uint128_t var_368_1 = *(rcx_21 + 0x10)
                                zmm0_2 = *(rdx_13 + 0x10)
                                int64_t rax_27 = _mm_bsrli_si128(*rdx_13, 8).q
                                uint64_t r8_5 = _mm_bsrli_si128(zmm3, 8).q
                                
                                if (rax_27 == r8_5)
                                    uint32_t rax_29 = (zmm0_2:8.q u>> 0x20).d
                                    r8_5 = var_368_1:8.q u>> 0x20
                                    
                                    if (rax_29 == r8_5.d)
                                        r8_5.b = 0
                                    else
                                        r8_5.b = rax_29 s< r8_5.d
                                else
                                    r8_5.b = rax_27 u< r8_5
                                
                                void* rax_30 = rcx_21
                                
                                if (r8_5.b == 0)
                                    rax_30 = rdx_13
                                
                                rcx_21 += 0x28
                                rdx_13 = rax_30
                            while (rcx_21 u<= i)
                        
                        zmm3 = *rdx_13
                        zmm4_1 = *(rdx_13 + 0x10)
                        zmm2 = zx.o(*(rdx_13 + 0x20))
                        *rdx_13 = *i
                        *(rdx_13 + 0x10) = *(i + 0x10)
                        *(rdx_13 + 0x20) = *(i + 0x20)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm2.q
                    
                    break
                
                uint128_t* r10_1 = i + 0x28
                int32_t temp0_3
                int32_t temp1_1
                temp0_3:temp1_1 = sx.q(rdx_4)
                uint128_t* r9_1 = r11_1
                int64_t rax_10 = sx.q((temp1_1 - temp0_3) s>> 1) * 5
                zmm3 = *(r11_1 + (rax_10 << 3))
                zmm4_1 = *(r11_1 + (rax_10 << 3) + 0x10)
                zmm2 = zx.o(*(r11_1 + (rax_10 << 3) + 0x20))
                *(r11_1 + (rax_10 << 3)) = *r11_1
                *(r11_1 + (rax_10 << 3) + 0x10) = r11_1[1]
                *(r11_1 + (rax_10 << 3) + 0x20) = r11_1[2].q
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2].q = zmm2.q
                
                while (true)
                    r9_1 += 0x28
                    
                    if (r9_1 u<= i)
                        zmm3 = *r9_1
                        uint128_t var_428_1 = r9_1[1]
                        zmm0_2 = r11_1[1]
                        uint64_t rax_11 = _mm_bsrli_si128(*r11_1, 8).q
                        int64_t rcx_5 = _mm_bsrli_si128(zmm3, 8).q
                        
                        if (rax_11 == rcx_5)
                            rax_11 = zmm0_2:8.q u>> 0x20
                            uint32_t rcx_7 = (var_428_1:8.q u>> 0x20).d
                            
                            if (rax_11.d == rcx_7)
                                continue
                            else
                                rax_11.b = rax_11.d s< rcx_7
                        else
                            rax_11.b = rax_11 u< rcx_5
                        
                        if (rax_11.b == 0)
                            continue
                    
                    while (true)
                        r10_1 -= 0x28
                        
                        if (r10_1 u<= r11_1)
                            break
                        
                        zmm3 = *r11_1
                        uint128_t var_3c8_1 = r11_1[1]
                        zmm0_2 = r10_1[1]
                        uint64_t rax_13 = _mm_bsrli_si128(*r10_1, 8).q
                        int64_t rcx_8 = _mm_bsrli_si128(zmm3, 8).q
                        
                        if (rax_13 == rcx_8)
                            rax_13 = zmm0_2:8.q u>> 0x20
                            uint32_t rcx_10 = (var_3c8_1:8.q u>> 0x20).d
                            
                            if (rax_13.d == rcx_10)
                                continue
                            else
                                rax_13.b = rax_13.d s< rcx_10
                        else
                            rax_13.b = rax_13 u< rcx_8
                        
                        if (rax_13.b != 0)
                            break
                    
                    zmm0_2 = *r10_1
                    
                    if (r9_1 u> r10_1)
                        break
                    
                    zmm3 = *r9_1
                    zmm4_1 = r9_1[1]
                    zmm2 = zx.o(r9_1[2].q)
                    *r9_1 = zmm0_2
                    r9_1[1] = r10_1[1]
                    r9_1[2].q = r10_1[2].q
                    *r10_1 = zmm3
                    r10_1[1] = zmm4_1
                    r10_1[2].q = zmm2.q
                
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                r15_1 -= 1
                zmm2 = zx.o(r11_1[2].q)
                *r11_1 = zmm0_2
                r11_1[1] = r10_1[1]
                r11_1[2].q = r10_1[2].q
                *r10_1 = zmm3
                r10_1[1] = zmm4_1
                r10_1[2].q = zmm2.q
                
                if ((r10_1 - r11_1 - 0x28) s/ 0x28 s< (i - r9_1) s/ 0x28)
                    if (i u> r9_1)
                        *r14_1 = r9_1
                        r14_1[1] = i
                        r14_1[2].d = r15_1
                        r14_1 = &r14_1[3]
                    
                    if (r11_1 + 0x28 u>= r10_1)
                        break
                    
                    i = r10_1 - 0x28
                else
                    if (r11_1 + 0x28 u< r10_1)
                        *r14_1 = r11_1
                        r14_1[1] = r10_1 - 0x28
                        r14_1[2].d = r15_1
                        r14_1 = &r14_1[3]
                    
                    if (i u<= r9_1)
                        break
                    
                    r11_1 = r9_1
                
                rdx_4 = ((i - r11_1) s/ 0x28).d + 1
                
                if (r15_1 == 0)
                    goto label_1412566e3
        
        r14_1 -= 0x18
        result = &var_348
        
        if (r14_1 u< &var_348)
            break

__security_check_cookie(result_1 ^ &var_4a8)
return result

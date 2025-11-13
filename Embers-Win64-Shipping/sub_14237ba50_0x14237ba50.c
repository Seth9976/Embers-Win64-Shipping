// 函数: sub_14237ba50
// 地址: 0x14237ba50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = arg1 + (sx.q(arg2) << 2) - 4
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r12_1 = &var_348

while (true)
    uint128_t zmm2 = *r12_1
    int32_t r15_1 = (r12_1[2]).d
    int32_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r10_1) s>> 2).d + 1
    
    if (r15_1 == 0)
    label_14237bc77:
        sub_14237b370(r10_1, rax_8, zx.q(arg3), arg4)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r10_1; i -= 4)
                    int32_t* r8_2 = r10_1
                    int32_t* rdx_4 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        int64_t rbp_3 = **arg4
                        
                        do
                            int64_t rsi_3 = sx.q(*r8_2)
                            int64_t r11_3 = sx.q(*rdx_4)
                            int32_t r9_2 = *(rsi_3 * 0xd8 + rbp_3 + 0x98)
                            int32_t temp1_1 = *(r11_3 * 0xd8 + rbp_3 + 0x98)
                            int64_t rcx_18
                            
                            if (r9_2 s> temp1_1)
                                rcx_18.b = 1
                            else if (r9_2 != temp1_1)
                                rcx_18.b = 0
                            else
                                rcx_18.b = rsi_3.d s> r11_3.d
                            
                            int32_t* rax_24 = rdx_4
                            
                            if (rcx_18.b == 0)
                                rax_24 = r8_2
                            
                            rdx_4 = &rdx_4[1]
                            r8_2 = rax_24
                        while (rdx_4 u<= i)
                    
                    int32_t rcx_19 = *r8_2
                    *r8_2 = *i
                    *i = rcx_19
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int32_t* r9 = i + 4
            int64_t rdx = sx.q(rax_8 s>> 1)
            int32_t* r8 = r10_1
            int32_t rcx_3 = r10_1[rdx]
            r10_1[rdx] = *r10_1
            *r10_1 = rcx_3
            int32_t rax_13
            
            while (true)
                r8 = &r8[1]
                
                if (r8 u<= i)
                    int64_t rsi_1 = sx.q(*r10_1)
                    int64_t r11_1 = sx.q(*r8)
                    int64_t rdx_1 = **arg4
                    int32_t rbp_1 = *(rsi_1 * 0xd8 + rdx_1 + 0x98)
                    int32_t temp0_3 = *(r11_1 * 0xd8 + rdx_1 + 0x98)
                    
                    if (rbp_1 s<= temp0_3)
                        if (rbp_1 != temp0_3)
                            continue
                        else if (rsi_1.d s<= r11_1.d)
                            continue
                
                while (true)
                    r9 = &r9[-1]
                    
                    if (r9 u<= r10_1)
                        break
                    
                    int64_t rsi_2 = sx.q(*r9)
                    int64_t r11_2 = sx.q(*r10_1)
                    int64_t rdx_2 = **arg4
                    int32_t rbp_2 = *(rsi_2 * 0xd8 + rdx_2 + 0x98)
                    int32_t temp2_1 = *(r11_2 * 0xd8 + rdx_2 + 0x98)
                    
                    if (rbp_2 s> temp2_1)
                        break
                    
                    if (rbp_2 == temp2_1)
                        if (rsi_2.d s> r11_2.d)
                            break
                
                rax_13 = *r9
                
                if (r8 u> r9)
                    break
                
                int32_t rcx_8 = *r8
                *r8 = rax_13
                *r9 = rcx_8
            
            int32_t rcx_9 = *r10_1
            r15_1 -= 1
            *r10_1 = rax_13
            *r9 = rcx_9
            
            if (((r9 - r10_1 - 4) & 0xfffffffffffffffc) s< ((i - r8) & 0xfffffffffffffffc))
                if (i u> r8)
                    *r12_1 = r8
                    r12_1[1] = i
                    r12_1[2].d = r15_1
                    r12_1 = &r12_1[3]
                
                if (&r10_1[1] u>= r9)
                    break
                
                i = &r9[-1]
            else
                if (&r10_1[1] u< r9)
                    *r12_1 = r10_1
                    r12_1[1] = &r9[-1]
                    r12_1[2].d = r15_1
                    r12_1 = &r12_1[3]
                
                if (i u<= r8)
                    break
                
                r10_1 = r8
            
            rax_8 = ((i - r10_1) s>> 2).d + 1
            
            if (r15_1 == 0)
                goto label_14237bc77
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)

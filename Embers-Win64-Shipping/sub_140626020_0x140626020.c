// 函数: sub_140626020
// 地址: 0x140626020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_358
int64_t rax_2 = __security_cookie ^ &var_358
int64_t var_318 = arg1
int64_t var_310_1 = arg1 + (sx.q(arg2) << 2) - 4
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_308_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_300
memset(&var_300, 0, 0x2e8)
int64_t* rsi_1 = &var_318

while (true)
    uint128_t zmm2 = *rsi_1
    int32_t r11_1 = (rsi_1[2]).d
    int32_t* r8_1 = zmm2.q
    void* i_2 = _mm_bsrli_si128(zmm2, 8).q
    int32_t i = ((i_2 - r8_1) s>> 2).d + 1
    int32_t zmm0_2
    uint128_t zmm1
    
    if (r11_1 == 0)
    label_1406261f1:
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(i - 2)
        uint64_t rax_15 = zx.q((temp1_1 - temp0_3) s>> 1)
        int32_t rbx_1 = rax_15.d
        
        if (rax_15.d s>= 0)
            int32_t rdi_1 = ((rax_15 << 1) + 1).d
            int32_t temp2_1
            
            do
                uint64_t r11_2 = zx.q(rbx_1)
                
                if (rdi_1 s< i)
                    uint64_t rdx_2
                    
                    do
                        rdx_2 = zx.q(((r11_2 << 1) + 1).d)
                        int32_t r10_1 = (rdx_2 + 1).d
                        
                        if (r10_1 s< i)
                            if (r8_1[sx.q(rdx_2.d)] f> r8_1[sx.q(r10_1)])
                                r10_1 = rdx_2.d
                            
                            rdx_2 = zx.q(r10_1)
                        
                        int64_t rax_17 = sx.q(r11_2.d)
                        int64_t rcx_9 = sx.q(rdx_2.d)
                        zmm1 = r8_1[rax_17]
                        zmm0_2 = r8_1[rcx_9]
                        
                        if (zmm1.d f>= zmm0_2)
                            break
                        
                        r8_1[rax_17] = zmm0_2
                        r11_2 = zx.q(rdx_2.d)
                        r8_1[rcx_9] = zmm1.d
                    while (((rdx_2 << 1) + 1).d s< i)
                
                rdi_1 -= 2
                temp2_1 = rbx_1
                rbx_1 -= 1
            while (temp2_1 - 1 s>= 0)
        
        int32_t j = i - 1
        int64_t i_1 = sx.q(j)
        
        if (j s> 0)
            do
                zmm0_2 = *r8_1
                uint64_t r11_3 = 0
                *r8_1 = r8_1[i_1]
                r8_1[i_1] = zmm0_2
                
                if (j s> 1)
                    uint64_t rdx_3
                    
                    do
                        rdx_3 = zx.q(((r11_3 << 1) + 1).d)
                        int32_t r9_9 = (rdx_3 + 1).d
                        
                        if (r9_9 s< j)
                            if (r8_1[sx.q(rdx_3.d)] f> r8_1[sx.q(r9_9)])
                                r9_9 = rdx_3.d
                            
                            rdx_3 = zx.q(r9_9)
                        
                        int64_t rax_21 = sx.q(r11_3.d)
                        int64_t rcx_11 = sx.q(rdx_3.d)
                        zmm1 = r8_1[rax_21]
                        zmm0_2 = r8_1[rcx_11]
                        
                        if (zmm1.d f>= zmm0_2)
                            break
                        
                        r8_1[rax_21] = zmm0_2
                        r11_3 = zx.q(rdx_3.d)
                        r8_1[rcx_11] = zmm1.d
                    while (((rdx_3 << 1) + 1).d s< j)
                
                j -= 1
                i_1 -= 1
            while (i_1 s> 0)
    else
        while (true)
            if (i s<= 8)
                for (; i_2 u> r8_1; i_2 -= 4)
                    int32_t* rcx_14 = r8_1
                    int32_t* rax_23 = &r8_1[1]
                    
                    if (&r8_1[1] u<= i_2)
                        do
                            if (*rcx_14 f< *rax_23)
                                rcx_14 = rax_23
                            
                            rax_23 = &rax_23[1]
                        while (rax_23 u<= i_2)
                    
                    zmm0_2 = *rcx_14
                    *rcx_14 = *i_2
                    *i_2 = zmm0_2
                
                break
            
            if (i s< 0)
                i += 1
            
            int32_t* rdx = r8_1
            int64_t rcx_3 = sx.q(i s>> 1)
            int32_t* r9_5 = i_2 + 4
            zmm0_2 = r8_1[rcx_3]
            r8_1[rcx_3] = *r8_1
            *r8_1 = zmm0_2
            
            while (true)
                rdx = &rdx[1]
                
                if (rdx u<= i_2 && *rdx f<= *r8_1)
                    continue
                
                do
                    zmm1 = r9_5[-1]
                    r9_5 = &r9_5[-1]
                    
                    if (r9_5 u<= r8_1)
                        break
                while (zmm1.d f>= *r8_1)
                
                if (rdx u> r9_5)
                    break
                
                zmm0_2 = *rdx
                *rdx = zmm1.d
                *r9_5 = zmm0_2
            
            zmm0_2 = *r8_1
            *r8_1 = zmm1.d
            *r9_5 = zmm0_2
            r11_1 -= 1
            
            if (((r9_5 - r8_1 - 4) & 0xfffffffffffffffc) s< ((i_2 - rdx) & 0xfffffffffffffffc))
                if (i_2 u> rdx)
                    *rsi_1 = rdx
                    rsi_1[1] = i_2
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r8_1[1] u>= r9_5)
                    break
                
                i_2 = &r9_5[-1]
            else
                if (&r8_1[1] u< r9_5)
                    *rsi_1 = r8_1
                    rsi_1[1] = &r9_5[-1]
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i_2 u<= rdx)
                    break
                
                r8_1 = rdx
            
            i = ((i_2 - r8_1) s>> 2).d + 1
            
            if (r11_1 == 0)
                goto label_1406261f1
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_318)
        break

__security_check_cookie(rax_2 ^ &var_358)

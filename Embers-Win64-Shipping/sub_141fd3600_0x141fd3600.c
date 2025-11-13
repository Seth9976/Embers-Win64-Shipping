// 函数: sub_141fd3600
// 地址: 0x141fd3600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int64_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r10_1 = r11_1 * 2
                uint64_t rdx_1 = zx.q(r10_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    int32_t* rax_8 = *(*(arg1 + (sx.q(r10_1) + 2) * 0x18) + 0xd0)
                    int32_t rax_9
                    int32_t rcx_2
                    
                    if (rax_8 == 0)
                        rcx_2 = 0
                        rax_9 = 0
                    else
                        rcx_2 = rax_8[1]
                        rax_9 = *rax_8
                    
                    if (rax_9 s>= rcx_2)
                        rcx_2 = rax_9
                    
                    int32_t* r8_2 = *(*(arg1 + sx.q(rdx_1.d) * 0x18) + 0xd0)
                    int32_t rax_11
                    int32_t r9_1
                    
                    if (r8_2 == 0)
                        rax_11 = 0
                        r9_1 = 0
                    else
                        rax_11 = r8_2[1]
                        r9_1 = *r8_2
                    
                    if (r9_1 s>= rax_11)
                        rax_11 = r9_1
                    
                    if (rcx_2 s< rax_11)
                        rdx_1 = zx.q(r10_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int64_t* r9_2 = arg1 + sx.q(rdx_1.d) * 0x18
                int64_t rcx_4 = sx.q(r11_1) * 3
                int128_t* r10_2 = arg1 + (rcx_4 << 3)
                int32_t* r8_3 = *(*(arg1 + (rcx_4 << 3)) + 0xd0)
                int32_t rax_15
                int32_t rcx_5
                
                if (r8_3 == 0)
                    rcx_5 = 0
                    rax_15 = 0
                else
                    rcx_5 = r8_3[1]
                    rax_15 = *r8_3
                
                if (rax_15 s>= rcx_5)
                    rcx_5 = rax_15
                
                int32_t* r8_4 = *(*r9_2 + 0xd0)
                int32_t result_1
                
                if (r8_4 == 0)
                    result = 0
                    result_1 = 0
                else
                    result = zx.q(r8_4[1])
                    result_1 = *r8_4
                
                if (result_1 s>= result.d)
                    result = zx.q(result_1)
                
                if (rcx_5 s>= result.d)
                    break
                
                if (r10_2 != r9_2)
                    zmm3 = *r10_2
                    zmm2 = r10_2[1].q
                    *r10_2 = *r9_2
                    r10_2[1].q = r9_2[2]
                    *r9_2 = zmm3
                    r9_2[2] = zmm2
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r11_1 = rdx_1.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rsi_1 = arg1 + result * 0x18
    
    do
        if (arg1 != rsi_1)
            zmm3 = *arg1
            zmm2 = arg1[1].q
            *arg1 = *rsi_1
            arg1[1].q = rsi_1[1].q
            *rsi_1 = zmm3
            rsi_1[1].q = zmm2
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t result_2 = r11_2 * 2
                result = zx.q(result_2 + 1)
                
                if ((result + 1).d s< i)
                    int32_t* rcx_12 = *(*(arg1 + (sx.q(result_2) + 2) * 0x18) + 0xd0)
                    int32_t rcx_13
                    int32_t rdx_4
                    
                    if (rcx_12 == 0)
                        rdx_4 = 0
                        rcx_13 = 0
                    else
                        rdx_4 = rcx_12[1]
                        rcx_13 = *rcx_12
                    
                    if (rcx_13 s>= rdx_4)
                        rdx_4 = rcx_13
                    
                    int32_t* r8_6 = *(*(arg1 + sx.q(result.d) * 0x18) + 0xd0)
                    int32_t rcx_15
                    int32_t r9_3
                    
                    if (r8_6 == 0)
                        rcx_15 = 0
                        r9_3 = 0
                    else
                        rcx_15 = r8_6[1]
                        r9_3 = *r8_6
                    
                    if (r9_3 s>= rcx_15)
                        rcx_15 = r9_3
                    
                    if (rdx_4 s< rcx_15)
                        result = zx.q(result_2)
                    
                    result = zx.q(result.d + 1)
                
                void* r9_4 = arg1 + sx.q(result.d) * 0x18
                int64_t rdx_6 = sx.q(r11_2) * 3
                void* r10_3 = arg1 + (rdx_6 << 3)
                int32_t* r8_7 = *(*(arg1 + (rdx_6 << 3)) + 0xd0)
                int32_t rcx_19
                int32_t rdx_7
                
                if (r8_7 == 0)
                    rdx_7 = 0
                    rcx_19 = 0
                else
                    rdx_7 = r8_7[1]
                    rcx_19 = *r8_7
                
                if (rcx_19 s>= rdx_7)
                    rdx_7 = rcx_19
                
                int32_t* r8_8 = *(*r9_4 + 0xd0)
                int32_t rcx_21
                int32_t r8_9
                
                if (r8_8 == 0)
                    rcx_21 = 0
                    r8_9 = 0
                else
                    rcx_21 = r8_8[1]
                    r8_9 = *r8_8
                
                if (r8_9 s>= rcx_21)
                    rcx_21 = r8_9
                
                if (rdx_7 s>= rcx_21)
                    break
                
                if (r10_3 != r9_4)
                    zmm3 = *r10_3
                    zmm2 = *(r10_3 + 0x10)
                    *r10_3 = *r9_4
                    *(r10_3 + 0x10) = *(r9_4 + 0x10)
                    *r9_4 = zmm3
                    *(r9_4 + 0x10) = zmm2
                
                r11_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_1 -= 0x18
    while (i s> 0)

return result

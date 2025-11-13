// 函数: sub_14217faf0
// 地址: 0x14217faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r11_1 = r10_1 * 2
                uint64_t r9_1 = zx.q(r11_1 + 1)
                
                if ((r9_1 + 1).d s< arg2)
                    int64_t rcx_1 = sx.q(r9_1.d) * 2
                    int64_t r8_3 = (sx.q(r11_1) + 2) * 2
                    int32_t rdx_1
                    rdx_1.b = *(arg1 + (rcx_1 << 3) + 0xa) == 0
                    int32_t rax_4
                    rax_4.b = *(arg1 + (rcx_1 << 3) + 9) == 0
                    int32_t rax_5
                    rax_5.b = *(arg1 + (rcx_1 << 3) + 8) == 0
                    int32_t rcx_2
                    rcx_2.b = *(arg1 + (r8_3 << 3) + 0xa) == 0
                    int32_t rax_6
                    rax_6.b = *(arg1 + (r8_3 << 3) + 9) == 0
                    int32_t rax_7
                    rax_7.b = *(arg1 + (r8_3 << 3) + 8) == 0
                    
                    if (rcx_2 + rax_6 + rax_7 u< rdx_1 + rax_4 + rax_5)
                        r9_1 = zx.q(r11_1)
                    
                    r9_1 = zx.q(r9_1.d + 1)
                
                int128_t* r10_4 = &arg1[sx.q(r10_1)]
                int128_t* r8_6 = &arg1[sx.q(r9_1.d)]
                int32_t rdx_4
                rdx_4.b = *(r8_6 + 0xa) == 0
                int32_t rax_8
                rax_8.b = *(r8_6 + 9) == 0
                int32_t rax_9
                rax_9.b = *(r8_6 + 8) == 0
                int32_t rcx_5
                rcx_5.b = *(r10_4 + 0xa) == 0
                int32_t rax_10
                rax_10.b = *(r10_4 + 9) == 0
                result.b = *(r10_4 + 8) == 0
                
                if (rcx_5 + rax_10 + result.d u>= rdx_4 + rax_8 + rax_9)
                    break
                
                if (r10_4 != r8_6)
                    zmm1 = *r10_4
                    *r10_4 = *r8_6
                    *r8_6 = zmm1
                
                result = zx.q(((r9_1 << 1) + 1).d)
                r10_1 = r9_1.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rsi_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != rsi_3)
            zmm1 = *arg1
            *arg1 = *rsi_3
            *rsi_3 = zmm1
        
        int32_t r10_5 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r10_5 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    int64_t rdx_8 = sx.q(result.d) * 2
                    int64_t r9_4 = (sx.q(result_1) + 2) * 2
                    int32_t r8_7
                    r8_7.b = *(arg1 + (rdx_8 << 3) + 0xa) == 0
                    int32_t rcx_9
                    rcx_9.b = *(arg1 + (rdx_8 << 3) + 9) == 0
                    int32_t rcx_10
                    rcx_10.b = *(arg1 + (rdx_8 << 3) + 8) == 0
                    int32_t rdx_9
                    rdx_9.b = *(arg1 + (r9_4 << 3) + 0xa) == 0
                    int32_t rcx_11
                    rcx_11.b = *(arg1 + (r9_4 << 3) + 9) == 0
                    int32_t rcx_12
                    rcx_12.b = *(arg1 + (r9_4 << 3) + 8) == 0
                    
                    if (rdx_9 + rcx_11 + rcx_12 u< r8_7 + rcx_9 + rcx_10)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r10_8 = &arg1[sx.q(r10_5)]
                void* r9_7 = &arg1[sx.q(result.d)]
                int32_t r8_10
                r8_10.b = *(r9_7 + 0xa) == 0
                int32_t rcx_13
                rcx_13.b = *(r9_7 + 9) == 0
                int32_t rcx_14
                rcx_14.b = *(r9_7 + 8) == 0
                int32_t rdx_12
                rdx_12.b = *(r10_8 + 0xa) == 0
                int32_t rcx_15
                rcx_15.b = *(r10_8 + 9) == 0
                int32_t rcx_16
                rcx_16.b = *(r10_8 + 8) == 0
                
                if (rdx_12 + rcx_15 + rcx_16 u>= r8_10 + rcx_13 + rcx_14)
                    break
                
                if (r10_8 != r9_7)
                    zmm1 = *r10_8
                    *r10_8 = *r9_7
                    *r9_7 = zmm1
                
                r10_5 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_3 -= 0x10
    while (i s> 0)

return result

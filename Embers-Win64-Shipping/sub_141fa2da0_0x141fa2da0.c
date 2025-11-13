// 函数: sub_141fa2da0
// 地址: 0x141fa2da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int64_t zmm2
uint128_t zmm3
int128_t zmm4

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r9_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r8_1 = r9_1 * 2
                uint64_t rdx_1 = zx.q(r8_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    int32_t* r11_1 = arg1 + (sx.q(r8_1) + 2) * 0x28
                    int64_t rcx = sx.q(rdx_1.d) * 5
                    uint64_t rax_8 = *(arg1 + (rcx << 3) + 0x20)
                    int64_t temp4_1 = *(r11_1 + 0x20)
                    
                    if (rax_8 u< temp4_1 || (rax_8 == temp4_1 && *(arg1 + (rcx << 3)) s< *r11_1))
                        rax_8.b = 1
                    else
                        rax_8.b = 0
                    
                    if (rax_8.b != 0)
                        rdx_1 = zx.q(r8_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int32_t* r9_2 = arg1 + sx.q(r9_1) * 0x28
                int64_t rcx_2 = sx.q(rdx_1.d) * 5
                result = *(arg1 + (rcx_2 << 3) + 0x20)
                int32_t* r8_2 = arg1 + (rcx_2 << 3)
                int64_t temp3_1 = *(r9_2 + 0x20)
                
                if (result u>= temp3_1)
                    if (result != temp3_1)
                        break
                    
                    result = zx.q(*r9_2)
                    
                    if (*r8_2 s>= result.d)
                        break
                
                if (r9_2 != r8_2)
                    zmm3 = *r9_2
                    zmm4 = *(r9_2 + 0x10)
                    zmm2 = *(r9_2 + 0x20)
                    *r9_2 = *r8_2
                    *(r9_2 + 0x10) = *(r8_2 + 0x10)
                    *(r9_2 + 0x20) = *(r8_2 + 0x20)
                    *r8_2 = zmm3
                    *(r8_2 + 0x10) = zmm4
                    *(r8_2 + 0x20) = zmm2
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r9_1 = rdx_1.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    uint128_t* rsi_1 = arg1 + result * 0x28
    
    do
        if (arg1 != rsi_1)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm2 = arg1[2].q
            *arg1 = *rsi_1
            arg1[1] = rsi_1[1]
            arg1[2].q = rsi_1[2].q
            *rsi_1 = zmm3
            rsi_1[1] = zmm4
            rsi_1[2].q = zmm2
        
        int32_t r9_3 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r9_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    void* rbx_2 = arg1 + (sx.q(result_1) + 2) * 0x28
                    int64_t rdx_2 = sx.q(result.d) * 5
                    uint64_t rcx_9 = *(arg1 + (rdx_2 << 3) + 0x20)
                    int64_t temp6_1 = *(rbx_2 + 0x20)
                    
                    if (rcx_9 u< temp6_1 || (rcx_9 == temp6_1 && *(arg1 + (rdx_2 << 3)) s< *rbx_2))
                        rcx_9.b = 1
                    else
                        rcx_9.b = 0
                    
                    if (rcx_9.b != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int32_t* r9_4 = arg1 + sx.q(r9_3) * 0x28
                int64_t rdx_4 = sx.q(result.d) * 5
                int64_t rcx_12 = *(arg1 + (rdx_4 << 3) + 0x20)
                uint128_t* r8_3 = arg1 + (rdx_4 << 3)
                int64_t temp5_1 = *(r9_4 + 0x20)
                
                if (rcx_12 u>= temp5_1)
                    if (rcx_12 != temp5_1)
                        break
                    
                    if (*r8_3 s>= *r9_4)
                        break
                
                if (r9_4 != r8_3)
                    zmm3 = *r9_4
                    zmm4 = *(r9_4 + 0x10)
                    zmm2 = *(r9_4 + 0x20)
                    *r9_4 = *r8_3
                    *(r9_4 + 0x10) = r8_3[1]
                    *(r9_4 + 0x20) = r8_3[2].q
                    *r8_3 = zmm3
                    r8_3[1] = zmm4
                    r8_3[2].q = zmm2
                
                r9_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_1 -= 0x28
    while (i s> 0)

return result

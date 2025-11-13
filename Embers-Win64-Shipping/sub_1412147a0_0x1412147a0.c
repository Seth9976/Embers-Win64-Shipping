// 函数: sub_1412147a0
// 地址: 0x1412147a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int64_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rdi
        
        if (rsi_1 s< arg2)
            do
                int32_t result_1 = r11_1 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< arg2)
                    if (*(arg1 + (sx.q(result_1) + 2) * 0x18) s< *(arg1 + sx.q(result.d) * 0x18))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int32_t* r8_2 = arg1 + sx.q(result.d) * 0x18
                int64_t rdx_3 = sx.q(r11_1) * 3
                
                if (*(arg1 + (rdx_3 << 3)) s>= *r8_2)
                    break
                
                r11_1 = result.d
                result = zx.q(((result << 1) + 1).d)
                zmm2 = *(arg1 + (rdx_3 << 3) + 0x10)
                zmm3 = *(arg1 + (rdx_3 << 3))
                *(arg1 + (rdx_3 << 3)) = *r8_2
                *(arg1 + (rdx_3 << 3) + 0x10) = *(r8_2 + 0x10)
                *r8_2 = zmm3
                *(r8_2 + 0x10) = zmm2
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    int64_t rsi_3 = i * 0x18
    
    do
        int32_t r11_2 = 0
        zmm2 = arg1[1].q
        zmm3 = *arg1
        *arg1 = *(rsi_3 + arg1)
        arg1[1].q = *(rsi_3 + arg1 + 0x10)
        *(rsi_3 + arg1) = zmm3
        *(rsi_3 + arg1 + 0x10) = zmm2
        
        if (j s> 1)
            do
                int32_t r10_1 = r11_2 * 2
                uint64_t r8_3 = zx.q(r10_1 + 1)
                
                if ((r8_3 + 1).d s< j)
                    if (*(arg1 + (sx.q(r10_1) + 2) * 0x18) s< *(arg1 + sx.q(r8_3.d) * 0x18))
                        r8_3 = zx.q(r10_1)
                    
                    r8_3 = zx.q(r8_3.d + 1)
                
                int32_t* rdx_5 = arg1 + sx.q(r8_3.d) * 0x18
                int64_t rcx_10 = sx.q(r11_2) * 3
                result = zx.q(*rdx_5)
                
                if (*(arg1 + (rcx_10 << 3)) s>= result.d)
                    break
                
                result = zx.q(((r8_3 << 1) + 1).d)
                r11_2 = r8_3.d
                zmm2 = *(arg1 + (rcx_10 << 3) + 0x10)
                zmm3 = *(arg1 + (rcx_10 << 3))
                *(arg1 + (rcx_10 << 3)) = *rdx_5
                *(arg1 + (rcx_10 << 3) + 0x10) = *(rdx_5 + 0x10)
                *rdx_5 = zmm3
                *(rdx_5 + 0x10) = zmm2
            while (result.d s< j)
        
        j -= 1
        i -= 1
        rsi_3 -= 0x18
    while (i s> 0)

return result

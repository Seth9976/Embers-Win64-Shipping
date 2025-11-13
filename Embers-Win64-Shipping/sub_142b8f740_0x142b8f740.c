// 函数: sub_142b8f740
// 地址: 0x142b8f740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 0x214))
int32_t r10 = *(arg1 + 0x214)

if (r10 s> result.d)
    int32_t rcx = *(arg1 + 0x210)
    int32_t r10_1 = r10 - result.d
    
    if (rcx + r10_1 s> 0x80)
        abort()
        noreturn
    
    result = zx.q(rcx - 1)
    int64_t r11_1 = sx.q(r10_1)
    int64_t r9_1 = sx.q(result.d)
    
    if (result.d s>= 0)
        int64_t temp0_1
        
        do
            int64_t rdx = *(arg1 + 0x200)
            int64_t rcx_1 = (r11_1 << 2) + (r9_1 << 2)
            result = zx.q(*(rdx + (r9_1 << 2)))
            temp0_1 = r9_1
            r9_1 -= 1
            *(rcx_1 + rdx) = result.d
        while (temp0_1 - 1 s>= 0)
    
    int64_t rcx_2 = 0
    
    if (r10_1 s> 0)
        do
            result = *(arg1 + 0x200)
            *(result + (rcx_2 << 2)) = 0
            rcx_2 += 1
        while (rcx_2 s< r11_1)
    
    *(arg1 + 0x210) += r10_1
    *(arg1 + 0x214) -= r10_1

return result

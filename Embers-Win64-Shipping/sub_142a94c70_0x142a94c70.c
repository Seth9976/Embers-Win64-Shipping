// 函数: sub_142a94c70
// 地址: 0x142a94c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int32_t rcx_1 = arg1 + 2
int32_t i = *(&data_1436438d0 + (sx.q(arg1 + 1) << 2))

if (i s>= 0x10)
    int64_t rax_10 = sx.q(rcx_1)
    int32_t r10_3 = rcx_1 - 0x10 + i
    int32_t r11_1 = rcx_1
    
    while (true)
        int32_t rdx_1 = *(&data_1436438d0 + (rax_10 << 2))
        
        if (arg2 s< rdx_1)
            break
        
        if (arg2 == rdx_1)
            return zx.q(*(&data_1436438d0 + (sx.q(rcx_1 + r10_3 - r11_1) << 2)))
        
        rcx_1 += 1
        rax_10 += 1
        
        if (rax_10 s>= sx.q(r10_3))
            return 0
else
    while (i s> 0)
        int32_t r10_1 = *(&data_1436438d0 + (sx.q(rcx_1) << 2))
        int32_t rax_4 = *(&data_1436438d0 + (sx.q(rcx_1 + 1) << 2))
        
        if (arg2 s< r10_1)
            break
        
        if (arg2 s< rax_4)
            return zx.q(*(&data_1436438d0 + (sx.q(arg2 + rcx_1 + 2 - r10_1) << 2)))
        
        i -= 1
        rcx_1 = rcx_1 + 2 + rax_4 - r10_1

return 0

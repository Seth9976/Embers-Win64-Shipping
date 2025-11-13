// 函数: sub_142b1f590
// 地址: 0x142b1f590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1[6]
arg1[7] = result

if (arg1[3] u< result)
    arg1[6] = result - 2
    uint32_t rdx_1 = zx.d(*(result - 2))
    
    if ((rdx_1 & 0xfffffc00) == 0xdc00 && arg1[2] u< result - 2)
        uint32_t r9_1 = zx.d(*(result - 4))
        
        if ((r9_1 & 0xfffffc00) == 0xd800)
            arg1[6] = result - 4
            rdx_1 += (r9_1 - 0xd7f7) << 0xa
    
    void* rcx = *arg1
    
    if (rdx_1 s>= zx.d(*(rcx + 0xa)))
        result = sub_142af42a0(rcx, rdx_1)
        
        if (result.w u>= 0xfc00)
            result.w u>>= 1
            return result

result.b = 0
return result

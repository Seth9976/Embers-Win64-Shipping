// 函数: sub_141e247c0
// 地址: 0x141e247c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
*arg4 = *(arg1 + 0x90)

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x150))
    void* r8_1 = sx.q(arg2) * 0x58 + *(arg1 + 0x148)
    char rax_2 = *(r8_1 + 0x19)
    float zmm1
    
    if (rax_2 == 0)
        zmm1 = *(r8_1 + 0x24)
    else
        uint32_t rcx = zx.d(rax_2)
        
        if (rcx == 1)
            zmm1 = *(r8_1 + 0x24) f+ *(r8_1 + 0x1c)
        else if (rcx != 2)
            zmm1 = *(r8_1 + 0x24)
        else
            zmm1 = *(r8_1 + 0x24) f* *(r8_1 + 0x20) f+ *(r8_1 + 0x1c)
    
    *arg3 = zmm1

uint32_t result = arg2 + 1

if (result s>= 0 && result s< *(arg1 + 0x150))
    void* rcx_3 = (sx.q(arg2) + 1) * 0x58 + *(arg1 + 0x148)
    result = zx.d(*(rcx_3 + 0x19))
    
    if (result.b != 0)
        uint32_t rdx = zx.d(result.b)
        
        if (rdx == 1)
            *arg4 = *(rcx_3 + 0x24) f+ *(rcx_3 + 0x1c)
            return result
        
        if (rdx == 2)
            *arg4 = *(rcx_3 + 0x24) f* *(rcx_3 + 0x20) f+ *(rcx_3 + 0x1c)
            return result
    
    *arg4 = *(rcx_3 + 0x24)

return result

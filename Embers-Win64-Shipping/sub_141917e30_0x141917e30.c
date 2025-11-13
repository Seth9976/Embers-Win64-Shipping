// 函数: sub_141917e30
// 地址: 0x141917e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*(arg1 + 0x2d4))

if (*(arg2 + 0x3f4) != result.b)
    if (result.b == 0)
        data_143eff9e8(0xc11)
    else
        data_143effa08(0xc11)
    
    *(arg2 + 0x3f4) = *(arg1 + 0x2d4)
    result = zx.d(*(arg1 + 0x2d4))

if (result.b != 0)
    int32_t rcx = *(arg1 + 0x2d8)
    
    if (*(arg2 + 0x3f8) == rcx && *(arg2 + 0x3fc) == *(arg1 + 0x2dc)
            && *(arg2 + 0x400) == *(arg1 + 0x2e0))
        result = *(arg1 + 0x2e4)
    
    if (*(arg2 + 0x3f8) != rcx || *(arg2 + 0x3fc) != *(arg1 + 0x2dc)
            || *(arg2 + 0x400) != *(arg1 + 0x2e0) || *(arg2 + 0x404) != result)
        int32_t rdx = *(arg1 + 0x2dc)
        data_143effaf0(rcx, rdx, zx.q(*(arg1 + 0x2e0) - rcx), zx.q(*(arg1 + 0x2e4) - rdx))
        *(arg2 + 0x3f8) = *(arg1 + 0x2d8)
        *(arg2 + 0x3fc) = *(arg1 + 0x2dc)
        *(arg2 + 0x400) = *(arg1 + 0x2e0)
        result = *(arg1 + 0x2e4)
        *(arg2 + 0x404) = result

return result

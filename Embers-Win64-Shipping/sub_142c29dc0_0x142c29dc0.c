// 函数: sub_142c29dc0
// 地址: 0x142c29dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (*(arg2 + 0x10) == 1)
    uint16_t rcx = zx.w(*(arg1 + 2))
    uint64_t r10_1 = zx.q(*(arg1 + 3))
    int128_t* const rcx_1
    
    if (0 != rcx * 0x100 + r10_1.w)
        rcx_1 = (zx.q(rcx.b) << 8) + arg1 + r10_1
    else
        rcx_1 = &data_14369a5d0
    
    int32_t rdx = **(arg2 + 8)
    uint32_t r8_5 = (zx.d(*rcx_1) << 8) + zx.d(*(rcx_1 + 1))
    
    if (r8_5 == 1)
        result = sub_142c1e900(rcx_1, rdx)
    label_142c29e31:
        
        if (result != 0xffffffff)
            result.b = 1
            return result
    else if (r8_5 == 2)
        result = sub_142c1e990(rcx_1, rdx)
        goto label_142c29e31

result.b = 0
return result

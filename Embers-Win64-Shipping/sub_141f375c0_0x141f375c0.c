// 函数: sub_141f375c0
// 地址: 0x141f375c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x71e))

if ((result.b & 0x10) != 0)
    result.b &= 0xef
    *(arg1 + 0x71e) = result.b
    int64_t** rbx_1 = *(arg1 + 0x6c0)
    int64_t rdi_1 = 0
    result = &rbx_1[sx.q(*(arg1 + 0x6c8))]
    uint64_t rsi_2 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3
    
    if (rbx_1 u> result)
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            result = sub_141df77f0(*rbx_1)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != rsi_2)
    
    int64_t* rcx_1 = *(arg1 + 0x650)
    
    if (rcx_1 != 0)
        result = sub_141df77f0(rcx_1)
    
    int64_t* rcx_2 = *(arg1 + 0x658)
    
    if (rcx_2 != 0)
        return sub_141df77f0(rcx_2) __tailcall

return result

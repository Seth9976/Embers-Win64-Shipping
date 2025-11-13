// 函数: sub_1427d0f40
// 地址: 0x1427d0f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x34) != 0)
    int64_t r10_1 = *arg2
    int64_t rcx_3 = not.q(r10_1 << 0x20) + r10_1
    int64_t rcx_4 = rcx_3 ^ rcx_3 u>> 0x16
    int64_t rcx_5 = rcx_4 + not.q(rcx_4 << 0xd)
    int64_t rcx_6 = (rcx_5 u>> 8 ^ rcx_5) * 9
    int64_t rcx_7 = rcx_6 ^ rcx_6 u>> 0xf
    int64_t rcx_8 = rcx_7 + not.q(rcx_7 << 0x1b)
    uint64_t rax_16 = zx.q(*(*(arg1 + 0x18)
        + (((zx.q((rcx_8 u>> 0x1f).d) ^ zx.q(rcx_8.d)) & zx.q(*(arg1 + 0x24) - 1)) << 2)))
    
    if (rax_16.d != 0xffffffff)
        int64_t r9_1 = *(arg1 + 8)
        
        do
            if (*(r9_1 + zx.q(rax_16.d) * 0x10) == r10_1)
                if (rax_16.d != 0xffffffff)
                    return (rax_16 << 4) + r9_1
                
                break
            
            rax_16 = zx.q(*(*(arg1 + 0x10) + (zx.q(rax_16.d) << 2)))
        while (rax_16.d != 0xffffffff)

return 0

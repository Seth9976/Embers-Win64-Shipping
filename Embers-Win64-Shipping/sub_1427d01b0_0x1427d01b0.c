// 函数: sub_1427d01b0
// 地址: 0x1427d01b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x44) != 0)
    uint32_t r8_1 = zx.d(arg2)
    uint32_t r8_2 = r8_1 + not.d(r8_1 << 0xf)
    uint32_t rcx = ((zx.q(r8_2 u>> 0xa) ^ zx.q(r8_2)) * 9).d
    uint32_t rcx_1 = rcx ^ rcx u>> 6
    uint64_t rax_12 = zx.q(not.d(rcx_1 << 0xb) + rcx_1)
    uint64_t rax_14 = zx.q(
        *(*(arg1 + 0x28) + (((zx.q(rax_12.d) u>> 0x10 ^ rax_12) & zx.q(*(arg1 + 0x34) - 1)) << 2)))
    
    if (rax_14.d != 0xffffffff)
        int64_t r8_3 = *(arg1 + 0x18)
        
        do
            if (*(r8_3 + zx.q(rax_14.d) * 0x10) == arg2)
                if (rax_14.d != 0xffffffff)
                    uint64_t rax_17 = rax_14 << 4
                    
                    if (rax_17 != neg.q(r8_3))
                        return *(rax_17 + r8_3 + 8)
                
                break
            
            rax_14 = zx.q(*(*(arg1 + 0x20) + (zx.q(rax_14.d) << 2)))
        while (rax_14.d != 0xffffffff)

return 0

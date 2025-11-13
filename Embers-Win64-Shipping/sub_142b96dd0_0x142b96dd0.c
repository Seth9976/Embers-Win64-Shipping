// 函数: sub_142b96dd0
// 地址: 0x142b96dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
uint64_t rcx = zx.q(*(arg1 + 0xc))

if ((rcx + 3).d u< arg1[1].d)
    int64_t rax_1 = arg1[4]
    void* rdx_1
    
    if (rax_1 == 0)
        rdx_1 = rcx + *arg1
        
        if (rcx != neg.q(*arg1))
            goto label_142b96e40
        
        *(arg1 + 0xc) += 4
        return 0
    
    void arg_8
    
    if (rax_1(arg1, zx.q(rcx.d), &arg_8, 4) == 4)
        rdx_1 = &arg_8
    label_142b96e40:
        uint32_t r8 =
            ((zx.d(*(rdx_1 + 3)) << 8 | zx.d(*(rdx_1 + 2))) << 8 | zx.d(*(rdx_1 + 1))) << 8
            | zx.d(*rdx_1)
        *(arg1 + 0xc) += 4
        return zx.q(r8)

*arg2 = 0x55
return 0

// 函数: sub_142b96e70
// 地址: 0x142b96e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
uint64_t rcx = zx.q(*(arg1 + 0xc))

if ((rcx + 2).d u< arg1[1].d)
    int64_t rax_1 = arg1[4]
    void* rax_3
    
    if (rax_1 == 0)
        rax_3 = rcx + *arg1
        
        if (rcx != neg.q(*arg1))
            goto label_142b96ed5
        
        *(arg1 + 0xc) += 3
        return 0
    
    void arg_8
    
    if (rax_1(arg1, zx.q(rcx.d), &arg_8, 3) == 3)
        rax_3 = &arg_8
    label_142b96ed5:
        uint32_t r8 = (zx.d(*rax_3) << 8 | zx.d(*(rax_3 + 1))) << 8 | zx.d(*(rax_3 + 2))
        *(arg1 + 0xc) += 3
        return zx.q(r8)

*arg2 = 0x55
return 0

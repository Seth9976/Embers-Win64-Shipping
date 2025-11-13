// 函数: sub_142b96f00
// 地址: 0x142b96f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
uint64_t rcx = zx.q(*(arg1 + 0xc))

if ((rcx + 1).d u< arg1[1].d)
    int64_t rax_1 = arg1[4]
    void* rax_3
    
    if (rax_1 == 0)
        rax_3 = rcx + *arg1
        
        if (rcx != neg.q(*arg1))
            goto label_142b96f5c
        
        *(arg1 + 0xc) += 2
        return 0
    
    void arg_8
    
    if (rax_1(arg1, zx.q(rcx.d), &arg_8, 2) == 2)
        rax_3 = &arg_8
    label_142b96f5c:
        uint16_t rdi = zx.w(*rax_3) << 8 | zx.w(*(rax_3 + 1))
        *(arg1 + 0xc) += 2
        return zx.q(rdi)

*arg2 = 0x55
return 0

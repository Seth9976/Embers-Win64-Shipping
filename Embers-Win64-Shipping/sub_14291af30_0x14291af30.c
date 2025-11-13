// 函数: sub_14291af30
// 地址: 0x14291af30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (arg1 != 0)
    int32_t rcx = *arg1
    
    if (rcx != 1)
        if (rcx == 2)
            jump(*(arg1 + 0x10))
        
        return 0
    
    int64_t rax_2 = *(arg1 + 0x10)
    
    if (rax_2 != 0)
        rax_2(zx.q(arg2), zx.q(arg3), *(arg1 + 8))

return 1

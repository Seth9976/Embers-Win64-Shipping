// 函数: sub_142875270
// 地址: 0x142875270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (*(arg1 + 0x38) == 0 || *(arg1 + 0xc8) == 0 || *(*(arg1 + 0x508) + 0x1b0) - 1 u> 3 || arg3 != 0)
    void* rax_3 = *(arg1 + 0x508)
    
    if (rax_3 == 0)
        return 1
    
    char rcx = *(rax_3 + 0x1b0)
    
    if (rcx - 1 u> 3 || *(arg1 + 0x5f0) u>= zx.q(0x200 << (rcx - 1)))
        return 1
    
    if (sub_14285d870(arg1) != 0)
        return 1
else
    sub_142856580(arg1, arg3 + 0x6d, 0x22d, arg3 + 0x6e, "ssl\statem\extensions.c", 0x686)

return 0

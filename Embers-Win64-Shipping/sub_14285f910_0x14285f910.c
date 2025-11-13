// 函数: sub_14285f910
// 地址: 0x14285f910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(arg1 + 0x778) == 0)
    if (sub_1428821e0(arg1, 1) == 0)
        return 0
    
    int64_t* rax_2 = sub_142891ee0()
    *(arg1 + 0x778) = rax_2
    
    if (rax_2 == 0)
        sub_142856580(arg1, 0x50, 0x26a, 0x44, "ssl\statem\statem_lib.c", 0x924)
        return 0
    
    if (sub_142891c70(rax_2, *(*(arg1 + 0xa8) + 0xe8)) == 0)
        sub_142856580(arg1, 0x50, 0x26a, 0x44, "ssl\statem\statem_lib.c", 0x92b)
        return 0

return 1

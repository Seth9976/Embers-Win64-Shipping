// 函数: sub_142873df0
// 地址: 0x142873df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(arg1 + 0x28) != 0)
    int64_t* rax_1 = sub_1428a6a70(0x28)
    
    if (rax_1 != 0)
        *rax_1 = *(arg1 + 0x28)
        int64_t rax_4 = *(arg1 + 0x18)
        *(arg1 + 0x28) = rax_1
        rax_1[3] = rax_4
        rax_1[2] = 0
        rax_1[1] = 0
        return 1
    
    sub_1428a5670((rax_1 + 0x14).d, 0x27a, (rax_1 + 0x41).d, "ssl\packet.c", 0x11a)

return 0

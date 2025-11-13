// 函数: sub_142929cb0
// 地址: 0x142929cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*arg1 != 2)
    int64_t rax_1 = *(arg1 + 0x18)
    
    if (rax_1 != 0)
        (*(rax_1 + 0x18))(arg1 + 0x20)
        *(arg1 + 0x20) = 0
        *(arg1 + 0x18) = 0
else
    sub_1428a6780(*(arg1 + 0x20))

return sub_1428a6780(arg1) __tailcall

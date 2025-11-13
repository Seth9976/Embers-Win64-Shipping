// 函数: sub_14290b520
// 地址: 0x14290b520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax = sub_142891590(*(arg2 + 0x28))
int64_t* rax_1 = sub_1427ec4a0(*(arg1 + 0x28))
int64_t* rax_2 = sub_1427ec4a0(*(arg2 + 0x28))

if (rax != 0 && rax_1 != 0 && rax_2 != 0)
    int32_t rax_3 = sub_1428bf4e0(rax, rax_1, rax_2, 0)
    
    if (rax_3 == 0)
        return 1
    
    if (rax_3 == 1)
        return 0

return 0xfffffffe

// 函数: sub_140a3fb50
// 地址: 0x140a3fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a45450(arg1, arg2)
char rax_1 = (*(*arg1 + 0x210))(arg1)

if (rax_1 == 0)
    *(arg1 + 0x29) |= 1
    
    if (arg1[0x1b].b == rax_1 && ((arg1[0x14].d u>> 5).b & 1) == 0)
        arg1[0x1b].b = 0

return not.b(*(arg1 + 0x29)) & 1

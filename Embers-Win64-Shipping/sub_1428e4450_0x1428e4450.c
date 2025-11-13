// 函数: sub_1428e4450
// 地址: 0x1428e4450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rsi = *(arg1 + 0xc8)

if (*(rsi + 0x18) == 0)
    return 0

int64_t rax = sub_1428a38f0(arg3)
return (*(rsi + 0x18))(arg1, arg2, sub_14060ee10(arg3), rax)

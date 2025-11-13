// 函数: sub_142917e60
// 地址: 0x142917e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rsi = *(arg1 + 0x28)
int64_t rax = sub_142950d30(rsi + 0x18)
*arg3 = rax

if (arg2 == 0)
    return 1

return sub_142950730(rsi + 0x18, arg2, rax) __tailcall

// 函数: sub_141c48590
// 地址: 0x141c48590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int32_t rdi = *(arg1 + 0x170)
int64_t rsi = *(arg1 + 0x168)
arg2[1].d = rdi

if (rdi == 0)
    *(arg2 + 0xc) = 0
    return arg2

sub_1405a4c70(arg2, rdi, 0)
memcpy(*arg2, rsi, rdi * 2)
return arg2

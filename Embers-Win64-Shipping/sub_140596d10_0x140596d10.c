// 函数: sub_140596d10
// 地址: 0x140596d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t rdi = arg2[1].d
int64_t rsi = *arg2
arg1[1].d = rdi

if (rdi == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1405a4c70(arg1, rdi, 0)
memcpy(*arg1, rsi, rdi * 2)
return arg1

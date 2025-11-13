// 函数: sub_140aef380
// 地址: 0x140aef380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
uint32_t rdx_2 = ((arg3 + 2) u/ 3) << 2

if (rdx_2 s> 0xffffffff)
    arg1[1].d = rdx_2 + 1
    sub_140594770(arg1)
    memset(*arg1, 0, sx.q(rdx_2 + 1) * 2)
else if (rdx_2 s< 0xffffffff && rdx_2 != 0xffffffff)
    arg1[1].d = rdx_2 + 1
    sub_1405a50a0(arg1)

sub_140ae5330(arg2, arg3, *arg1)
return arg1

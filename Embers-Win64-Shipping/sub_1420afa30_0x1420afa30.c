// 函数: sub_1420afa30
// 地址: 0x1420afa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432bcc28
arg1[5].d = 0xffffffff
*(arg1 + 0x2c) = 0
int32_t rcx = arg1[1].d

if (((rcx u>> 4).b & 1) == 0)
    arg1[1].d = rcx | 0x1000000

return arg1

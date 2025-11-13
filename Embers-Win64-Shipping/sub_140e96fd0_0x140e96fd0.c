// 函数: sub_140e96fd0
// 地址: 0x140e96fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14068e500(arg1)
*arg1 = &data_142edcc38
arg1[0x5b] = 0
arg1[0x5c] = 0
arg1[0x5e] = 0
arg1[0x5f].d = 0
arg1[0x62] = 0
*(arg1 + 0x2e) |= 4

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

return arg1

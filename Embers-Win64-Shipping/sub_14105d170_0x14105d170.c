// 函数: sub_14105d170
// 地址: 0x14105d170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*(arg1 + 0xc) = 0
*arg1 = &data_142f02a58
arg1[2].w = 0x100
int64_t rbp = sx.q(*(arg2 + 0x200))
arg1[0x43].d = rbp.d

if (rbp.d != 0)
    sub_140ffca30(&arg1[3], rbp.d, 0)
    memcpy(&arg1[3], arg2, (rbp << 5).d)
else
    *(arg1 + 0x21c) = 0x10

arg1[0x48].d = arg4
*(arg1 + 0x220) = *arg3
*(arg1 + 0x230) = arg3[1]
return arg1

// 函数: sub_1422b4e50
// 地址: 0x1422b4e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_143317088
arg1[3].d = 0xffffffff
*(arg1 + 0x1c) = 4
arg1[4] = 0
arg1[2] = &data_143317008
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 4
arg1[7] = 0
arg1[5] = &data_143317048
__builtin_memset(&arg1[8], 0, 0x30)
arg1[0xf] = 0
bool cond:0 = data_1439c7a9c == 0
*(arg1 + 0x81) = 0x100
arg1[0x10].b = cond:0
return arg1

// 函数: sub_141f2e310
// 地址: 0x141f2e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04460(arg1, arg2)
*arg1 = &data_143274338
arg1[5] = &data_1432748d0
int64_t rax = j_sub_140a82f30(0x40)

if (rax == 0)
    rax = 0
else
    __builtin_memset(rax, 0, 0x40)

arg1[0x6a] = rax
arg1[0x67].d = 0x42800000
*(arg1 + 0x33c) = 0x42800000
arg1[0x69] = 0
arg1[0x68].d = 0x42b00000
*(arg1 + 0x344) = 0x41a00000
return arg1

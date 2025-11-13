// 函数: sub_141f79880
// 地址: 0x141f79880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140bd5b20(arg1, *(arg2 + 0x68), arg3, arg4)
arg1[0x19] = arg2
*arg1 = &data_143286d50
arg1[0x17].d = 0
arg1[0x18] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
*(arg1 + 0xe4) &= 8
*(arg1 + 0xe5) &= 0xf8
arg1[0x1c].d = 0
*(arg1 + 0xe6) = 0
void** rax_1 = *arg1
*(arg1 + 0x29) ^= (arg1[0x19][0x2b].b << 5 ^ *(arg1 + 0x29)) & 0x20
rax_1[0x1f](arg1, zx.q(*(arg2 + 0x1358)))
(*arg1)[0x20](arg1, zx.q(*(arg2 + 0x135c)))
return arg1

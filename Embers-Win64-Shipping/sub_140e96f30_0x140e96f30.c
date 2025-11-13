// 函数: sub_140e96f30
// 地址: 0x140e96f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142eda098
*(arg1 + 0x18) = *arg3
arg1[5] = arg3[1].q
arg1[6].d = *(arg3 + 0x18)
arg1[7] = *arg2
void* rax_2 = arg2[1]
arg1[8] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[9].d = arg2[2].d
sub_140a96170(&arg1[0xa])
arg1[0xd].b = arg4
__builtin_memset(&arg1[0xe], 0, 0x20)
return arg1

// 函数: sub_142465370
// 地址: 0x142465370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
sub_140780c40(arg1 + 0x10, arg2 + 0x10)
sub_140780c40(arg1 + 0x20, arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
sub_140780c40(arg1 + 0x38, arg2 + 0x38)
sub_140780c40(arg1 + 0x48, arg2 + 0x48)
sub_1405b0be0(arg1 + 0x58, arg2 + 0x58)
sub_140780c40(arg1 + 0x68, arg2 + 0x68)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x94) = *(arg2 + 0x94)
*(arg1 + 0x98) ^= (*(arg1 + 0x98) ^ *(arg2 + 0x98)) & 1
char rax_8 = *(arg1 + 0x98)
*(arg1 + 0x98) = ((*(arg2 + 0x98) ^ rax_8) & 2) ^ rax_8
return arg1

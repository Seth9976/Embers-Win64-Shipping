// 函数: sub_1426408a0
// 地址: 0x1426408a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142427bf0(arg1)
*arg1 = &data_143454888
sub_140b5e4f0(&arg1[0x4b], 0x7fffffff)
int64_t* rcx_1 = arg1[0x47]
int64_t r8
r8.b = 1
(*(*rcx_1 + 0x620))(rcx_1, data_143f3a590, r8)
int32_t arg_8 = 0xffc8c8c8
*(arg1[0x47] + 0x14f) = 0
*(arg1 + 0x224) = 0xffc8c8c8
arg1[0x4b].d |= 0x80000000
*(arg1 + 0x22c) |= 1
return arg1

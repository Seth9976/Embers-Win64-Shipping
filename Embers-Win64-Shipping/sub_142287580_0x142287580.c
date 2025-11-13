// 函数: sub_142287580
// 地址: 0x142287580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142427bf0(arg1)
*arg1 = &data_143314200
arg1[0x4b] = &data_143314850
sub_1422d7fd0(&arg1[0x4c])
int64_t* rcx_1 = arg1[0x47]
int64_t r8
r8.b = 1
(*(*rcx_1 + 0x620))(rcx_1, data_143f3a590, r8)
void* rax_1 = arg1[0x47]
*(rax_1 + 0x208) |= 0x80
*(arg1[0x47] + 0x14f) = 2
*(arg1 + 0x7ac) |= 1
*(arg1 + 0x7a4) = 0x42c80000
arg1[0xf5].d = 0x3f800000
return arg1

// 函数: sub_1420d8590
// 地址: 0x1420d8590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142427bf0(arg1)
int64_t r8
r8.b = 1
*arg1 = &data_1432c2e18
arg1[0x4b] = 0
arg1[0x4c] = 0
int64_t* rcx = arg1[0x47]
(*(*rcx + 0x620))(rcx, data_143f3a590, r8)
void* rax_1 = arg1[0x47]
*(rax_1 + 0x208) |= 0x80
*(arg1 + 0x22c) |= 1
*(arg1 + 0x225) = 0xffa5
*(arg1 + 0x224) = 0
*(arg1 + 0x227) = 0xff
*(arg1 + 0x26c) = 1
return arg1

// 函数: sub_14060d190
// 地址: 0x14060d190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, sub_140d20910())
arg1[0x17].d = 0x3f800000
*arg1 = &data_142d63ea8
*(arg1 + 0xbc) = 0
arg1[5] = &data_142d64290
arg1[0x16] = &data_142d642c0
sub_14060d100(&arg1[0x1e])
arg1[0x25] = 0x3ff0000000000000
__builtin_memset(&arg1[0x27], 0, 0x38)
arg1[0x19] = 0
arg1[0x1d] = 0
arg1[0x1a].b = 0
arg1[0x24] = 0
arg1[0x1b] = 0
__builtin_memset(&arg1[0x30], 0, 0xb1)
int64_t* rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0

arg1[0x49] = rax_1
arg1[0x48] = rax_1
*(arg1 + 0x3a) |= 2
*(arg1 + 0x3c) = 0
arg1[0x2f] = &arg1[0x16]
arg1[0x18] = 0
return arg1

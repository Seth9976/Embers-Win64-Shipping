// 函数: sub_1422898a0
// 地址: 0x1422898a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fd7160(arg1, arg2)
*arg1 = &data_143315e88
int64_t arg_8
sub_140b58260(&arg_8, u"Rendering", 1)
arg1[0x1d].d &= 0xffffffbf
arg1[6] = arg_8
int32_t var_10 = 0
*(arg1 + 0x7c) = _mm_unpacklo_ps(zx.o(0), 0xbf800000)
*(arg1 + 0x84) = 0
int32_t rax_2 = *(arg1 + 0xd4) & 0xfffffefc
*(arg1 + 0xbc) = 0x400
arg1[0x18].d = 0x400
arg1[0x1d].d |= 0x80
*(arg1 + 0xd4) = rax_2 | 0x74
return arg1

// 函数: sub_14222aa50
// 地址: 0x14222aa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143306af8
__builtin_memset(&arg1[5], 0, 0x60)
arg1[0x13].b = 0
arg1[0x15] = 0
*(arg1 + 0x9c) = 0
*(arg1 + 0xa4) = 0x3f800000
arg1[0x16] = 0
__builtin_memset(&arg1[0x18], 0, 0x60)
sub_14220ad50(&arg1[0x24])
char rax = *(arg1 + 0x8a) & 0xf5
*(arg1 + 0x8c) = 0
*(arg1 + 0x8a) = rax | 4
*(arg1 + 0x89) = (*(arg1 + 0x89) & 0x29) | 0x52
sub_142221d60(&arg1[0x24], 5)
arg1[1].d |= 8
*(arg1 + 0x89) &= 0xdf
int32_t var_10 = 0x3f800000
arg1[0x4b] = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
arg1[0x4c].d = 0x3f800000
arg1[0x4a] = 0
arg1[0x4d] = 0
return arg1

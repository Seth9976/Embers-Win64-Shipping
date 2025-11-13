// 函数: sub_141f513d0
// 地址: 0x141f513d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04530(arg1, arg2)
*arg1 = &data_14327bb58
arg1[5] = &data_143012b40
arg1[0x3e] = &data_143012b70
__builtin_memset(&arg1[0x8c], 0, 0x20)
arg1[0x90].d &= 0xfffffff0
__builtin_memcpy(arg1 + 0x484, 
    "\x00\x00\x00\x41\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
*(arg1 + 0x3a) &= 0xfd
sub_1422ac390(arg1, data_143f3a5a8, 1)
*(arg1 + 0x44d) &= 0xf7
*(arg1 + 0x44d) |= 4
*(arg1 + 0x14d) |= 8
int32_t arg_8 = 0xffffffff
arg1[0x89].d = 0xffffffff
arg1[0x87].d = 0
arg1[0x8a].d = 0x40
*(arg1 + 0x44c) = (*(arg1 + 0x44c) & 0x47) | 0x10
*(arg1 + 0x43c) = 0x20
*(arg1 + 0x45c) = 0x3f800000
*(arg1 + 0x20f) = 1
*(arg1 + 0x454) = 0x3dcccccd
arg_8.q = 0
void* rax_1 = sub_14229e860(arg1, 0, 1)
*(rax_1 + 0xc) |= 0x80
*arg1 = &data_14327f190
arg1[5] = &data_14327fa88
arg1[0x3e] = &data_14327fab8
arg1[0x93] = &data_14327fb10
__builtin_memset(&arg1[0x94], 0, 0x58)
arg1[0xa1] = 0
arg1[0xa2] = 0
arg1[0xa5].d = 0
*(arg1 + 0x14f) = 0
sub_1422ac390(arg1, data_143f3a590, 1)
*(arg1 + 0x44d) &= 0xf7
*(arg1 + 0x4ac) = _mm_unpacklo_ps(0x42c80000, 0)
*(arg1 + 0x20f) = 1
arg1[0xa0] = 0x3f800000
int32_t var_10 = 0
*(arg1 + 0x524) &= 0xf8
*(arg1 + 0x4b4) = 0
*(arg1 + 0x4cc) = _mm_unpacklo_ps(0x42c80000, 0)
*(arg1 + 0x4d4) = 0
arg1[0x9c] = _mm_unpacklo_ps(0x42c80000, 0)
arg1[0x9d].d = 0
arg1[0x97].d = 0x3f800000
*(arg1 + 0x4bc) = 0x3f800000
int32_t var_10_1 = 0
arg1[0x9b].d = 0x3f800000
*(arg1 + 0x4dc) = 0x3f800000
arg1[0xa4].d = 0
int32_t var_10_2 = 0
return arg1

// 函数: sub_141a31a40
// 地址: 0x141a31a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
__builtin_memset(&arg1[5], 0, 0x20)
arg1[9] = 2
*arg1 = &data_142d4bef8
arg1[0xa].w = 0
__builtin_memset(&arg1[0xb], 0, 0x19)
__builtin_memset(arg1 + 0x74, 0, 0x15)
*(arg1 + 0x8c) = 0
char arg_8 = 0
int32_t arg_c = 0
arg1[0x13] = arg_8.q
arg1[0x14] = 0
int32_t rax_1 = arg1[0x16].d
*(arg1 + 0xc4) &= 0xfffffffe
arg1[0x15] = 0
*(arg1 + 0xb4) = 0
*(arg1 + 0xbc) = 0
arg1[0x16].d = (rax_1 & 0xfffffffd) | 1
arg1[0x19].w = 0x100
*(arg1 + 0xca) = 0
arg1[0x1a] = 0
int32_t var_14 = 0
int32_t var_c = 0
arg1[0x1b] = 0
char var_10 = 1
*(arg1 + 0x90) = 1.o
uint64_t rbx = *sub_140b58170(&arg_8, "EaseInFunction", 1)
int64_t* rax_5 = sub_141a6dde0()
void* rax_6 = sub_140d1dc20(arg2, arg1, rbx, rax_5, rax_5, 1, 0)
*(rax_6 + 8) |= 1
*(rax_6 + 0x30) = 9
arg1[0xc] = rax_6
arg1[0xd] = sub_140d21950(rax_6, sub_141a6e260())
uint64_t rbx_2 = *sub_140b58170(&arg_8, "EaseOutFunction", 1)
int64_t* rax_10 = sub_141a6dde0()
void* rax_11 = sub_140d1dc20(arg2, arg1, rbx_2, rax_10, rax_10, 1, 0)
*(rax_11 + 8) |= 1
*(rax_11 + 0x30) = 9
arg1[0xf] = rax_11
arg1[0x10] = sub_140d21950(rax_11, sub_141a6e260())
return arg1

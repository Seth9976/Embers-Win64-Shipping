// 函数: sub_1409147f0
// 地址: 0x1409147f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31c10(arg1, arg2)
*arg1 = &data_142e1df88
__builtin_memset(&arg1[0x69], 0, 0x28)
*(arg1 + 0x341) = 1
void arg_8
uint64_t rbx = *sub_140b58170(&arg_8, "MovieScene", 1)
int64_t* rax_1 = sub_141a6e000()
void* rax_2 = sub_140d1dc20(arg2, arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x69] = rax_2
*(rax_2 + 8) |= 8
return arg1

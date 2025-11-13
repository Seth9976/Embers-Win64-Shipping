// 函数: sub_1418cf6c0
// 地址: 0x1418cf6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
__builtin_memset(&arg1[2], 0, 0x6c)
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12].b = 1
__builtin_memset(&arg1[0x13], 0, 0x14)
arg1[0x16] = 0
arg1[0x17] = 0
*arg1 = &data_142fef6a0
arg1[0x18].b = 1
__builtin_memset(&arg1[0x1a], 0, 0xf0)
arg1[0x42] = arg3
__builtin_memset(&arg1[0x38], 0, 0x28)
__builtin_memset(&arg1[0x3d], 0, 0x28)
arg1[0xc] = *(arg3 + 0x300) + 0x10
void* rax_3 = *(arg3 + 0x300) + 0x1e8
arg1[0x19] = rax_3
arg1[0xf].d = *(rax_3 + 0x78)
SRWLOCK* r14_1 = &arg1[1][0x8e]
sub_1418e28b0(&arg1[0x1a], sub_1418cd6b0(r14_1, sub_1418e27c0(arg3, 0)) + 0x50, &arg1[0x38])
int64_t rax_7 = sub_1418e27c0(arg3, 3)

if (rax_7 != 0)
    sub_1418e28b0(&arg1[0x20], sub_1418cd5d0(r14_1, rax_7) + 0x50, &arg1[0x39])

int64_t rax_9 = sub_1418e27c0(arg3, 4)

if (rax_9 != 0)
    sub_1418e28b0(&arg1[0x26], sub_1418cd410(r14_1, rax_9) + 0x50, &arg1[0x3a])

int64_t rax_11 = sub_1418e27c0(arg3, 1)

if (rax_11 != 0)
    sub_1418e28b0(&arg1[0x2c], sub_1418cd4f0(r14_1, rax_11) + 0x50, &arg1[0x3b])

int64_t rax_13 = sub_1418e27c0(arg3, 2)

if (rax_13 != 0)
    sub_1418e28b0(&arg1[0x32], sub_1418cd330(r14_1, rax_13) + 0x50, &arg1[0x3c])

sub_1418db6f0(arg1)
*(arg3 + 8) += 1
return arg1

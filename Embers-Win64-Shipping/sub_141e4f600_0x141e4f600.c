// 函数: sub_141e4f600
// 地址: 0x141e4f600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[5] = 0
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 0
__builtin_memset(&arg1[3], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x2c) s<= 0xffffffff)
    sub_1405947f0(&arg1[4], 0)

int16_t* rax_1 = arg1[4]

if (rax_1 != 0)
    *rax_1 = 0

arg1[2].d = 0
arg1[1] = arg2[1]
arg1[2].d = arg2[2].d
arg1[3] = arg2[3]
sub_140597df0(&arg1[4], &arg2[4])
arg1[6] = arg2[6]
arg1[7] = arg2[7]
__builtin_memset(&arg2[6], 0, 0x50)
arg1[8] = 0
arg1[8] = arg2[8]
arg1[9].d = arg2[9].d
*(arg1 + 0x4c) = *(arg2 + 0x4c)
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc] = 0
arg1[0xc] = arg2[0xc]
arg1[0xd].d = arg2[0xd].d
*(arg1 + 0x6c) = *(arg2 + 0x6c)
arg1[0xe] = arg2[0xe]
arg1[0xf] = arg2[0xf]
return arg1

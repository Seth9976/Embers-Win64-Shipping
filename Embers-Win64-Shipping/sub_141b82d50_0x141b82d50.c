// 函数: sub_141b82d50
// 地址: 0x141b82d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e90840(arg1, arg2)
*arg1 = &data_14306f4a0
int64_t arg_8 = 0
arg1[0x66].d = (arg1[0x66].d & 0xfffffff7) | 2
__builtin_memset(&arg1[0x67], 0, 0x30)
arg1[0x71] = 0
arg1[0x6d].d = 0xffffffff
*(arg1 + 0x36c) = 0
__builtin_memset(&arg1[0x6f], 0, 0x14)

if (*(arg1 + 0x38c) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x70], 0)

int16_t* rax_3 = arg1[0x70]

if (rax_3 != 0)
    *rax_3 = 0

arg1[0x6e].d = 0
return arg1

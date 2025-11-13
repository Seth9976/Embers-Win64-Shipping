// 函数: sub_141af7540
// 地址: 0x141af7540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143036ee0
arg1[1] = *(arg2 + 8)
arg1[2] = 0
arg1[2] = *(arg2 + 0x10)
__builtin_memset(arg2 + 0x10, 0, 0x20)
arg1[3].d = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4] = 0
arg1[4] = *(arg2 + 0x20)
arg1[5].d = *(arg2 + 0x28)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[0xa] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
__builtin_memset(&arg1[8], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x54) s<= 0xffffffff)
    sub_1405947f0(&arg1[9], 0)

int16_t* rax_7 = arg1[9]

if (rax_7 != 0)
    *rax_7 = 0

arg1[7].d = 0
arg1[6] = *(arg2 + 0x30)
arg1[7].d = *(arg2 + 0x38)
arg1[8] = *(arg2 + 0x40)
sub_140597df0(&arg1[9], arg2 + 0x48)
void* rcx_2 = &arg1[0x10]
arg1[0xb] = *(arg2 + 0x58)
__builtin_memset(&arg1[0xc], 0, 0x20)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_12 = *(rcx_2 + 0x10)

if (rax_12 != 0)
    rcx_2 = rax_12

*rcx_2 = 0
*(rcx_2 + 8) = 0
*(arg1 + 0xa4) = 0
arg1[0x14].d = 0xffffffff
arg1[0x16] = 0
arg1[0x17].d = 0
return arg1

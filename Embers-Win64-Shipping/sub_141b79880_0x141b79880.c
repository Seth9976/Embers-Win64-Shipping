// 函数: sub_141b79880
// 地址: 0x141b79880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = 0
*arg1 = 0xffffffff
arg1[1] = 0
__builtin_memset(&arg1[4], 0, 0x14)
int64_t arg_8 = 0

if (arg1[9] s<= 0xffffffff)
    sub_1405947f0(&arg1[6], 0)

int16_t* rax = *(arg1 + 0x18)

if (rax != 0)
    *rax = 0

arg1[2] = 0
*arg1 = *arg2
arg1[2] = arg2[1].d
*(arg1 + 0x10) = arg2[2]
sub_140597df0(&arg1[6], &arg2[3])
return arg1

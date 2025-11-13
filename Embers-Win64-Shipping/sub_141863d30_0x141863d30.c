// 函数: sub_141863d30
// 地址: 0x141863d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
void* r8 = &arg1[0x18]
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(r8 + 0x10) = 0
*(r8 + 0x18) = 0
*(r8 + 0x1c) = 0x80
void* rax_3 = *(r8 + 0x10)

if (rax_3 != 0)
    r8 = rax_3

*r8 = 0
*(r8 + 8) = 0
*(arg1 + 0x38) = 0xffffffff
*(arg1 + 0x3c) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
sub_1418235f0(&arg1[8], &arg2[8])
return arg1

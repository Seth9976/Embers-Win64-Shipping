// 函数: sub_14093c570
// 地址: 0x14093c570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
__builtin_memset(&arg1[8], 0, 0x20)
sub_140a96170(&arg1[0x28])
arg1[0x40] = 0x11

if (&arg1[0x18] != arg2)
    int64_t rcx_1 = *(arg1 + 0x18)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x18) = *arg2
    *arg2 = 0
    *(arg1 + 0x20) = arg2[1].d
    *(arg1 + 0x24) = *(arg2 + 0xc)
    arg2[1] = 0

sub_140597df0(&arg1[8], &arg1[0x18])
arg1[0x40] = 0x11
return arg1

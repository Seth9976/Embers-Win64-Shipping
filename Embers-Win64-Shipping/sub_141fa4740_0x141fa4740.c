// 函数: sub_141fa4740
// 地址: 0x141fa4740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142452380()
*arg1 = arg3
arg1[0x16].b = 0

if (arg1[0x16].b != 0)
    arg1[0x16].b = 0
    sub_142441560(*(arg1 + 8), *(arg1 + 0x50))
    int64_t rcx_1 = *(arg1 + 0x38)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = *(arg1 + 0x10)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

sub_1405ab0f0(&arg1[2], arg2, rax)
arg1[0x16].b = 1
sub_1405b0c60(arg1)
return arg1

// 函数: sub_142137300
// 地址: 0x142137300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg3

if (arg3 == 0)
    rsi = nullptr
else
    void* rax_1 = sub_1424752c0()
    
    if (rax_1 == 0)
        rsi = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rsi + 0x38) || *(*(rsi + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rsi = nullptr

*arg1 = arg4
arg1[0x16].b = 0

if (arg1[0x16].b != 0)
    arg1[0x16].b = 0
    sub_142441560(*(arg1 + 8), *(arg1 + 0x50))
    int64_t rcx_2 = *(arg1 + 0x38)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t rcx_3 = *(arg1 + 0x10)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

sub_1405ab0f0(&arg1[2], arg2, rsi)
arg1[0x16].b = 1
sub_1405b0c60(arg1)
return arg1

// 函数: sub_142ad8270
// 地址: 0x142ad8270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142ad9020(arg2)
int64_t* rcx_1 = *(arg1 + 0x150)

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t rdi = *(arg1 + 0x320)
*(arg1 + 0x150) = arg2

if (rdi != 0)
    for (int64_t i = 0; i s< 0x26; i += 1)
        int64_t* rcx_2 = *(rdi + (i << 3))
        
        if (rcx_2 != 0)
            sub_142aa6d70(rcx_2)
            *(rdi + (i << 3)) = 0
    
    sub_142a7dcd0(rdi)
    *(arg1 + 0x320) = 0

int32_t arg_8 = 0
sub_142ad91e0(arg1)
return sub_142ad9350(arg1, &arg_8)

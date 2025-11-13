// 函数: sub_142a9a9d0
// 地址: 0x142a9a9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0 = *arg1
*arg1 -= 1

if (temp0 != 1)
    return 

int64_t* rcx = *(arg1 + 0x48)

if (rcx != 0)
    (**rcx)(rcx, 1)

sub_142a47ff0(&arg1[2])
return sub_142a47920(arg1) __tailcall

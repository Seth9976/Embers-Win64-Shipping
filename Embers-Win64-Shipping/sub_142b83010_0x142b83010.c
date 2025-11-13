// 函数: sub_142b83010
// 地址: 0x142b83010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[5] == 0)
    return sub_142b830d0(arg1, arg2) __tailcall

if ((*(arg2 + 8) & 1) == 0)
    *(arg2 + 8) &= 0x1f
else
    *(arg2 + 8) = 2

int16_t arg_8 = (*(*arg1 + 0x60))()
sub_142a48d70(arg2, &arg_8, 0, 1)
arg_8 = (*(*arg1 + 0x60))(arg1)
sub_142a48d70(arg2, &arg_8, 0, 1)
arg_8 = (*(*arg1 + 0x60))(arg1)
return sub_142a48d70(arg2, &arg_8, 0, 1)

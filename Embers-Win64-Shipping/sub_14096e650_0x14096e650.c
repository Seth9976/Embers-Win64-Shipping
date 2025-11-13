// 函数: sub_14096e650
// 地址: 0x14096e650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14095c9f0(arg1 + 0x70, 0)
char rax

if (*arg2 != 0 || arg2[0x40] == 0)
    rax = 1
else
    rax = 0

*(arg1 + 0x6c) = rax
*(arg1 + 0xa0) = sub_1409716f0(arg1, arg2)
return sub_14096e4f0(arg1) __tailcall

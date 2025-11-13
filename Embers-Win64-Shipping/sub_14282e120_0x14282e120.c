// 函数: sub_14282e120
// 地址: 0x14282e120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_8 = arg1
*arg1 = *(arg2 + 0x50)
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0xf
arg1[2].b = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0xf
arg1[0xa].b = 0
int32_t rdx = *arg1

if (rdx == 0 || rdx == 1 || rdx == 2)
    sub_14058a4a0(&arg1[0xa], arg2 + 0x18)
else if (rdx == 3)
    sub_14058a4a0(&arg1[2], arg2 + 0x18)
    sub_14058a4a0(&arg1[0xa], *(arg2 + 0x38))

return arg1

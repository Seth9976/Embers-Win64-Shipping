// 函数: sub_14104bc50
// 地址: 0x14104bc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x1c) != 0
arg2[1] = sub_14105a480(*(arg1 + 0x20))
arg2[2] = *(arg1 + 0x24) != 0
arg2[3] = sub_14105a480(*(arg1 + 0x38))
arg2[4] = sub_14105a4f0(*(arg1 + 0x2c))
arg2[5] = sub_14105a4f0(*(arg1 + 0x30))
arg2[6] = sub_14105a4f0(*(arg1 + 0x34)).b
int32_t rax_5

if (*(arg1 + 0x24) == 0 || (*(arg1 + 0x38) == *(arg1 + 0x48) && *(arg1 + 0x2c) == *(arg1 + 0x3c)
        && *(arg1 + 0x30) == *(arg1 + 0x40) && *(arg1 + 0x34) == *(arg1 + 0x44)))
    rax_5.b = 0
else
    rax_5.b = 1

arg2[7] = rax_5.b
arg2[8] = sub_14105a480(*(arg1 + 0x48))
arg2[9] = sub_14105a4f0(*(arg1 + 0x3c))
arg2[0xa] = sub_14105a4f0(*(arg1 + 0x40))
arg2[0xb] = sub_14105a4f0(*(arg1 + 0x44))
arg2[0xc] = *(arg1 + 0x28)
arg2[0xd] = *(arg1 + 0x29)
return 1

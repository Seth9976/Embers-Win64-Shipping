// 函数: sub_142b99350
// 地址: 0x142b99350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0xf1
*arg1 = 0x50
arg1[2] = 0
*(arg1 + 0x10) = sub_142b9aa70
*(arg1 + 0x18) = sub_142b9aa40
int64_t rax_1 = (*(arg2 + 8))(arg2, 0x788)

if (rax_1 == 0)
    *(arg1 + 0x20) = rax_1
    return zx.q((rax_1 + 0x40).d)

memset(rax_1, 0, 0x788)
*(arg1 + 0x20) = rax_1
return 0

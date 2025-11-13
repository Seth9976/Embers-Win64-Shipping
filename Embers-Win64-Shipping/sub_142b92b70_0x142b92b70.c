// 函数: sub_142b92b70
// 地址: 0x142b92b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = (*(arg1 + 8))(arg1, 0xb0)

if (rax == 0)
    return zx.q((&rax[8]).d)

memset(rax, 0, 0xb0)
*rax = arg1
*arg2 = rax
return 0

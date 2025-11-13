// 函数: sub_142157300
// 地址: 0x142157300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1fc) += 1
*(arg1 + 0x19dc) += 1

if (arg2 == 0)
    *(arg1 + 0x19ec) = 0
    return 

*(arg1 + 0x19ec) += 1
*(arg1 + 0x19e0) += 1
int32_t rax = *(arg1 + 0x19ec)

if (rax u> *(arg1 + 0x19e4))
    *(arg1 + 0x19e4) = rax

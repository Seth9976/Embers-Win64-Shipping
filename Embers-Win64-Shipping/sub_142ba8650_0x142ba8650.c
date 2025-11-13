// 函数: sub_142ba8650
// 地址: 0x142ba8650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (strcmp(arg2, "interpreter-version") != 0)
    return 0xc

int32_t rax_2

if (arg4 == 0)
    rax_2 = *arg3
else
    rax_2 = strtol(arg3, nullptr, 0xa)

if (rax_2 != 0x23 && rax_2 != 0x28)
    return 7

*(arg1 + 0x78) = rax_2
return 0

// 函数: sub_142b97020
// 地址: 0x142b97020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *(arg1 + 0x20) == 0)
    *arg2 = 0
    return 0

int64_t rdx = *arg2
int64_t rax = *(arg1 + 0x30)

if (rdx != 0)
    (*(rax + 0x10))(rax, rdx)

*arg2 = 0
return 0

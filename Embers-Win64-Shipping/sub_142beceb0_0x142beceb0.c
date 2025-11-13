// 函数: sub_142beceb0
// 地址: 0x142beceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x108)
int32_t rdi = arg2

if (arg2 s< rax)
    rdi = rax - 1

if (arg1[0x12].d == 0 && (*(arg1 + 0x118) != 0 || *(arg1 + 0x11c) != 0))
    sub_142bec5a0(arg1)

arg1[0x10].d = rdi
*(arg1 + 0x118) = 0
*(arg1 + 0x104) = arg3

if (arg3 s< *(arg1 + 0x114) && arg3 s>= arg1[0x11].d && rdi s< *(arg1 + 0x10c))
    arg1[0x12].d = 0
    return 0

arg1[0x12].d = 1
return 0

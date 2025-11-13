// 函数: sub_142b93fa0
// 地址: 0x142b93fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 6

int64_t* rax = (*(arg1 + 8))(arg1, 0x178)

if (rax == 0)
    return 0x40

memset(rax, 0, 0x178)
*rax = arg1
rax[1].d = 2
*(rax + 0xc) = 0xa
rax[0x2e].d = 1
*arg2 = rax
return 0

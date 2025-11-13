// 函数: sub_142bc4c90
// 地址: 0x142bc4c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x80)

if (arg2 != 0)
    *arg2 = *(arg1 + 0x188)

if (arg3 != 0)
    *arg3 = *(arg1 + 0x18c)

uint32_t rdi = 0x10000
uint32_t rax_3 = 0x10000

if (rbp != 0)
    rdi = sub_142b91790(zx.d(*(rbp + 0x18)) << 6, *(arg1 + 0x18c))
    rax_3 = sub_142b91790(zx.d(*(rbp + 0x1a)) << 6, *(arg1 + 0x18c))

if (arg4 != 0)
    *arg4 = rdi

if (arg5 != 0)
    *arg5 = rax_3

return 0

// 函数: sub_142677d70
// 地址: 0x142677d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((arg1 u>> 0x1e).b & 1) == 0)
    uint32_t rax_4
    rax_4.b = not.b((arg1 u>> 3).b)
    return zx.q((rax_4 & 1) + 1)

uint32_t rax_1
rax_1.b = not.b((arg1 u>> 6).b)
return (zx.q(rax_1) & 1) | 2

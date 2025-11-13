// 函数: sub_142b90ce0
// 地址: 0x142b90ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
uint64_t r8 = zx.q(rax.d)
int64_t rax_1 = *arg2
uint64_t rdi_1 = rax u>> 0x20
arg1[1].d += arg2[1].d + 0x40
int64_t r10_1 = zx.q(rax_1.d) * rdi_1
uint64_t r11_1 = rax_1 u>> 0x20
uint64_t result = zx.q(r10_1.d)
int64_t rbx_1 = r11_1 * r8
*arg1 = ((0x80000000 + ((zx.q(rax_1.d) * r8) u>> 0x20) + result + zx.q(rbx_1.d)) u>> 0x20)
    + r11_1 * rdi_1 + (r10_1 u>> 0x20) + (rbx_1 u>> 0x20)
return result

// 函数: sub_142bdfa10
// 地址: 0x142bdfa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x18)
void* rax = sub_142be8ea0(rdi + 6, arg3)

if (rax == 0)
    return 0xffffffff

uint32_t rdx_7 =
    ((zx.d(*rax) << 8 | zx.d(*(rax + 1))) << 8 | zx.d(*(rax + 2))) << 8 | zx.d(*(rax + 3))
uint32_t rbx_6 =
    ((zx.d(*(rax + 4)) << 8 | zx.d(*(rax + 5))) << 8 | zx.d(*(rax + 6))) << 8 | zx.d(*(rax + 7))

if (rdx_7 != 0 && sub_142be8ca0(zx.q(rdx_7) + rdi, arg2) != 0)
    return 1

if (rbx_6 != 0 && sub_142be8d40(zx.q(rbx_6) + rdi, arg2) != 0)
    return 0

return 0xffffffff

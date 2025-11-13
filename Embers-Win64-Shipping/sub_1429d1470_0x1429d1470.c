// 函数: sub_1429d1470
// 地址: 0x1429d1470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t r11_1 = arg1[0x18] + (sx.q(*(arg1[0xc] + (sx.q(arg2.d) << 2))) << 2)
int64_t rdx = sx.q(((arg2 << 1) + 1).d)
int64_t rdi = *(rbx + 0x120) + (sx.q(*(*(rbx + 0x108) + (rdx << 2))) << 2)
int64_t rbx_1 = *(rbx + 0x18)
int64_t r10_2 = arg1[3]
int64_t rbp = *(rbx + 0x138) + (sx.q(*(*(rbx + 0x108) + (rdx << 2))) << 1)
uint64_t rax_7 = zx.q(arg3)
uint64_t rsi = zx.q(*(r11_1 + (rax_7 << 2)))
uint64_t r9 = zx.q(*(r11_1 + (rax_7 << 2) + 2))
uint32_t r8_1 = zx.d(*(rbp + (rsi << 1)))
int32_t rdx_2 = *(rdi + (rsi << 2)) * 2
int32_t rdx_3 = *(rdi + (r9 << 2)) * 2
uint64_t rcx_3 = 0
int64_t rdi_1 = r10_2 + (sx.q(*(rbx_1 + (sx.q(rdx_3 + 1) << 2))) << 2)
uint32_t r10_3 = zx.d(*(rbp + (r9 << 1)))
uint32_t rbx_2 = *(rbx_1 + (sx.q(rdx_3) << 2))

if (r8_1 != *(rbx_1 + (sx.q(rdx_2) << 2)) - 1)
    rcx_3 = zx.q(r8_1 + 1)

if (r10_3 != 0)
    rbx_2 = r10_3

*arg4 = *(r10_2 + (sx.q(*(rbx_1 + (sx.q(rdx_2 + 1) << 2))) << 2) + (rcx_3 << 2))
int32_t result = *(rdi_1 + (sx.q(rbx_2 - 1) << 2))
arg4[1] = result
return result

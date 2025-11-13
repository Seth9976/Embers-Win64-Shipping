// 函数: sub_141124a40
// 地址: 0x141124a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 0xa))
int64_t rbp = sx.q(arg3[1].d)
uint32_t r9 = zx.d(*(arg1 + 0x12))

if (rax == 0)
    rax = 0

uint32_t rcx = zx.d(*(arg1 + 0x1a))

if (rax u>= r9)
    r9 = rax

uint32_t rax_1 = zx.d(*(arg1 + 0x22))

if (r9 u>= rcx)
    rcx = r9

if (rcx u>= rax_1)
    rax_1 = rcx

int32_t rax_3 = rax_1 + 1 + rbp.d
arg3[1].d = rax_3

if (rax_3 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

int64_t result = memset(*arg3 + (rbp << 3), 0, zx.q(rax_1 + 1) << 3)

if (*(arg1 + 0xc) u> 0)
    result = *(arg2 + 0x58)
    *(*arg3 + (zx.q(*(arg1 + 0xa)) << 3)) = result

if (*(arg1 + 0x14) u> 0)
    result = *(arg2 + 0x78)
    *(*arg3 + (zx.q(*(arg1 + 0x12)) << 3)) = result

if (*(arg1 + 0x1c) u> 0)
    result = *(arg2 + 0x98)
    *(*arg3 + (zx.q(*(arg1 + 0x1a)) << 3)) = result

if (*(arg1 + 0x24) u> 0)
    result = *(arg2 + 0xb8)
    *(*arg3 + (zx.q(*(arg1 + 0x22)) << 3)) = result

return result

// 函数: sub_142c1f1f0
// 地址: 0x142c1f1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = 0
void* rbx_1 = zx.q(*(arg1 + 0xb)) + (zx.q(*(arg1 + 0xa)) << 8) + arg1
uint64_t rdx_1 = zx.q(arg2 - (zx.d(*rbx_1) << 8) - zx.d(*(rbx_1 + 1)))
uint64_t r9

if (rdx_1.d u< (zx.d(*(rbx_1 + 2)) << 8) + zx.d(*(rbx_1 + 3)))
    r9 = (zx.q(*(rbx_1 + (rdx_1 << 1) + 4)) << 8) + zx.q(*(rbx_1 + (rdx_1 << 1) + 5))
else
    r9 = nullptr

void* rdx_3 = zx.q(*(arg1 + 0xd)) + (zx.q(*(arg1 + 0xc)) << 8) + arg1
uint64_t r10_2 = zx.q(arg3 - (zx.d(*rdx_3) << 8) - zx.d(*(rdx_3 + 1)))

if (r10_2.d u< zx.d(*(rdx_3 + 3)) + (zx.d(*(rdx_3 + 2)) << 8))
    r8 = zx.q(*(rdx_3 + (r10_2 << 1) + 5)) + (zx.q(*(rdx_3 + (r10_2 << 1) + 4)) << 8)

int128_t* const rbx_2 = &data_14369a5d0
void* rdx_5 = zx.q(*(arg1 + 0xf)) + (zx.q(*(arg1 + 0xe)) << 8) + arg1
void* rcx_7 = rdx_5 + (zx.q(((r9 + r8 - rdx_5 + arg1) u>> 1).d) << 1)

if (rcx_7 u>= rdx_5)
    rbx_2 = rcx_7

if (sub_142bf7510(arg4 + 0x20, rbx_2, 2) != 0)
    return zx.q(sx.d(zx.w(*(rbx_2 + 1)) + zx.w(*rbx_2) * 0x100))

return 0

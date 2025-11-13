// 函数: sub_142c1ef00
// 地址: 0x142c1ef00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r15 = zx.d(*(arg1 + 0xa))
uint32_t r12 = zx.d(*(arg1 + 0xb))
uint64_t rsi = zx.q(arg2)
void* r11_1 = zx.q(r15 * 2) + arg1 + 0xe
uint32_t r9_2 = (zx.d(*(arg1 + 8)) << 8) + zx.d(*(arg1 + 9))
uint32_t rdx_2 = (zx.d(*(arg1 + 8)) << 8) + zx.d(*(arg1 + 9))
uint32_t rax_2 = zx.d(*(arg1 + 0xc))
void* rbx_1 = zx.q(r9_2) + r11_1
uint64_t r10 = zx.q(arg3)
void* r8 = &data_14369a5d0
void* rcx = &data_14369a5d0

if (rsi.d u< r9_2)
    rcx = r11_1 + rsi

uint32_t r9_3 = zx.d(*rcx)
void* rcx_1 = &data_14369a5d0

if (r10.d u< rdx_2)
    rcx_1 = rbx_1 + r10

uint32_t rdx_3 = zx.d(*rcx_1)

if (r9_3 u>= r12 || rdx_3 u>= rax_2)
    return 0

uint64_t rax_4 = zx.q(rax_2 * r9_3 + rdx_3)
void* rax_5

if (rax_4.d u< r12 * rax_2)
    rax_5 = rax_4 + zx.q(rdx_2) + rbx_1
else
    rax_5 = &data_14369a5d0

uint64_t rcx_2 = zx.q(*rax_5)

if (rcx_2.d u< r15)
    r8 = arg1 + 0xe + (rcx_2 << 1)

return zx.q(sx.d(zx.w(*(r8 + 1)) + zx.w(*r8) * 0x100))

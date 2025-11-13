// 函数: sub_142b6a760
// 地址: 0x142b6a760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg1
int32_t rax = 0x40

if (*(arg1 + 0x1e) == 0)
    rax = 0x3fc

int32_t r9_2 = arg2 s>> 4 & 0x1f
uint32_t r8_4 = zx.d(
    *(r10 + (zx.q(zx.d(*(r10 + (sx.q(rax + (arg2 s>> 0xe)) << 1))) + (arg2 s>> 9 & 0x1f)) << 1)))

if (not(test_bit(r8_4, 0xf)))
    return zx.q(zx.d(*(r10 + (zx.q(r9_2 + r8_4) << 1))) + (arg2 & 0xf))

uint64_t r9_3 = zx.q(r9_2) & 7
uint64_t rcx_4 = zx.q((r9_2 u>> 3) + (r9_2 & 0xfffffff8) + (r8_4 & 0x7fff))
uint64_t result = zx.q(((zx.d(*(r10 + (rcx_4 << 1))) << ((r9_3 << 1) + 2).b & 0x30000)
    | zx.d(*(r10 + (zx.q(rcx_4.d + 1 + r9_3.d) << 1)))) + (arg2 & 0xf))
return result

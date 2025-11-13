// 函数: sub_142be2e50
// 地址: 0x142be2e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x4d0)

if (r10 == 0 || arg2 u>= zx.d(*(arg1 + 0x370)))
    return 6

char* rdx_1 = zx.q(arg2 * 2) + *(r10 + 0x10)
uint64_t rdx_2 = zx.q(zx.w(*rdx_1) << 8) | zx.q(rdx_1[1])
uint64_t r8_1 = zx.q(*(arg1 + 0x388))

if ((rdx_2 + r8_1).d u> zx.d(*(r10 + 2)))
    return 8

char* rax_6 = *(r10 + 8) + (rdx_2 << 2)

for (char* i = *(arg1 + 0x3a0); i u< &i[r8_1 << 2]; i = &i[4])
    char rcx_1 = *rax_6
    rax_6 = &rax_6[4]
    *i = rcx_1
    i[1] = rax_6[-3]
    i[2] = rax_6[-2]
    i[3] = rax_6[-1]

return 0

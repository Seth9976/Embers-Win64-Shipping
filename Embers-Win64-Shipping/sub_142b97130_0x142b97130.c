// 函数: sub_142b97130
// 地址: 0x142b97130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg1 + 0xc))
int32_t rdi = *(arg1 + 8)

if (rax.d u>= rdi)
    return 0

int64_t r10 = *(arg1 + 0x20)

if (r10 != 0)
    int32_t result = r10(arg4, zx.q(rax.d), arg2, zx.q(arg3))
    *(arg1 + 0xc) += result
    return result

uint32_t count = rdi - rax.d

if (count u> arg3)
    count = arg3

memcpy(arg2, rax + *arg1, count)
*(arg1 + 0xc) += count
return zx.q(count)

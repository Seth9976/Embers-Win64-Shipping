// 函数: sub_1429eefc0
// 地址: 0x1429eefc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = *(arg3 + 0x1f)
void* rax = arg3 + 2
int64_t i_3 = 0x1f
int64_t i_2 = 0x1f
int64_t i

do
    uint32_t r8 = zx.d(*(rax - 2))
    uint64_t rdx_1 = zx.q(zx.d(*(rax - 1)) + 1)
    uint32_t rcx = zx.d(*rax)
    rax += 1
    *(arg1 - arg3 + rax - 3) = ((r8 + (rdx_1 << 1).d + rcx) u>> 2).b
    i = i_2
    i_2 -= 1
while (i != 1)
*(arg1 + 0x1f) = rsi
void* rdi = arg1 + arg2
uint64_t count = 2
int32_t rbp = 0x1e
int64_t result
int64_t i_1

do
    int64_t rbx_1 = sx.q(rbp)
    memcpy(rdi, arg1 - 1 + count, rbx_1.d)
    result = memset(rbx_1 + rdi, zx.d(rsi), count)
    rdi += arg2
    count += 1
    rbp -= 1
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return result

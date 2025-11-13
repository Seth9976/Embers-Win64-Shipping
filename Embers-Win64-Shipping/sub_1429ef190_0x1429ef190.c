// 函数: sub_1429ef190
// 地址: 0x1429ef190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = arg3 + 1
void* r9_1 = arg1 - arg3
int64_t i_3 = 0x10
int64_t i

do
    uint32_t r8 = zx.d(*rax)
    uint32_t rcx = zx.d(rax[-1])
    rax = &rax[1]
    *(r9_1 + rax - 2) = ((rcx + r8 + 1) u>> 1).b
    *(r9_1 + arg2 + rax - 2) = ((zx.d(*rax) + 2 + (zx.d(rax[-1]) << 1) + zx.d(rax[-2])) u>> 2).b
    i = i_3
    i_3 -= 1
while (i != 1)
int64_t r12 = 2
int64_t i_2 = 7
int32_t count_2 = 2
int64_t r14_1 = arg2 * 2 + arg1
int32_t rcx_6 = 0xe
int32_t var_48 = 0xe
int32_t count_1 = 2
int64_t result
int64_t i_1

do
    int64_t rsi_1 = sx.q(rcx_6)
    int64_t rbx_3 = (r12 s>> 1) + arg1
    memcpy(r14_1, rbx_3, rsi_1.d)
    uint64_t count = sx.q(count_1)
    memset(neg.q(arg1) + r14_1 + rsi_1 + arg1, zx.d(*(arg3 + 0xf)), count)
    memcpy(r14_1 + arg2, rbx_3 + arg2, rsi_1.d)
    result = memset(arg2 - arg1 + r14_1 + rsi_1 + arg1, zx.d(*(arg3 + 0xf)), count)
    r14_1 += arg2 << 1
    rcx_6 = var_48 - 1
    count_1 = count_2 + 1
    var_48 = rcx_6
    r12 += 2
    count_2 = count_1
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result

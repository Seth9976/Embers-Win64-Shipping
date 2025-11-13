// 函数: sub_1429ee480
// 地址: 0x1429ee480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = &arg3[-1]
char* rsi = arg4
void* r10_2 = &arg4[1]
*arg1 = ((zx.d(*rbx) + zx.d(*arg4) + 1) u>> 1).b
void* r9 = &arg1[arg2]
int64_t i_6 = 0x1f
int64_t i_5 = 0x1f
int64_t i

do
    uint32_t rdx = zx.d(*r10_2)
    uint32_t rcx = zx.d(*(r10_2 - 1))
    r10_2 += 1
    *r9 = ((rdx + 1 + rcx) u>> 1).b
    r9 += arg2
    i = i_5
    i_5 -= 1
while (i != 1)
void* result_1 = &arg1[1]
void* r10_3 = result_1 + (arg2 << 1)
int64_t i_4 = 0x1e
int64_t i_7 = 0x1e
*result_1 = ((zx.d(*arg3) + 2 + (zx.d(*rbx) << 1) + zx.d(*rsi)) u>> 2).b
*(result_1 + arg2) = ((zx.d(rsi[1]) + 2 + (zx.d(*rsi) << 1) + zx.d(*rbx)) u>> 2).b
int64_t i_1

do
    uint32_t rax_6 = zx.d(rsi[2])
    uint64_t rdx_12 = zx.q(rsi[1])
    rsi = &rsi[1]
    *r10_3 = ((rax_6 + 2 + (rdx_12 << 1).d + zx.d(rsi[-1])) u>> 2).b
    r10_3 += arg2
    i_1 = i_7
    i_7 -= 1
while (i_1 != 1)
int64_t i_2

do
    uint32_t rax_9 = zx.d(rbx[2])
    uint64_t rdx_16 = zx.q(rbx[1])
    rbx = &rbx[1]
    *(result_1 + 1 - arg3 + rbx) = ((rax_9 + 2 + (rdx_16 << 1).d + zx.d(rbx[-1])) u>> 2).b
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
void* result
int64_t i_3

do
    result = result_1
    int64_t j_1 = 0xf
    int64_t j
    
    do
        *(arg2 + result + 1) = *(result - 1)
        *(result + arg2 + 2) = *result
        result += 2
        j = j_1
        j_1 -= 1
    while (j != 1)
    result_1 += arg2
    i_3 = i_6
    i_6 -= 1
while (i_3 != 1)
return result

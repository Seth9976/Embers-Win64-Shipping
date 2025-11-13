// 函数: sub_1429ee290
// 地址: 0x1429ee290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = &arg3[-1]
char* rdi = arg4
*arg1 = ((zx.d(*rbx) + zx.d(*arg4) + 1) u>> 1).b
void* r9 = &arg4[1]
char* r8_1 = &arg1[arg2 * 3]
int64_t i_6 = 3
int64_t i

do
    uint32_t rcx = zx.d(*(r9 - 1))
    uint32_t rdx = zx.d(*r9)
    r9 += 5
    r8_1[neg.q(arg2) * 2] = ((rdx + rcx + 1) u>> 1).b
    r8_1[neg.q(arg2)] = ((zx.d(*(r9 - 5)) + zx.d(*(r9 - 4)) + 1) u>> 1).b
    *r8_1 = ((zx.d(*(r9 - 4)) + zx.d(*(r9 - 3)) + 1) u>> 1).b
    r8_1[arg2] = ((zx.d(*(r9 - 3)) + zx.d(*(r9 - 2)) + 1) u>> 1).b
    r8_1[arg2 << 1] = ((zx.d(*(r9 - 2)) + 1 + zx.d(*(r9 - 1))) u>> 1).b
    r8_1 = &r8_1[arg2 * 5]
    i = i_6
    i_6 -= 1
while (i != 1)
void* r10_4 = &arg1[1 + (arg2 << 1)]
int64_t i_7 = 0xe
arg1[1] = ((zx.d(*arg3) + 2 + (zx.d(*rbx) << 1) + zx.d(*rdi)) u>> 2).b
arg1[1 + arg2] = ((zx.d(*rbx) + 2 + (zx.d(*rdi) << 1) + zx.d(rdi[1])) u>> 2).b
int64_t i_1

do
    uint32_t rax_8 = zx.d(rdi[2])
    uint64_t rdx_24 = zx.q(rdi[1])
    rdi = &rdi[1]
    *r10_4 = ((rax_8 + 2 + (rdx_24 << 1).d + zx.d(rdi[-1])) u>> 2).b
    r10_4 += arg2
    i_1 = i_7
    i_7 -= 1
while (i_1 != 1)
int64_t i_4 = 0xe
int64_t i_2

do
    uint32_t rax_11 = zx.d(rbx[2])
    uint64_t rdx_28 = zx.q(rbx[1])
    rbx = &rbx[1]
    *(&arg1[2] - arg3 + rbx) = ((rax_11 + 2 + (rdx_28 << 1).d + zx.d(rbx[-1])) u>> 2).b
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
void* result_1 = &arg1[2 + arg2]
int64_t i_5 = 0xf
void* result
int64_t i_3

do
    result = result_1
    int64_t j_1 = 0xe
    int64_t j
    
    do
        *result = *(-2 - arg2 + result)
        result += 1
        j = j_1
        j_1 -= 1
    while (j != 1)
    result_1 += arg2
    i_3 = i_5
    i_5 -= 1
while (i_3 != 1)
return result

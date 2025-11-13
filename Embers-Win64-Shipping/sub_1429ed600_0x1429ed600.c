// 函数: sub_1429ed600
// 地址: 0x1429ed600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r10 = arg4
void* rbx_1 = arg1 - arg3
char* r9 = arg3
int64_t i_6 = 4
int64_t i

do
    uint32_t rdx = zx.d(*r9)
    void* r8 = rbx_1 + r9
    r9 = &r9[4]
    *r8 = ((rdx + zx.d(*(r8 + arg3 - arg1 - 1)) + 1) u>> 1).b
    *(rbx_1 + r9 - 3) = ((zx.d(r9[-4]) + zx.d(r9[-3]) + 1) u>> 1).b
    *(rbx_1 + r9 - 2) = ((zx.d(r9[-2]) + zx.d(r9[-3]) + 1) u>> 1).b
    *(rbx_1 + r9 - 1) = ((zx.d(r9[-2]) + 1 + zx.d(r9[-1])) u>> 1).b
    i = i_6
    i_6 -= 1
while (i != 1)
uint8_t* rdi_1 = arg1 + arg2
void* r9_1 = &arg3[-1]
int64_t i_4 = 0xf
*rdi_1 = ((zx.d(*arg3) + 2 + (zx.d(arg3[-1]) << 1) + zx.d(*r10)) u>> 2).b
int64_t i_1

do
    uint32_t rax_7 = zx.d(*(r9_1 + 2))
    uint64_t rdx_17 = zx.q(*(r9_1 + 1))
    r9_1 += 1
    *(rdi_1 - arg3 + 2 + r9_1 - 1) = ((rax_7 + 2 + (rdx_17 << 1).d + zx.d(*(r9_1 - 1))) u>> 2).b
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
void* rdi_2 = &rdi_1[arg2]
int64_t i_5 = 0xd
void* r9_2 = rdi_2 + arg2
*rdi_2 = ((zx.d(r10[1]) + 2 + (zx.d(*r10) << 1) + zx.d(arg3[-1])) u>> 2).b
int64_t i_2

do
    uint32_t rax_13 = zx.d(r10[2])
    uint64_t rdx_25 = zx.q(r10[1])
    r10 = &r10[1]
    *r9_2 = ((rax_13 + 2 + (rdx_25 << 1).d + zx.d(r10[-1])) u>> 2).b
    r9_2 += arg2
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
void* result_1 = rdi_2 + 1
uint64_t i_7 = zx.q((i_5 + 0xe).d)
void* result
uint64_t i_3

do
    result = result_1
    int64_t j_1 = 0xf
    int64_t j
    
    do
        *result = *(-1 - arg2 * 2 + result)
        result += 1
        j = j_1
        j_1 -= 1
    while (j != 1)
    result_1 += arg2
    i_3 = i_7
    i_7 -= 1
while (i_3 != 1)
return result

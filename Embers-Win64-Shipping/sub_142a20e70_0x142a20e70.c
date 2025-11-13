// 函数: sub_142a20e70
// 地址: 0x142a20e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
char* rbx = arg2
uint64_t rdx = zx.q(arg1[0x19])
void* rdi_1 = &rbx[sx.q(*arg1)]
int64_t rbp = sx.q(arg1[4])
uint64_t count_1 = zx.q(rdx.d)
int64_t i_5 = 0x10
char* rsi = rdi_1 - 1
int64_t i

do
    memset(rbx + 0 - rdx, zx.d(*rbx), count_1)
    memset(rdi_1, zx.d(*rsi), count_1)
    rbx = &rbx[rbp]
    rsi = &rsi[rbp]
    rdi_1 += rbp
    i = i_5
    i_5 -= 1
while (i != 1)
int64_t i_3 = 8
uint64_t count = zx.q(count_1.d u>> 1)
void* rbx_2 = arg3 - count
int64_t i_4 = 8
int64_t rdx_3 = sx.q(*(arg_8 + 0x14))
int64_t rbp_1 = sx.q(*(arg_8 + 0x24))
int64_t r15 = rdx_3 + arg3
void* r15_1 = r15 - rbx_2
void* r13_4 = r15 - 1 - rbx_2
void* r12_1 = arg3 - rbx_2
int64_t i_1

do
    memset(rbx_2, zx.d(*(r12_1 + rbx_2)), count)
    memset(r15_1 + rbx_2, zx.d(*(rbx_2 + r13_4)), count)
    rbx_2 += rbp_1
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
int64_t r14_1 = rdx_3 + arg4
int64_t rbx_4 = arg4 - count
int64_t r14_2 = r14_1 - rbx_4
void* r15_3 = r14_1 - 1 - rbx_4
void* r12_3 = arg4 - rbx_4
int64_t result
int64_t i_2

do
    memset(rbx_4, zx.d(*(r12_3 + rbx_4)), count)
    result = memset(r14_2 + rbx_4, zx.d(*(r15_3 + rbx_4)), count)
    rbx_4 += rbp_1
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
return result

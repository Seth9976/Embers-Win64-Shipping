// 函数: sub_1429eeb40
// 地址: 0x1429eeb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = arg4
uint8_t* rdx = arg1
int64_t i_6 = 0x1f
int64_t i

do
    uint32_t r10_1 = zx.d(*rax)
    uint32_t r8 = zx.d(rax[1])
    rax = &rax[1]
    *rdx = ((r10_1 + 1 + r8) u>> 1).b
    rdx += arg2
    i = i_6
    i_6 -= 1
while (i != 1)
char* r14 = arg2 * 0x1f
int64_t r11 = 0x1e
void* r8_1 = &arg4[2]
uint8_t* r10_5 = &arg1[1]
int64_t i_7 = 0x1e
*(r14 + arg1) = arg4[0x1f]
int64_t i_1

do
    uint32_t rax_2 = zx.d(*(r8_1 - 2))
    uint64_t rdx_1 = zx.q(*(r8_1 - 1))
    r8_1 += 1
    *r10_5 = ((rax_2 + 2 + (rdx_1 << 1).d + zx.d(*(r8_1 - 1))) u>> 2).b
    r10_5 += arg2
    i_1 = i_7
    i_7 -= 1
while (i_1 != 1)
char* r10_6 = arg2 * 0x1e
*(r10_6 + &arg1[1]) = ((zx.d(arg4[0x1e]) + 2 + (zx.q(arg4[0x1f]) * 3).d) u>> 2).b
uint64_t i_4 = zx.q((i_7 + 0xf).d)
*(r14 + &arg1[1]) = arg4[0x1f]
void* rcx_2 = &arg1[3] + r14
uint64_t i_2

do
    *(rcx_2 - 1) = arg4[0x1f]
    rcx_2 += 2
    *(rcx_2 - 2) = arg4[0x1f]
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
void* result_1 = r10_6 + &arg1[2]
void* result
int64_t temp4_1

do
    result = result_1
    int64_t i_5 = 0xf
    int64_t i_3
    
    do
        *result = *(arg2 - 2 + result)
        *(result + 1) = *(arg2 - 1 + result)
        result += 2
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)
    result_1 += neg.q(arg2)
    temp4_1 = r11
    r11 -= 1
while (temp4_1 - 1 s>= 0)
return result

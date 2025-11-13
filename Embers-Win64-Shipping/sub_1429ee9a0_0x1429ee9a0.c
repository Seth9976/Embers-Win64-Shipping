// 函数: sub_1429ee9a0
// 地址: 0x1429ee9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8 = arg4 + 1
int64_t rsi_1 = neg.q(arg2)
uint8_t* r9 = arg1 + (arg2 << 1)
int64_t i_5 = 3
int64_t i

do
    uint32_t rcx = zx.d(r8[-1])
    uint32_t rdx = zx.d(*r8)
    r8 = &r8[5]
    r9[neg.q(arg2) * 2] = ((rdx + rcx + 1) u>> 1).b
    r9[rsi_1] = ((zx.d(r8[-5]) + zx.d(r8[-4]) + 1) u>> 1).b
    *r9 = ((zx.d(r8[-4]) + zx.d(r8[-3]) + 1) u>> 1).b
    r9[arg2] = ((zx.d(r8[-3]) + zx.d(r8[-2]) + 1) u>> 1).b
    r9[arg2 << 1] = ((zx.d(r8[-2]) + 1 + zx.d(r8[-1])) u>> 1).b
    r9 = &r9[arg2 * 5]
    i = i_5
    i_5 -= 1
while (i != 1)
void* r8_1 = arg4 + 2
char* r14_1 = arg2 * 0xf
uint8_t* r9_1 = arg1 + 1
int64_t i_6 = 0xe
*(r14_1 + arg1) = *(arg4 + 0xf)
int64_t i_1

do
    uint32_t rax_3 = zx.d(*(r8_1 - 2))
    uint64_t rdx_16 = zx.q(*(r8_1 - 1))
    r8_1 += 1
    *r9_1 = ((rax_3 + 2 + (rdx_16 << 1).d + zx.d(*(r8_1 - 1))) u>> 2).b
    r9_1 = &r9_1[arg2]
    i_1 = i_6
    i_6 -= 1
while (i_1 != 1)
void* r9_2 = arg2 * 0xe
*(r9_2 + arg1 + 1) = ((zx.d(*(arg4 + 0xe)) + 2 + (zx.q(*(arg4 + 0xf)) * 3).d) u>> 2).b
*(r14_1 + arg1 + 1) = *(arg4 + 0xf)

for (int64_t i_2 = 0; i_2 s< 0xe; i_2 += 1)
    *(r14_1 + arg1 + 2 + i_2) = *(arg4 + 0xf)

int64_t r8_2 = 0xe
void* result_1 = r9_2 + arg1 + 2
void* result
int64_t temp3_1

do
    result = result_1
    int64_t i_4 = 0xe
    int64_t i_3
    
    do
        *result = *(arg2 + result - 2)
        result += 1
        i_3 = i_4
        i_4 -= 1
    while (i_3 != 1)
    result_1 += rsi_1
    temp3_1 = r8_2
    r8_2 -= 1
while (temp3_1 - 1 s>= 0)
return result

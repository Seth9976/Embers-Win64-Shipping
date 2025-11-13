// 函数: sub_1403cbbd0
// 地址: 0x1403cbbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x11) != 0x10)
    return 

uint32_t rax = *arg1
uint32_t r8_1 = zx.d(*(arg1 + 0x12))
int32_t r10_2 = rax * r8_1

if (r10_2 == 0)
    return 

int32_t r9_2 = r10_2 & 3

if (r10_2 - 1 u>= 3)
    int32_t i_1 = r9_2 - r10_2
    int32_t i
    
    do
        char r10_3 = *arg2
        *arg2 = arg2[1]
        arg2[1] = r10_3
        char r10_4 = arg2[2]
        arg2[2] = arg2[3]
        arg2[3] = r10_4
        char r10_5 = arg2[4]
        arg2[4] = arg2[5]
        arg2[5] = r10_5
        char r10_6 = arg2[6]
        arg2[6] = arg2[7]
        arg2[7] = r10_6
        arg2 = &arg2[8]
        i = i_1
        i_1 += 4
    while (i != 0xfffffffc)

if (r9_2 == 0)
    return 

rax.w = mulu.dp.b(rax.b, r8_1.b)
int64_t rcx_5 = 0

do
    char r9_3 = arg2[rcx_5 << 1]
    arg2[rcx_5 << 1] = arg2[(rcx_5 << 1) + 1]
    arg2[(rcx_5 << 1) + 1] = r9_3
    rcx_5 += 1
while ((zx.d(rax.b) & 3) != rcx_5.d)

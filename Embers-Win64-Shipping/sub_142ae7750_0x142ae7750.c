// 函数: sub_142ae7750
// 地址: 0x142ae7750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int32_t rcx = *(arg1 + 8)

if (arg2 s>= rcx)
    return 

int64_t r9_1 = sx.q(arg2) << 3
int64_t r10_1 = *(r9_1 + *(arg1 + 0x10))

if (arg2 s< rcx - 1)
    do
        int64_t* rcx_1 = *(arg1 + 0x10)
        r9_1 += 8
        arg2 += 1
        *(rcx_1 + r9_1 - 8) = *(rcx_1 + r9_1)
    while (arg2 s< *(arg1 + 8) - 1)

*(arg1 + 8) -= 1

if (r10_1 == 0)
    return 

uint64_t rax = *(arg1 + 0x18)

if (rax != 0)
    jump(rax)

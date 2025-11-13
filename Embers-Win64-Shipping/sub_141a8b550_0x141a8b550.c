// 函数: sub_141a8b550
// 地址: 0x141a8b550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= arg3)
    return 

float* rax

if (arg3 - arg2 s>= 4)
    int64_t r9_1 = **arg1
    rax = arg1[1]
    
    do
        float zmm1 = *(r9_1 + (arg2 << 2) + 4)
        *(r9_1 + (arg2 << 2)) = *(r9_1 + (arg2 << 2)) / *rax
        float zmm0 = *(r9_1 + (arg2 << 2) + 8)
        *(r9_1 + (arg2 << 2) + 4) = zmm1 / *rax
        zmm1 = *(r9_1 + (arg2 << 2) + 0xc)
        *(r9_1 + (arg2 << 2) + 8) = zmm0 / *rax
        *(r9_1 + (arg2 << 2) + 0xc) = zmm1 / *rax
        arg2 += 4
    while (arg2 s< arg3 - 3)

if (arg2 s>= arg3)
    return 

int64_t rcx_1 = **arg1
rax = arg1[1]

do
    *(rcx_1 + (arg2 << 2)) = *(rcx_1 + (arg2 << 2)) / *rax
    arg2 += 1
while (arg2 s< arg3)

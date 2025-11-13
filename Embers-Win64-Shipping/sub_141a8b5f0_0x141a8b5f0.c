// 函数: sub_141a8b5f0
// 地址: 0x141a8b5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= arg3)
    return 

if (arg3 - arg2 s>= 4)
    void* r9_1 = arg1[1]
    int64_t r10_1 = **arg1
    
    do
        *(r10_1 + (arg2 << 2)) =
            *(r10_1 + (arg2 << 2)) - *(*(r9_1 + 0x10) + (arg2 << 2)) f* *(r9_1 + 4)
        *(r10_1 + (arg2 << 2) + 4) =
            *(r10_1 + (arg2 << 2) + 4) - *(*(r9_1 + 0x10) + (arg2 << 2) + 4) f* *(r9_1 + 4)
        *(r10_1 + (arg2 << 2) + 8) =
            *(r10_1 + (arg2 << 2) + 8) - *(*(r9_1 + 0x10) + (arg2 << 2) + 8) f* *(r9_1 + 4)
        *(r10_1 + (arg2 << 2) + 0xc) =
            *(r10_1 + (arg2 << 2) + 0xc) - *(*(r9_1 + 0x10) + (arg2 << 2) + 0xc) f* *(r9_1 + 4)
        arg2 += 4
    while (arg2 s< arg3 - 3)

if (arg2 s>= arg3)
    return 

void* rcx_1 = arg1[1]
int64_t r9_2 = **arg1

do
    *(r9_2 + (arg2 << 2)) = *(r9_2 + (arg2 << 2)) - *(*(rcx_1 + 0x10) + (arg2 << 2)) f* *(rcx_1 + 4)
    arg2 += 1
while (arg2 s< arg3)
